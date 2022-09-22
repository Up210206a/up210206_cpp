/* Unidad 2. Uso del if else
   Autor: Jorge Emilio Santacruz Morales
   Fecha: 22/09/2022
   Descripción: Muestra el uso del if else
*/

//Libreria para manejo de entradas y salida de pantalla
#include <iostream>

//Uso del namespace para evitar el std::
using namespace std;

//Función principal de tipo entero
int main()
{
   int numero;
   int dato = 1;

   

    //Ejercicio: utilice las diferentes comparaciones ==, !=, <, >, <=, >=

    // ==
    cout << "Ingresa el numero 1: ";
   cin >> numero;
   if (numero == dato){
    cout << "El número es igual a dato" << endl;
    
   }   
   else{
        cout << "el numero es diferente a 1" << endl;
    }

   // !=
   cout << "Ingresa un numero diferente a 1: ";
   cin >> numero;
   if (numero != dato){
    cout << "El número es diferente a dato" << endl;
    
   }   
   else{
        cout << "el numero es igual a 1" << endl;
    }

// <
   cout << "Ingresa un numero menor que 1: ";
   cin >> numero;
   if (numero < dato){
    cout << "El número es menor que dato" << endl;
    
   }   
   else{
        cout << "el numero es mayor a 1" << endl;
    }

// >
    cout << "Ingresa un numero mayor que 1: ";
   cin >> numero;
   if (numero > dato){
    cout << "El número es mayor que dato" << endl;
    
   }   
   else{
        cout << "el numero es menor a 1" << endl;
    }

// <=
    cout << "Ingresa un numero menor o igual que 1: ";
   cin >> numero;
   if (numero <= dato){
    cout << "El número es menor o igual que dato" << endl;
    
   }   
    else{
        cout << "el numero es mayor a 1" << endl;
    }

// >=
    cout << "Ingresa un numero mayor o igual que 1: ";
   cin >> numero;
   if (numero >= dato){
    cout << "El número es mayor que dato" << endl;
    
   }   
   else{
        cout << "el numero es menor que 1" << endl;
    }


    

    //Al ser una función debe retornar un valor, en este caso 0
    return 0;
}