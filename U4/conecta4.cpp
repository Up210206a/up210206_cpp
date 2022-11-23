/*
Author: Jorge Santacruz
Date: 14/Nov/22
description: This code simulates a boardgame call conecta 4.
*/

/*  BOARD

  1   2   3   4   5   6
|   |   |   |   |   |   |   
|   |   |   |   |   |   |     
|   |   |   |   |   |   |      
|   |   |   |   |   |   |      
|   |   |   |   |   |   |     
|   |   |   |   |   |   |      
|   |   |   |   |   |   |      
|   |   |   |   |   |   |     


*/

#include <iostream>

void tableroConecta();
int obtenerJugada();
void colocarJugada(int);


char areaJuego[8][6]={{1,2,3,4,5,6},{7,8,9,10,11,12},{13,14,15,16,17,18},{19,20,21,22,23,24},
{25,26,27,28,29,30},{31,32,33,34,35,36},{37,38,39,40,41,42},{43,44,45,46,47,48}};

using namespace std;

int main(){

    int tablero,tipoJuego;

 

 cout<<"---------- CONECTA 4----------"<<endl;
 cout<<"PLEASE SELECT YOUR OPONENT"<<endl<<"1.....P2"<<endl<<"2.....CPU"<<endl;
 cin>>tipoJuego;

 tableroConecta();

 if(tipoJuego==1){
   
        obtenerJugada();
    
    
 }


return 0;

}

void tableroConecta (){

    int row,col,x=0,y=0;

    cout<<"  1   2   3   4   5   6"<<endl;

    for (row=0;row<=8;row++){
        
        for(col=0;col<=25;col++){

            if(col==0||col==4||col==8||col==12||col==16||col==20||col==24){
                cout<<"|";
            }
            else if(col==3||col==7||col==11||col==15||col==19||col==23){

                
                x++;

            }
            else {
                cout<<" ";
            }
        }

        cout<<endl;

       
    }

}

int obtenerJugada(){

    int jugada=0;

    cout<<"PLEASE SELECT YOUR PLAY"<<endl;
    cin>>jugada;

    if(jugada>=1 && jugada <=6){
        return jugada;
    }
    else{
        cout<<"ERROR TRY AGAIN"<<endl;
    }


}

void colocarJugada (int jugada){
    int row=0,col=0;

    row=jugada;
    col=jugada;

    areaJuego[row][col]='X';



}