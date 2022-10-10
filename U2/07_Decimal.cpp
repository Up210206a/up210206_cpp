/* Unit 2. Practice 7
   Autor: Jorge Emilio Santacruz Morales
   Fecha: 10/10/2022
   
*/

//libraries of the code
#include <iostream>
#include <cmath>


using namespace std;


//Main function of the program
int main (){

    //principal variables
    int exp=0, dig;
    int num, dec=0;
    


    //input of the program asking the user for a binary number
    cout << "PLEASE INTRODUCE A RANDOM NUMBER" << endl; 
    cin >> num; 

    while((num/10)!=0){

        //math operations  for the conversion 

        dig=num%10;
        dec=dec+dig*pow(2.0,exp);
        exp++;
        num=(num/10);


    }

    dec=dec +num * pow(2.0,exp);

    //output of the program

    cout << "THE NUMBER BINARY IS: " << dec << endl;


    

}