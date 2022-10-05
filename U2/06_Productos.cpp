/* Unit 2. Practice 6
   Autor: Jorge Emilio Santacruz Morales
   Fecha: 05/10/2022
   
*/

#include <iostream>
using namespace std;



int main (){

    int op=0;
    float prods,price,acum,tot;

    cout << "INTRODUCE UR OPTION" << endl;
    cout << "1 to continue, 2 for end" << endl;
    cin >> op;



    if (op==1){
        do{

            cout << "INTRODUCE THE NUMBER OF PRODUCTS" << endl;
            cin >> prods;
            cout << "INTRODUCE THE PRICE OF THE PRODUCT" << endl;
            cin >> price;

            tot  += price*prods;

            cout << "THE TOTAL IS: "<<  tot << endl;

            cout << "CONTINUE?" << endl;
            cin >> op;

    }while (op!=2);

    }

    else {

        cout << "THE TOTAL AT THE END IS: "<< tot << endl;
    }





    
}