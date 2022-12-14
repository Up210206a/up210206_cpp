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
#include <stdalign.h>
#include <time.h>
#include <unistd.h>




using namespace std;

void createBoard (int);
int selectPlay ();
bool checkPlay (int,string);
void insertPlay(int,string,string );
bool checkWinner(string);
int selectPlayCPU ();
void insertPlayCpu(int,string,string);
int cpuPlay ();
void gotoxy(int x,int y);
int getBestPlay(string );
int getPlay();

char game[3][3];
char gameArea[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char gameAreaCPU[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int turnPlayer= 0;
const string BOARD = "Real";
const string CPUBOARD = "image";
const string CPU = "CPU";
const string PLAYER = "PLAYER";
const string PC = "Robot";


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
        box=checkPlay(play,BOARD);
            if(box==true){
            
                do
                {
                    cout << "INVALID GAME! TRY AGAIN"<<endl;
                    break;
                } while (box == true);
            
            }
            else if (box == false){

                system("clear");
                insertPlay(play,BOARD,PLAYER);
                createBoard(board);
                turnPlayer++;
            }
            winner=checkWinner(BOARD);

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
    else if (op == 2){
        do
        {
            if (turnPlayer % 2 == !0)
            {
                do
                {
                    createBoard(board);
                    play = selectPlay();

                    box = checkPlay(play, BOARD);
                    if (box == true)
                    {
                        system("clear");
                        cout << "Trye again \n";
                    }
                } while (box == true);
                insertPlay(play,BOARD, PLAYER);
                winner = checkWinner(BOARD);
            }
            else
            {
                createBoard(board);
                play = getPlay();
                insertPlay(play,BOARD, CPU);
                winner = checkWinner(BOARD);
            }
        } while (turnPlayer<=9 && winner==false);
        system("clear");
        createBoard(board);
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

bool checkPlay(int play,string BOARD){
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

void insertPlay(int play,string,string){
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

bool checkWinner(string){
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
int getPlay()
{
    bool box = true;
    int play;
    srand(time(NULL));
    play = getBestPlay(CPU);
    if (play != -1)
    {
        return play;
    }
    play = getBestPlay(PLAYER);
    if (play != -1)
    {
        return play;
    }
    while (box == true)
    {
        play= 1 + rand() % 9;
        box= checkPlay (play,BOARD);
    }
    return play;
}

void insertPlayCpu(int play){
    
        int row = play / 10, col = play - 1;
        gameArea[row][col] = 'O';
}



void areaCPU()
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            gameAreaCPU[row][col] = gameArea[row][col];
        }
    }
}

int BestPlay(string jugador){

    bool busyBox = false;
    bool checkWin = false;
    int play = 0;
    areaCPU();
    if (jugador == CPU)
    {
        do
        {
            play++;
            busyBox=checkPlay(play, CPUBOARD);
            if (busyBox == false){
                insertPlay(play, CPUBOARD, CPU);
                checkWin = checkWinner(CPUBOARD);
            }
            areaCPU();
        } while (play <= 9 && checkWin == false);
    } 
    else if (jugador == PLAYER)
    {
        do
        {
            play++;
            busyBox=checkPlay(play, CPUBOARD);
            if (busyBox== false){
                insertPlay(play, CPUBOARD, PLAYER);
                checkWin = checkWinner(CPUBOARD);
            }
            areaCPU();
        } while (play <= 9 && checkWin == false);
    }
    if (play >= 10){
        play= -1;
    }
    return play;
}


void gotoxy (int x,int y){
    cout<<"\033["<<y<<";"<<x<<"f";
}