/* Unit 2. Practice 8
   Autor: Jorge Emilio Santacruz Morales
   Fecha: 12/10/2022
   
*/

//libraries of the code
#include <iostream>
#include <cmath>


using namespace std;


//Main function of the program
int main () {

    int num=0,cont=0,j=0,i=0;


    //input for the root number of the multiplication
    cout << "PLEASE INTRODUCE THE MAIN NUMBER OF THE MULTIPLICATION" << endl; 
    cin >> num;

    cout << endl;

    //number of times that the number multiplicates
    cout << "PLEASE INTRODUCE THE NUMBER OF TIMES OF THE MULTIPLICATION" << endl; 
    cin >> cont;

    cout << endl;


    //main cycle that makes the math operation
    for(i=1;i<=cont;i++){

        //secondary cycle that draws the lines between the table
        for(j=1;j<=73;j++){
            
            cout << "-";
            
        }

        cout << endl;

        //main output that makes the math operation and make a space between the numbers
        cout<< "|" << num << "\t|"<< "\t X" << "\t|"<<"\t"<< i << "\t|"<<"\t =" <<"\t|"<< "\t" << i*num << "\t|"<<endl;


    }

        //final cycle that ends the lines of the table 
        for(int j=1;j<=73;j++){
            
            cout << "-";
            
        }

    cout << endl;

    //return a int number that ends the main function 
    return 0;
}