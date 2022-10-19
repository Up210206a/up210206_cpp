


# **<center>  UNIT 2** #

---

### *<center>  up210206* 

---



<div align= "center">

 **In this unit we learned the basics of c++ like the cycle "for", the conditional of "if" and the cycle/conditional "do while".**

 </center>


***

<div align= "center">

![ERROR](https://github.com/Up210206a/up210206_cpp/blob/main/U2/images/e26601_c02222ef7b6e4e939451ec8b709a8b9a%7Emv2.gif) 

</center>


***

### 01_renta

**this program let the user to know how many taxes he will pay depending on the amount of rent he pay over the month, this code contain the first basic tool of the conditional "if" that makes options, that will be if (this) then do that action.**

```c++
//input for the amount 
    cout << "ingresa el monto de tu renta" << endl; 
    cin >> renta;

//begin of the conditional depending of the amount
    if (renta < 10000){

        impuesto=0.05;

        cout << "tu impuesto es de: "<< impuesto << endl;
        pago= impuesto*renta;
        cout << "debes pagar: "<< pago << endl;
    }

    else if (renta >=10000 && renta<20000){

        impuesto=0.15;

        cout << "tu impuesto es de: "<< impuesto << endl;
        pago= impuesto*renta;
        cout << "debes pagar: "<< pago << endl;
    }

    else if (renta >= 20000 && renta < 35000){

        impuesto=0.20;

        cout << "tu impuesto es de: "<< impuesto << endl;
        pago= impuesto*renta;
        cout << "debes pagar: "<< pago << endl;
    }

    else if (renta >= 35000 && renta <=60000){

        impuesto=0.30;

        cout << "tu impuesto es de: "<< impuesto << endl;
        pago= impuesto*renta;
        cout << "debes pagar: "<< pago << endl;
    }

    else if (renta > 60000){

        impuesto=0.45;

        cout << "tu impuesto es de: "<< impuesto << endl;
        pago= impuesto*renta;
        cout << "debes pagar: "<< pago << endl;
    }
```

*then we have the output of the console according to random variables:* 

an amount of 5000:

![ERROR](https://github.com/Up210206a/up210206_cpp/blob/main/U2/images/renta1.png)

an amount of 15000:

![ERROR](https://github.com/Up210206a/up210206_cpp/blob/main/U2/images/renta2.png)

an amount of 21000:

![ERROR](https://github.com/Up210206a/up210206_cpp/blob/main/U2/images/renta3.png)

---
### 02_Beneficios

**Another code using the conditional "If", but in this case we let to know to the user his level of benefits depending of his grade of development on the work**

```c++
//input of the grade of the user
    cout << "INTRODUCE TU CALIFICACION: " << endl;
    cin >> calificacion;
    //first conditional of the code

    if (calificacion == 0.0){

        cout << "TIENES UN NIVEL INACEPTABLE" << endl;

        //math operation that determines the benefits
        recompensa = calificacion*2400;
        cout << "TU BONIFICACION ES DE: " << recompensa << endl;

       
    }

    //second conditional

    else if (calificacion == 0.4){

        cout << "TIENES UN NIVEL ACEPTABLE" << endl;
        //math operation   
        recompensa = calificacion*2400;
        cout << "TU BONIFICACION ES DE: " << recompensa << endl;

        }


    //third conditional

         else if (calificacion >= 0.6){

            cout << "TIENES UN NIVEL MERITORIO" << endl;

            //math operation
            recompensa = calificacion*2400;
            cout << "TU BONIFICACION ES DE: " << recompensa << endl;

        }
```
first level: 

![ERROR](https://github.com/Up210206a/up210206_cpp/blob/main/U2/images/Beneficios1.png)

second level:

![ERROR](https://github.com/Up210206a/up210206_cpp/blob/main/U2/images/beneficos2.png)

third level: 

![ERROR](https://github.com/Up210206a/up210206_cpp/blob/main/U2/images/beneficios3.png)




---
### 03_Juegos

**Third code using if and else if, a dynamic asking the user for his age and the output its his payment**

```c++
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

```

**Then we have different ages for the output**

an age of 3: 

![ERROR](https://github.com/Up210206a/up210206_cpp/blob/main/U2/images/juegos1.png)

an age of 5:

![ERROR](https://github.com/Up210206a/up210206_cpp/blob/main/U2/images/juegos2.png)

an age of 23: 

![ERROR](https://github.com/Up210206a/up210206_cpp/blob/main/U2/images/juegos3.png)

---
### 04_PIZZA

**in this code we're gonna simulate a pizza store with two options of pizza and after that ask the user for what ingredients does he wants depending on his kind of pizza**

```c++
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
        else if  {
            cout << "EXTRA SAUSACE"<<endl;
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

```

Lets say that the user wants a normal pizza with salami:

![ERROR](https://github.com/Up210206a/up210206_cpp/blob/main/U2/images/04pizza1.png)

Now the user wants a vegan pizza with extra cheese: 

![ERROR](https://github.com/Up210206a/up210206_cpp/blob/main/U2/images/04pizza2.png)

Then the user wants a normal pizza with jam: 

![ERROR](https://github.com/Up210206a/up210206_cpp/blob/main/U2/images/04pizza3.png)

And finally the user wants a vegan pizza with extra sauce: 

![ERROR](https://github.com/Up210206a/up210206_cpp/blob/main/U2/images/04pizza4.png)




***

### 05_Temperatura

**This is a code that ask the user for 6 different temperatures and the code shows the lowest one, the highest one and the average of all of them, the code works based on if into another if**

```c++

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

```
***

Lets try with some random temperatures: 

![ERRROR](https://github.com/Up210206a/up210206_cpp/blob/main/U2/images/05TEMP01.png)

Another random temperatures: 

![ERROR](https://github.com/Up210206a/up210206_cpp/blob/main/U2/images/5temperatura2.png)

### 06_Productos

**A code that acumulates products and let the user to select between continue and not continue with the process using while, if and acumulators**


```c++
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

```

An exapmle with a random products as the output:

![ERROR](https://github.com/Up210206a/up210206_cpp/blob/main/U2/images/06productos1.png)

![ERROR](https://github.com/Up210206a/up210206_cpp/blob/main/U2/images/06productos3.png)

An Example of an error if the user dont choose the correct option:

![ERROR](https://github.com/Up210206a/up210206_cpp/blob/main/U2/images/06productos2.png)





***
### 07_Binario

**This code ask the user for a decimal number and the program turns it into a binary number based on math operations and a while cycle**


```c++
 //principal variables
    int num=0;
    string resultado;


    //input of the program asking the user for a number
    cout << "PLEASE INTRODUCE A RANDOM DECIMAL NUMBER" << endl; 
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
    cout << "THE NUMBER DECIMAL CONVERTED IN DECIMAL IS: "<< resultado <<endl;

```

Two examples for this code:

![ERROR](https://github.com/Up210206a/up210206_cpp/blob/main/U2/images/07binario1.png)

![ERROR](https://github.com/Up210206a/up210206_cpp/blob/main/U2/images/07binario2.png)




***
### 07_Decimal

**This code is the second part of the past code, but in this case we ask the user to introduce a binary number and with a similar process the program turns the binary number into a decimal number**


```c++
//principal variables
    int exp=0, dig;
    int num, dec=0;
    


    //input of the program asking the user for a binary number
    cout << "PLEASE INTRODUCE A RANDOM BINARY NUMBER" << endl; 
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

    cout << "THE DECIMAL NUMBER CONVERTED IN BINARY IS: " << dec << endl;

```

Two Examples for this code:

![ERROR](https://github.com/Up210206a/up210206_cpp/blob/main/U2/images/07decimal1.png)

![ERROR](https://github.com/Up210206a/up210206_cpp/blob/main/U2/images/07decimal2.png)


***

### 08_Multiplicación

**This programs uses a for cycle that multiplicates two numbers and also there is another cycle for that makes a table for the format of the multiplication, another function for this program is to use the table maker**

```c++
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
```

The results when the user type 8*15

![ERROR](https://github.com/Up210206a/up210206_cpp/blob/main/U2/images/8Multiplicacion1.png)

The results when the user type 7*17

![ERROR](https://github.com/Up210206a/up210206_cpp/blob/main/U2/images/8Multiplicacion2.png)

***

### 09_Biseccion

**This code uses the method of the bisection to solve a cuadratic equation based on the variables that the user introduces, we use an external function out of the main function to solve the equation compairing results many times until we find the root**

```c++
//Libraries of the code
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

//Function that solves the ecuation
float resolverEcuacion(float num){
    //x²-x-12
    return (pow(num, 2) - num - 12);
}

// Function that prints a line 
void imprimirlinea()
{
    for (int i = 0; i < 161; i++)
    {
        cout << "-";
    }
    cout << "\n";

    
}

//main function
int main (){


    //Variables of the main function
    float error=0.01;
    double a=0,b=0,c=0,ya=0,yb=0,yc=0,solucion;
    int comparacion=1;

    //Input of the cosde that introduces variables of the ecuation
    cout << "Introduce A: " <<endl;
    cin >> a;
    cout << "Introduce B: " <<endl;
    cin >> b;

    //Prints the header of the comparision table
    imprimirlinea();
    cout << "| Comparacion \t| a \t\t\t| b \t\t\t| c \t\t\t| y(a)\t\t\t| y(b)\t\t\t| y(c)\t\t\t| "<<endl;
    imprimirlinea();


    //Main cycle that compares the ranges of the ecuation
    do{

        c = (a + b) / 2;
        ya = resolverEcuacion(a);
        yb = resolverEcuacion(b);
        yc = resolverEcuacion(c);

        cout << "| " << comparacion << "\t\t| " << fixed << setprecision(8) << a << "\t\t| " << b << "\t\t| " << c << "\t\t| " << ya << "\t\t| " << yb << "\t\t| " << yc << "\t\t| \n";
        
        
        imprimirlinea();

        comparacion ++;

        if((ya*yc)<0){
            b=c;
        }
        else if((yc*yb)<0){
            a=c;
        }
        else{

            cout << "NO ROOT" <<endl;
            break;
        }

    }while(abs(yc)>=error);

    solucion=c;

     // Output of the code-Solution of the ecuation
    if (solucion != 0){

        cout << "ROOT: :" << c << endl;
        
    }

    else{

        cout << "NO ROOT IN THE RANGE" << endl;
    }



    return 0;
}
```

An Example with the main roots:

![ERROR](https://github.com/Up210206a/up210206_cpp/blob/main/U2/images/09biseccion1.png)















        









    

    











