/* Unidad 2. Ejercicio 1
   Autor: Jorge Emilio Santacruz Morales
   Fecha: 22/09/2022
   
*/

//principal library
#include <iostream>

using namespace std;

int main (){

//variables for the correct operations
   float renta, impuesto, pago;

//input for the amount 
    cout << "ingresa el monto de tu renta" << endl; 
    cin >> renta;

//begin of the conditional depending of the amount
    if (renta < 10000){

        impuesto=0.05;

        cout << "tu impuesto es de: "<< impuesto << endl;
        pago= impuesto*renta;
        cout << "debes pagar: "<< pago << endl;
    }

    else if (renta >=10000 && renta<20000){

        impuesto=0.15;

        cout << "tu impuesto es de: "<< impuesto << endl;
        pago= impuesto*renta;
        cout << "debes pagar: "<< pago << endl;
    }

    else if (renta >= 20000 && renta < 35000){

        impuesto=0.20;

        cout << "tu impuesto es de: "<< impuesto << endl;
        pago= impuesto*renta;
        cout << "debes pagar: "<< pago << endl;
    }

    else if (renta >= 35000 && renta <=60000){

        impuesto=0.30;

        cout << "tu impuesto es de: "<< impuesto << endl;
        pago= impuesto*renta;
        cout << "debes pagar: "<< pago << endl;
    }

    else if (renta > 60000){

        impuesto=0.45;

        cout << "tu impuesto es de: "<< impuesto << endl;
        pago= impuesto*renta;
        cout << "debes pagar: "<< pago << endl;
    }





    return 0;
}