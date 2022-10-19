/* Unit 2. Practice 6
   Autor: Jorge Emilio Santacruz Morales
   Fecha: 05/10/2022
   
*/

#include <iostream>
using namespace std;



int main (){

    //main variables of the program
    int op=0;
    float prods,price,acum,tot;

    //input of the program to begin the process
    cout << "INTRODUCE UR OPTION" << endl;
    cout << "1 to continue, 2 for end" << endl;
    cin >> op;


    //process that begins the process of the counting of products
    if (op==1){
        do{

            //input of the program to capture products
            cout << "INTRODUCE THE NUMBER OF PRODUCTS" << endl;
            cin >> prods;
            cout << "INTRODUCE THE PRICE OF THE PRODUCT" << endl;
            cin >> price;


            //math process that acumulates the products
            tot  += price*prods;


            //output of the program that shows the total of products
            cout << "THE TOTAL IS: "<<  tot << endl;

            cout << "CONTINUE?" << endl;
            cin >> op;

    //another option that ends the process
    }while (op!=2);

    }

    else if(op!=1 || op!=2){
        cout << "ERROR" << endl;
    }

    //End of the program that counts all the amount of products

    

        cout << "THE TOTAL AT THE END IS: "<< tot << endl;
    



    return 0;

    
}