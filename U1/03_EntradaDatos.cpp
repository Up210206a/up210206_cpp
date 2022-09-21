/* Unidad 1. Entrada de Datos
   Autor: Jorge Santacruz
   Fecha: 21/09/2022
   Descripción: Muestra los diferentes tipos para entrada de datos en c++
*/

#include <iostream>
#include <stdio.h>

using namespace std;

int main () {
    
    int cont=5;
    int num; 
    float flotante;

    cout<<"----------------PROGRAMA PARA MOSTRAR ENTRADA DE DATOS--------------------------"<<endl;
     
    
     
    cout<<"ingrese un numero entero"<<endl;
    cin>> num;

    if(num>0){
     cout<<"el numero guardado es: "<<num<<endl;
    }
    else{
        cout<<"este no es un numero entero"<<endl;
    }


     cout<<"--------------------------------------------------------"<<endl;

     cout<<"ingrese un numero   flotante"<<endl;
    cin>> flotante;
     cout<<"el numero guardado es: "<<flotante<<endl;


     cout<<"-------------------------ENTRADA DE DATOS CON STDIO.H-------------------------------"<<endl;

     printf("ingrese un numero entero \n");
     scanf("%d",&num);

     printf("el numero entero ingresado fue: %d \n",num);

     printf("ingrese un numero flotante \n");
     scanf("%f",&flotante);

     printf("el numero entero ingresado fue: %f \n",flotante);








     

    return 0;

}