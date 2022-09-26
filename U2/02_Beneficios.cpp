/* Unidad 2. Ejercicio 2
   Autor: Jorge Emilio Santacruz Morales
   Fecha: 26/09/2022
   
*/

#include <iostream>
using namespace std;



int main ( ){


//variables declaradas que representan la califiacacion del usuario y la recompensa que tendra
    double calificacion, recompensa;
    

//Aqui el usuario introduce su calificacion al programa
    cout << "INTRODUCE TU CALIFICACION: " << endl;
    cin >> calificacion;
    //primera comparacion de la calificacion con el primer nivel

    if (calificacion == 0.0){

        cout << "TIENES UN NIVEL INACEPTABLE" << endl;

        //operacion que determina la recompensa del usuario
        recompensa = calificacion*2400;
        cout << "TU BONIFICACION ES DE: " << recompensa << endl;

       
    }

    //segunda comparacion de la calificacion con el segundo nivel

    else if (calificacion == 0.4){

        cout << "TIENES UN NIVEL ACEPTABLE" << endl;
        //operacion que determina la recompensa del usuario    
        recompensa = calificacion*2400;
        cout << "TU BONIFICACION ES DE: " << recompensa << endl;

        }


    //tercera comparacion de la calificacion con el tercer nivel

         else if (calificacion >= 0.6){

            cout << "TIENES UN NIVEL MERITORIO" << endl;

            //operacion que determina la recompensa del usuario
            recompensa = calificacion*2400;
            cout << "TU BONIFICACION ES DE: " << recompensa << endl;

        }


    return 0;
}