/*
Unit 2. Practice 4
Date: 28/09/2022
Author: Jorge Santacruz

*/

// Main library for i & o
#include <iostream>

using namespace std;

int main() {

    int pizza;
    int type;
    int ing= 0;

    // asks the user about which pizza he wants

    cout << "PLEASE INTRODUCE WHAT PIZZA DO U WANT" << endl;
    cout << "1---VEG"<< endl; 
    cout << "2---PEP"<< endl;
    cin >> type;

    //logical operation for the veg selection
    if (type == 1){
        cout << "Your selection was VEG"<<endl;
        cout << "PLEASE SELECT AN IGREDIENT: "<<endl;
        cout << "1 FOR EXTRA CHEESE | 2 FOR EXTRA SAUSACE"<<endl;
        cin >> ing;

        //logical operation for the ingredient
        if (ing == 1){
            cout << "EXTRA CHEESE"<<endl;
            cout << "VEG PIZZA WITH EXTRA CHEESE"<< endl;
        }
            else  {

            cout << "EXTRA SAUSACE"<< endl;
            cout << "VEG PIZZA WITH EXTRA SAUSACE"<<endl;
            }
    }


    //logical operation for the normal pizza
    if (type == 2){

        cout << "YOU SELECTED NORMAL"<<endl;
        cout << "PLEASE SELECT AN IGREDIENT: "<<endl;
        cout << "1 FOR SALAMI | 2 FOR JAM | 3 FOR PEP"<<endl;
        cin >> ing;

        
        //logical operation for the ingredients
        if (ing == 1){

            cout << "YOU SELECTED SALAMI"<<endl;
            cout << "YOU WILL HAVE A NORMAL PIZZA WITH SALAMI" << endl;

        }
        else if (ing == 2) {

             cout << "YOU SELECTED JAM"<<endl;
             cout << "YOU WILL HAVE A NORMAL PIZZA WITH JAM" << endl;
            
        }
        else if (ing == 3){

            cout << "YOU SELECTED PEP"<<endl;
            cout << "YOU WILL HAVE A NORMAL PIZZA WITH PEPPERONI" << endl;

            
        }
    }

    //exit message
    cout << "THANKS FOR UR PREFERENCE!!" << endl;

    return 0;
}