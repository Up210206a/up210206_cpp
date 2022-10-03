/* Unit 2. preactice 5
   author: Jorge Emilio Santacruz Morales
   date: 26/09/2022
   
*/

#include <iostream>
using namespace std;



int main ( ) {
    int cont=0;
    float temp=0;
    float prom=0;
    float low=-10000;
    float high=10000;

    cout << "PLEASE INTRODUCE 6 TEMPERATURES" << endl; 

    do{

        cout << "PLEASE INTRODUCE THE TEMPERATURE NO. " << cont+1 << endl;
        cin >> temp;

        prom += temp; 
        cont ++; 

        if (temp>low){
            
            low = temp;
        }

        else {
            high=temp;
        }



    }while (cont<6);

    cout <<"THE AVARAGE OF TEMPERATURES IS: " << prom/6 << endl;
    cout <<"THE LOWEST TEMPERATURE IS: " << high << endl;
    cout <<"THE highest TEMPERATURE IS: " << low << endl;
}