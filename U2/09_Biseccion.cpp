/* Unit 2. Practice 8
   Autor: Jorge Emilio Santacruz Morales
   Fecha: 12/10/2022
   
*/



#include <iostream>
#include <cmath>
using namespace std;




double biseccion(double num){
    //Equation y=x²+3x+8
    return pow(num,2)-num-12;
}


int main(){

    double a,b,c,ya,yb,yc;
    float error=0.01;

    cout << "INTRODUCE A"<< endl;
    cin >> a;
    cout << "INTRODUCE B"<<endl;
    cin >> b;

    do
    {
        ya = biseccion(a);
        yb = biseccion(b);

        if ((yb > 0 && ya < 0) || (ya > 0 && yb < 0)){

            c = (ya+yb)/2;
            yc = ya;
            cout << c;
        }

        else{

            cout << "NO ROOT" << endl;
            break;
        }
        
    } while (abs(yc)>=error);
    return 0;
}

/*
if(ya*yc<0){
    b=c
}

else if(yc*yb<0){
    a=c
}
else{
    cout <<"NO ROOT"<< endl;
}
*/