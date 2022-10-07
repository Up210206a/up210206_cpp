


# **<center>  UNIT 2** #

---

### *<center>  up210206* 

---




<center>  In this unit we learned the basic of c++ like the cycle "for", the conditional of "if" and the cycle/conditional "do while".

***

<center>  ![ERROR](https://github.com/Up210206a/up210206_cpp/blob/main/U2/images/e26601_c02222ef7b6e4e939451ec8b709a8b9a%7Emv2.gif) 


***

### 01_renta

*this program le the user to know how many taxes he will pay depending on the amount of rent he pay over the month, this code contain the first basic tool of the conditional "if" that makes options, that will be if (this) then do that action.*

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




    

    











