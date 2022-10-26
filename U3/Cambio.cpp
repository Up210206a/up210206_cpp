/*
Author: Jorge Santacruz
Date: 24/oct/22
description: This code ask the user for an amount of money, this number descomposes in different tickets and coins. 
*/

#include <iostream>

using namespace std;



int quin=0,doc=0,cien=0,cinc=0,vein=0,diez=0,cinco=0,dos=0,uno=0,residuo=0;



int hacerCalculo(int,int);
void obtenerCambio (int);
void imprimeCambio();



int main(){

    int cantidad=0;

    cout << "PLEASE INTRODUCE AN AMOUNT OF MONEY" << endl; 
    cin >> cantidad;

    obtenerCambio(cantidad);
    imprimeCambio();







return 0;

}

void obtenerCambio (int dinero){

    quin = hacerCalculo(500,dinero);
    doc = hacerCalculo(200,residuo);
    cien = hacerCalculo(100,residuo);
    cinc = hacerCalculo(50,residuo);
    vein = hacerCalculo(20,residuo);
    diez = hacerCalculo(10,residuo);
    cinco = hacerCalculo(5,residuo);
    dos = hacerCalculo(2,residuo);
    uno = hacerCalculo(1,residuo);

}

int hacerCalculo(int num, int monto){

    int res=0;
   

     do{

        ((monto-num)>=0)? res ++ : res=res;

        monto=monto-(res*num);
        residuo=monto%num;

    }while ((monto-num)>=0);


    return res;
}

void imprimeCambio(){

    cout << "$500: " << quin <<endl;
    cout << "$200: " << doc <<endl;
    cout << "$100: " << cien <<endl;
    cout << "$50: " << cinc <<endl;
    cout << "$20: " << vein <<endl;
    cout << "$10: " << diez <<endl;
    cout << "$5: " << cinco <<endl;
    cout << "$2: " << dos <<endl;
    cout << "$1: " << uno <<endl;
}