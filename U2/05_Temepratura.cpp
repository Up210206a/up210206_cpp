/* 
Unit 2. preactice 5
   author: Jorge Emilio Santacruz Morales
   date: 26/09/2022
   
*/

#include <iostream>
using namespace std;


//main function
int main ( ) {

    //principal variables 
    int cont=0;
    float temp=0;
    float prom=0;
    float low=-10000;
    float high=10000;


    //initial message that wants the user to introduce 6 temperatures
    cout << "PLEASE INTRODUCE 6 TEMPERATURES" << endl; 

    do{

        //input of the program that helds an aux counter on the "do while" cycle 
        cout << "PLEASE INTRODUCE THE TEMPERATURE NO. " << cont+1 << endl;
        cin >> temp;

        //math operations that captures the average of temperatures ant add 1 to the counter
        prom += temp; 
        cont ++; 

        //logical operation that captures the low temperature
        if (temp>low){
            
            low = temp;
        }

        else {
            high=temp;
        }


    //end of the cycle when the counter goes to 6
    }while (cont<6);

    //outputs of the code
    cout <<"THE AVARAGE OF TEMPERATURES IS: " << prom/6 << endl;
    cout <<"THE LOWEST TEMPERATURE IS: " << high << endl;
    cout <<"THE highest TEMPERATURE IS: " << low << endl;
}