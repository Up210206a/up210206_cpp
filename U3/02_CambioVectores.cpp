/*
Author: Jorge Santacruz
Date: 27/0ct/22
description: This code separates the money in quiantities             
*/

#include <iostream>

using namespace std;

int contarBilletes(int);
int denominaciones[9]={500,200,100,50,20,10,5,2,1};

int main(){

    int monto=0;

    cout << "INTRODUCE AN AMOUNT: "<< endl;
    cin >> monto;

    contarBilletes(monto);

   
return 0;

}

int contarBilletes(int dinero){

    int residuo=0;
    int totalBilletes=0;

    for(int denominacion=0;denominacion<9;denominacion++){

        (dinero-(denominaciones[denominacion])>=0)? totalBilletes++:totalBilletes=totalBilletes;
        residuo=(denominaciones[denominacion]%dinero);
    }


    return totalBilletes;


}


