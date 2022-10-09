/* Unidad 2. Ejercicio 2
   Autor: Jorge Emilio Santacruz Morales
   Fecha: 26/09/2022
   
*/

#include <iostream>
using namespace std;



int main ( ){


//variables of the code
    double calificacion, recompensa;
    

//input of the grade of the user
    cout << "INTRODUCE TU CALIFICACION: " << endl;
    cin >> calificacion;
    //first conditional of the code

    if (calificacion == 0.0){

        cout << "TIENES UN NIVEL INACEPTABLE" << endl;

        //math operation that determines the benefits
        recompensa = calificacion*2400;
        cout << "TU BONIFICACION ES DE: " << recompensa << endl;

       
    }

    //second conditional

    else if (calificacion == 0.4){

        cout << "TIENES UN NIVEL ACEPTABLE" << endl;
        //math operation   
        recompensa = calificacion*2400;
        cout << "TU BONIFICACION ES DE: " << recompensa << endl;

        }


    //third conditional

         else if (calificacion >= 0.6){

            cout << "TIENES UN NIVEL MERITORIO" << endl;

            //math operation
            recompensa = calificacion*2400;
            cout << "TU BONIFICACION ES DE: " << recompensa << endl;

        }


    return 0;
}