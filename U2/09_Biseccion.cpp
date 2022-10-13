/* Unit 2. Practice 9
   Autor: Jorge Emilio Santacruz Morales
   Fecha: 13/10/2022
   
*/

//y=x^2+3x+8

//libraries of the code
#include <iostream>
#include <cmath>


using namespace std;

float resolverEcuacion(float valor){

    //con la ecuacion y=x^2+3x+8
    return pow(valor,3)+(3*valor)+8;
}


//Main function of the program
int main (){

    float a=0;
    float b=0;
    float c=(a+b)/2;
    float ya=resolverEcuacion(a);
    float yb=resolverEcuacion(b);
    float yc=resolverEcuacion(c);

    /*cout << "INSERT A: " << endl;
    cin >> a;
    cout << "INSERT B: " << endl;
    cin >> b;
    */

    cout << ya << endl; 



    return 0; 
}