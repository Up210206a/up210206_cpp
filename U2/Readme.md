


# **<center>  UNIT 2** #

---

### *<center>  up210206* 

---




<center>  In this unit we learned the basic of c++ like the cycle "for", the conditional of "if" and the cycle/conditional "do while".

***

<center>

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
       


        









    

    











