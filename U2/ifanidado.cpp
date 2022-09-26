/* Unidad 2. Uso del if anidado
   Autor: Luis Ernesto Anaya Tiscareño
   Fecha: 01/09/2022
   
*/

/*Ejercicio: Realizar un programa en el que se consideran 3 inversionistas, quien haya dado mas dinero
   será el dueño de la empresa, el segundo será el gerente y el último solo inversor.
   Considere que dos personas no pueden dar la misma cantidad de dinero. */

//Libreria para manejo de entradas y salida de pantalla
#include <iostream>

//Uso del namespace para evitar el std::
using namespace std;

//Función principal de tipo entero
int main(){

    float in1,in2,in3;

    cout << "inserte la cantidad que invirtio el primer inversor" << endl;
    cin >> in1;

    cout << "inserte la cantidad que invirtio el segundo inversor" << endl;
    cin >> in2;

    cout << "inserte la cantidad que invirtio el tercer inversor" << endl;
    cin >> in3;

    if(in1>in2) {
        if(in1>in3) {
            cout << "el primer inversor dio mas dinero, el es el dueño de la empresa" << endl;
            if(in2>in3){
            
                cout << "el segundo inversor fue el segundo en dar mas dinero, el sera el gerente" << endl;
                cout << "el tercer inversor fue el tercero en dar mas dinero, el sera inversor" << endl;
                

            }
            else {
                cout << "el tercer inversor fue el segundo en dar mas dinero, el sera el gerente" << endl;
                cout << "el segundo inversor fue el tercero en dar mas dinero, el sera inversor" << endl;

            }
        }
    }

    if(in2>in1) {
        if(in2>in3) {
            cout << "el segundo inversor dio mas dinero, el es el dueño de la empresa" << endl;
            if(in1>in3){
            
                cout << "el primer inversor fue el segundo en dar mas dinero, el sera el gerente" << endl;
                cout << "el tercer inversor fue el tercero en dar mas dinero, el sera inversor" << endl;
                

            }
            else {
                cout << "el tercer inversor fue el segundo en dar mas dinero, el sera el gerente" << endl;
                cout << "el primer inversor fue el tercero en dar mas dinero, el sera inversor" << endl;

            }
        }
    }

    if(in3>in1) {
        if(in3>in2) {
            cout << "el tercer inversor dio mas dinero, el es el dueño de la empresa" << endl;
            if(in1>in2){
            
                cout << "el primer inversor fue el segundo en dar mas dinero, el sera el gerente" << endl;
                cout << "el segundo inversor fue el tercero en dar mas dinero, el sera inversor" << endl;
                

            }
            else {
                cout << "el segundo inversor fue el segundo en dar mas dinero, el sera el gerente" << endl;
                cout << "el tercer inversor fue el tercero en dar mas dinero, el sera inversor" << endl;

            }
        }
    }

    










    return 0;

}