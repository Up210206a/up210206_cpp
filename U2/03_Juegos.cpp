/* Unit 2. Practice 3
   Author: Jorge Emilio Santacruz Morales
   Date: 28/09/2022
*/

//Basic library for inputs and outputs
#include <iostream>
using namespace std;

int main(){
    int age,precio;
    

//ask the user for his age

    cout << "WELCOME TO LAS VEGAS MATE" << endl;

    cout << "How old are u?" << endl;
    cin >> age;

//math operation for the game

    if (age < 4){

        precio = 0;  
    }

    else if (age >= 4 && age <= 18){

        precio = 5;
    }

    else if (age > 18){

        precio = 10;
    }

//output of the code

    cout << "You may pay: $" << precio << endl;

    



    return 0;
}