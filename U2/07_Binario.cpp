/* Unit 2. Practice 7
   Autor: Jorge Emilio Santacruz Morales
   Fecha: 10/10/2022
   
*/

//libraries of the code
#include <iostream>


using namespace std;


//Main function of the program
int main (){

    //principal variables
    int num=0;
    string resultado;


    //input of the program asking the user for a number
    cout << "PLEASE INTRODUCE A RANDOM NUMBER" << endl; 
    cin >> num; 


    //cycle that turns the number into a binary number 
    while (num!=0){

        //alternative way to do it
         /*
        if (num %2 == 0){
            resultado = 0 + resultado;
            
        }

        else {

            resultado = 1 +resultado;
        }

        num /=2;
        */

       //other way to solve it
       // resultado=(num%2==0)"0" + resultado : "1"+resultado;


        
       
        //another way to solve the code
       
        resultado=to_string(num%2)+resultado;
        num /=2;
       
       
        
      

       

    }


    //output of the program 
    cout << "THE NUMBER IS: "<< resultado <<endl;

}