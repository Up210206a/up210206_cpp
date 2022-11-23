/*
Author: Jorge Santacruz
Date: 7/nov/22
description: 
*/

/*  DISPLAY OF THE PROGRAM

     1 | 2 | 3
    ---|---|---
     4 | 5 | 6  
    ---|---|---
     7 | 8 | 9

*/

#include <iostream>
#include<time.h>
#include<time.h>




using namespace std;

void createBoard (int);
int selectPlay ();
bool checkPlay (int play);
void insertPlay(int play);
bool checkWinner(bool);
int selectPlayCPU ();
void insertPlayCpu(int play);
int cpuPlay ();
void gotoxy(int x,int y);
int bestPlay(char entradaJugador);

char game[3][3];
char gameArea[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char gameAreaPC[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int turnPlayer= 0;


int main(){
    int op=0,board,play=0;
    bool box=true,winner=false;
    
    gotoxy(62,4);
    cout<<"----------GAME OF THE CAT----------"<<endl<<endl;
    gotoxy(70,6);
    cout<<"SELECT YOUR OPONENT"<<endl<<endl;
    gotoxy(70,8);
    cout<<"1.......PLAYER 2"<<endl;
    gotoxy(70,9);
    cout<<"2.......CPU NORMAL"<<endl;
    gotoxy(70,10);
    cin >>op;
    
    
    
    
 
    createBoard(board);
  

    if(op==1){

        do{
        play=selectPlay();
        box=checkPlay(play);
            if(box==true){
            
                do
                {
                    cout << "INVALID GAME! TRY AGAIN"<<endl;
                    break;
                } while (box == true);
            
            }
            else if (box == false){

                system("clear");
                insertPlay(play);
                createBoard(board);
                turnPlayer++;
            }
            winner=checkWinner(winner);

        }while (turnPlayer<=9 && winner==false);

               
            if (turnPlayer<10){
                if (turnPlayer % 2 == 0){
                    cout << "PLAYER 2 WINS"<<endl;
                }
                else{
                    cout << "PLAYER 1 WINS"<<endl;
                }
            } 
            else{
                cout << "WE HAVE A TIE"<<endl;
            }


    }
    else if(op==2){

        if(turnPlayer%2!=0){
            play=selectPlay();
        }
        else{
            play=cpuPlay();
        }
   
    }
           

    return 0;

}

void createBoard (int){

      int x = 0, y = 0;
    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col < 9; col++)
        {
            if (row == 1 || row == 3)
            {
                cout << "-";
            }
            else if (col == 1 || col == 4 || col == 7)
            {
                cout << gameArea[x][y];
                y++;
            }
            else
            {
                cout << " ";
            }
            if (col == 2 || col == 5)
            {
                cout << "|";
            }
        }
        cout <<endl;
        if (row % 2 == 0)
        {
            x++;
        }

        y = 0;
    }
 cout<<endl;

}

int selectPlay(){
    int turn=0;
    int gamer;

    

     do{
        if(turnPlayer%2==0){
            gamer=1;
        }
        else{
            gamer=2;
        }

        cout << "PLAYER " << gamer <<" Select your play: 1-9 : "<<endl;
        cin >> turn;
    } while (turn < 0 || turn > 9);

    return turn;

}

bool checkPlay(int play){
     int row = play / 10, col = play - 1;
    if (gameArea[row][col] == 'X' || gameArea[row][col] == 'O')
    {
        return true;
    }
    else
    {
        return false;
    }
}

void insertPlay(int play){
    if (turnPlayer % 2 == 0)
    {
        int row = play / 10, col = play - 1;
        gameArea[row][col] = 'O';
    }
    else
    {
        int row = play / 10, col = play - 1;
        gameArea[row][col] = 'X';
    }

}

bool checkWinner(bool){
    int punto = 0;
    bool checkWinner = false;
    for (int box = 0; box < 3; box++)
    {
        if ((gameArea[0][box] == gameArea[1][box]) && (gameArea[0][box] == gameArea[2][box]))
        {
            checkWinner = true;
            break;
        }
        else if ((gameArea[box][0] == gameArea[box][1]) && (gameArea[box][0] == gameArea[box][2]))
        {
            checkWinner = true;
            break;
        }
        else if ((gameArea[box][box] == gameArea[box+1][box+1]) && (gameArea[box][box] == gameArea[box+2][box+2]))
        {
            checkWinner = true;
            break;
        }
        else if ((gameArea[2][0] == gameArea[1][1]) && (gameArea[2][0] == gameArea[0][2]))
        {
            checkWinner = true;
            break;
        }
    }
    return checkWinner;
}

int selectPlayCPU(){
    int turn=0;

    do{

        cout << "PLAYER 1 "  <<" Select your play: 1-9 : "<<endl;
        cin >> turn;
    } while (turn < 0 || turn > 9);

    return turn;

}

void insertPlayCpu(int play){
    
        int row = play / 10, col = play - 1;
        gameArea[row][col] = 'O';
}



int cpuPlay (){

    int playPc;
    bool checkPlay = false;
    playPc = bestPlay(PC);
    if (playPc != -1)
    {
        return playPc;
    }

    playPc= bestPlay(JUGADOR);
    if (playPc != -1)
    {
        return playPc;
    }
    while (checkPlay== false)
    {
        checkPlay = checkPlay(playPc);
        playPc = 1 + rand() % 9;
    }
    return playPc;
}

void areaPC()
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            gameAreaPC[row][col] = gameArea[row][col];
        }
    }
}

int bestPlay(char entradaJugador){
    bool jugadaUsada= false;
    bool ganador = false;
    int jugadaPC = 0;
    areaPC();
    if (entradaJugador == 'X')
    {
        do
        {
            jugadaPC++;
            jugadaUsada = comprobarCasillaOcupadaPC(jugadaPC);
            if (jugadaUsada == false)
            {
                colocarJugadaPCenX(jugadaPC);
                ganador = revisarGanadorPC(jugadaPC);
            }
            areaPC();
        } while (jugadaPC <= 9 && ganador == false);
    }
    else
    {
        do
        {
            jugadaPC++;
            jugadaUsada = comprobarCasillaOcupadaPC(jugadaPC);
            if (jugadaUsada == false)
            {
                colocarJugadaPCenO(jugadaPC);
                ganador = revisarGanadorPC(jugadaPC);
            }
            areaPC();
        } while (jugadaPC <= 9 && ganador == false);
    }
    if (jugadaPC >= 10)
    {
        jugadaPC = -1;
    }
    return jugadaPC;
}

void gotoxy (int x,int y){
    cout<<"\033["<<y<<";"<<x<<"f";
}