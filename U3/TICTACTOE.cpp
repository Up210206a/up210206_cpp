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

//LIBRARIES OF THE CODE
#include <iostream>
#include <time.h>


using namespace std;

//FUNCTIONS OF THE PROGRAM
void createBoard ();
void areaCPU();
int selectPlay ();
bool checkPlay (int,string);
void insertPlay(int,string,string );
bool checkWinner(string);
int selectPlayCPU ();
int cpuPlay ();
void gotoxy(int x,int y);
int getBestPlay(string );
int getPlay();

//GLOBAL VARIABLES OF THE PROGRAM
char game[3][3];
char gameArea[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char gameAreaCPU[3][3];
int turnPlayer= 1;
const string BOARD = "Real";
const string CPUBOARD = "image";
const string CPU = "CPU";
const string PLAYER = "PLAYER";


//MAIN FUNCTION
int main(){
    int op=0,board,play=0;
    bool box=true,winner=false;
    
    gotoxy(62,4);
    cout<<"----------TIC TAC TOE----------"<<endl<<endl;
    gotoxy(70,6);
    cout<<"SELECT YOUR OPONENT"<<endl<<endl;
    gotoxy(70,8);
    cout<<"1.......PLAYER 2"<<endl;
    gotoxy(70,9);
    cout<<"2.......CPU"<<endl;
    gotoxy(70,10);
    cin >>op;

     createBoard();
  
    //FIRST OPTION OF THE PROGRAM THAT ENABLE YOU TO PLAY WITH ANOTHER USER
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
               
                createBoard();
                 
                
            }
            winner=checkWinner(BOARD);

        }while (turnPlayer<=9 && winner==false);

               
            if (turnPlayer<10){
                if (turnPlayer % 2 == 0){
                    cout << "PLAYER 1 WINS"<<endl;
                }
                else{
                    cout << "PLAYER 2 WINS"<<endl;
                }
            } 
            else{
                cout << "WE HAVE A TIE"<<endl;
            }


    }
    //SECOND MAIN OPTION OF THE PROGRAM THAT LET YOU PLAY WITH THE CPU
    else if (op == 2){
        do{

            system("clear");
            
            if (turnPlayer % 2 == !0)
            {
                do
                {
                    
                    createBoard();
                 
                    play = selectPlay();

                    box = checkPlay(play, BOARD);
                    if (box == true)
                    {
                        system("clear");
                        cout << "Trye again \n";
                        break;
                    }
                } while (box == true);
                insertPlay(play, BOARD, PLAYER);
                winner = checkWinner(BOARD);
            }
            else if(turnPlayer%2==0){
                createBoard();
                play = getPlay();
                insertPlay(play,BOARD, CPU);
                winner = checkWinner(BOARD);
            }
        } while (turnPlayer<=9 && winner==false);
        system("clear");
        createBoard();

        if (turnPlayer<10){
                if (turnPlayer % 2 == 0){
                    cout << "PLAYER 1 WINS"<<endl;
                }
                else{
                    cout << "PLAYER 2 WINS"<<endl;
                }
            } 
            else{
                cout << "WE HAVE A TIE"<<endl;
            }
    }
           

    return 0;

}

//FUNCTION THAT CREATES THE BOARD ON THE DISPLAY OF THE TERMINAL
void createBoard (){

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

//FUNCTION THAT LET YOU SELECT A BOX OF THE BOARD
int selectPlay(){
    int turn=0;
    int gamer;

    gotoxy(62,4);
    cout<<"----------TIC TAC TOE----------"<<endl<<endl;

    

     do{
        if(turnPlayer%2!=0){
            gamer=1;
        }
        else{
            gamer=2;
        }
        gotoxy(62,6);
        cout << "PLAYER " << gamer <<" Select your play: 1-9 : "<<endl;
        cin >> turn;
    } while (turn < 0 || turn > 9);

    return turn;

}

//FUNCTION THAT COMPARES IF A MOVE ITS CORRECT OR NOT
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

//FUNCTION THAT INSERT A RECORD ON THE BOARD DEPENDING ON THE TURN
void insertPlay(int play,string board,string gamer){
        char Record;
    if (turnPlayer % 2 == 0)
    {
        Record = 'X';
    }
    else
    {
        Record = 'O';
    }
    int fila = 0, columna = 0;
    for (int numPlay = 1; numPlay < 10; numPlay++)
    {
        if (play == numPlay)
        {
            if (board == BOARD)
            {
                gameArea[fila][columna] = Record;
                break;
            }
            else if (board == CPUBOARD)
            {
                if (gamer == PLAYER)
                {
                    Record = 'O';
                }
                else if (gamer == CPU)
                {
                    Record = 'X';
                }
                gameAreaCPU[fila][columna] = Record;
                break;
            }
        }
        else
        {
            columna++;
            if (columna == 3)
            {
                columna = 0;
                fila++;
            }
        }
    }
    if (board == BOARD){
        turnPlayer++;
    }

}

//THIS FUNCTION CONSTANTLY ANALYZE THE BOARD IF IT EXISTS A WINNER
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

//THIS FUNCTION ENABLE THE CPU TO PUT A RECORD ON THE BOARD
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

//FUNCTION THAT CREATES A VIRTUAL BOARD FOR THE CPU
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

//FUCNTION THAT COMPARES ALL THE BEST MOVES IN THE GAME
int getBestPlay(string gamer){

    bool busyBox = false;
    bool checkWin = false;
    int play = 0;
    areaCPU();
    if (gamer == CPU)
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
    else if (gamer == PLAYER)
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