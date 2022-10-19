/*
   Unit 2. Practice 9
   Autor: Jorge Emilio Santacruz Morales
   Fecha: 12/10/2022

*/

//Libraries of the code
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

//Function that solves the ecuation
float resolverEcuacion(float num){
    //x²-x-12
    return (pow(num, 2) - num - 12);
}

// Function that prints a line 
void imprimirlinea()
{
    for (int i = 0; i < 161; i++)
    {
        cout << "-";
    }
    cout << "\n";

    
}

//main function
int main (){


    //Variables of the main function
    float error=0.01;
    double a=0,b=0,c=0,ya=0,yb=0,yc=0,solucion;
    int comparacion=1;

    //Input of the cosde that introduces variables of the ecuation
    cout << "Introduce A: " <<endl;
    cin >> a;
    cout << "Introduce B: " <<endl;
    cin >> b;

    //Prints the header of the comparision table
    imprimirlinea();
    cout << "| Comparacion \t| a \t\t\t| b \t\t\t| c \t\t\t| y(a)\t\t\t| y(b)\t\t\t| y(c)\t\t\t| "<<endl;
    imprimirlinea();


    //Main cycle that compares the ranges of the ecuation
    do{

        c = (a + b) / 2;
        ya = resolverEcuacion(a);
        yb = resolverEcuacion(b);
        yc = resolverEcuacion(c);

        cout << "| " << comparacion << "\t\t| " << fixed << setprecision(8) << a << "\t\t| " << b << "\t\t| " << c << "\t\t| " << ya << "\t\t| " << yb << "\t\t| " << yc << "\t\t| \n";
        
        
        imprimirlinea();

        comparacion ++;

        if((ya*yc)<0){
            b=c;
        }
        else if((yc*yb)<0){
            a=c;
        }
        else{

            cout << "NO ROOT" <<endl;
            break;
        }

    }while(abs(yc)>=error);

    solucion=c;

     // Output of the code-Solution of the ecuation
    if (solucion != 0){

        cout << "ROOT: :" << c << endl;
        
    }

    else{

        cout << "NO ROOT IN THE RANGE" << endl;
    }



    return 0;
}




