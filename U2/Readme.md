


# **<center>  UNIT 2** #

---

### *<center>  up210206* 

---




<center>  In this unit we learned the basic of c++ like the cycle "for", the conditional of "if" and the cycle/conditional "do while".

***

<div align= "center">

![ERROR](https://github.com/Up210206a/up210206_cpp/blob/main/U2/images/e26601_c02222ef7b6e4e939451ec8b709a8b9a%7Emv2.gif) 

</center>


***

### 01_renta

**this program le the user to know how many taxes he will pay depending on the amount of rent he pay over the month, this code contain the first basic tool of the conditional "if" that makes options, that will be if (this) then do that action.**

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
### 06_Productos

**







        









    

    











