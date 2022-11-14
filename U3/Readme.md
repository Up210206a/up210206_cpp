# **<center>  UNIT 2** #



### *<center>  up210206* 
***

### **In this unit we learned how to use functions on our code, this mean that we can make a large code, more easy to understand, by section it in little programs call "functions", these functions help us to have a better understanding of the program and to improve his functionality.**

---

### **In this case we simulate the game of the cat, a famous game that its about to fill a row, a column or a veritcal line trrough a board of 3x3, this mean that it has 9 different boxes to make our game.**

***

```c++
/GLOBAL VARIABLES OF THE PROGRAM
char gato[3][3];
int turnoJugador = 0;
char areaJuego[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};

//functions of the program for a correct understanding and a clear functionality.
void imprimegato(int);
void tableroGato(int);
int seleccionJugada();
bool comprobarJugada(int Jugada);
void remplazoJugada(int Jugada);
bool comprobarGanador(int Jugada);
void tipoJuego(int);
void contraCpu(int);

//main function of the program
int main(){

    int tablero, P1, P2, PC ,tipoJuego,tirada;
    bool casillaocupada = true, ganador = false;

    cout<< "---------- GAME OF THE CAT ---------"<<endl;
    cout<<endl;

    tableroGato(tablero);
    cout << "please select your oponent: "<< endl<< "1. Human"<<endl <<"2. CPU"<<endl;
    cin >> tipoJuego;

    if (tipoJuego=1){
    do{
        tirada  = seleccionJugada();
        casillaocupada = comprobarJugada(tirada );
        if (casillaocupada == true)
        {
            do
            {
                cout << "invalid game, try again"<<endl;
                break;
            } while (casillaocupada == true);
        }
        else if (casillaocupada == false)
        {
            system("clear");
            remplazoJugada(tirada );
            tableroGato(tablero);
            turnoJugador++;
        }
    ganador = comprobarGanador(ganador);
    } while (ganador == false && turnoJugador<10);
    if (turnoJugador<10){
    if (turnoJugador % 2 == 0)
    {
        cout << "PLAYER 2 WINS"<<endl;
    }
    else
    {
        cout << "PLAYER 1 WINS"<<endl;
    }
    } else{
        cout << "WE HAVE A TIE"<<endl;
    }
    } 
    else if (tipoJuego = 2)
    {
    do
    {
        tirada  = seleccionJugada();
        casillaocupada = comprobarJugada(tirada );
        if (casillaocupada == true)
        {
            do
            {
                cout << "CHOOSE ANOTHER PLAY"<<endl;
                break;
            } while (casillaocupada == true);
        }
        else if (casillaocupada == false)
        {
            system("clear");
            remplazoJugada(tirada );
            tableroGato(tablero);
            turnoJugador++;
            contraCpu(tirada );
        }
    ganador = comprobarGanador(ganador);
    } while (ganador == false && turnoJugador<10);
    } else
    {
        cout << "Select a valid Game : "<<endl;
    }
    
    
    return 0;
}

//VOID FUNCTION THAT PRINTS THE BOARD OF THE GAME

void tableroGato(int){
    
    int x = 0, y = 0;
    for (int fila = 0; fila < 5; fila++)
    {
        for (int col = 0; col < 9; col++)
        {
            if (fila == 1 || fila == 3)
            {
                cout << "-";
            }
            else if (col == 1 || col == 4 || col == 7)
            {
                cout << areaJuego[x][y];
                y++;
            }
            else
            {
                cout << " ";
            }
            if (col == 2 || col == 5)
            {
                cout << "|";
            }
        }
        cout << "\n";
        if (fila % 2 == 0)
        {
            x++;
        }

        y = 0;
    }
 cout<<endl;
 
}

//INT FUNCTION THAT SELECTS A PLAY 
int seleccionJugada()
{
    int Jugada;
    do
    {
        cout << "PLAYER " << turnoJugador%2+1 << " Select your play 1-9 : "<<endl;
        cin >> Jugada;
    } while (Jugada < 0 || Jugada > 9);

    return Jugada;
}

//LOGICAL FUNCTION THAT COMPARES IF THE PLAY IS INVALID OR IS TRUE
bool comprobarJugada(int Jugada){
    int row = Jugada / 10, col = Jugada - 1;
    if (areaJuego[row][col] == 'X' || areaJuego[row][col] == 'O')
    {
        return true;
    }
    else
    {
        return false;
    }
}

//VOID FUNCTION THAT PIRNTS AN "O" OR "X" ON THE BOARD
void remplazoJugada(int Jugada)
{
    if (turnoJugador % 2 == 0)
    {
        int row = Jugada / 10, col = Jugada - 1;
        areaJuego[row][col] = 'O';
    }
    else
    {
        int row = Jugada / 10, col = Jugada - 1;
        areaJuego[row][col] = 'X';
    }
}


//LOGICAL FUNCTION THAT COMPARES THE PLAYS AND CHOOSE A WINNER 
bool comprobarGanador(int Jugada){
    int punto = 0;
    bool comprobarGanador = false;
    for (int posicion = 0; posicion < 3; posicion++)
    {
        if ((areaJuego[0][posicion] == areaJuego[1][posicion]) && (areaJuego[0][posicion] == areaJuego[2][posicion]))
        {
            comprobarGanador = true;
            break;
        }
        else if ((areaJuego[posicion][0] == areaJuego[posicion][1]) && (areaJuego[posicion][0] == areaJuego[posicion][2]))
        {
            comprobarGanador = true;
            break;
        }
        else if ((areaJuego[posicion][posicion] == areaJuego[posicion+1][posicion+1]) && (areaJuego[posicion][posicion] == areaJuego[posicion+2][posicion+2]))
        {
            comprobarGanador = true;
            break;
        }
        else if ((areaJuego[2][0] == areaJuego[1][1]) && (areaJuego[2][0] == areaJuego[0][2]))
        {
            comprobarGanador = true;
            break;
        }
    }
    return comprobarGanador;
}

//VOID FUNCTION THAT SIMULATES THE GAME OF THE CPU
void contraCpu(int){
    for (int posicion = 0; posicion < 3; posicion++)
    {
        if (areaJuego[0][posicion] == areaJuego[1][posicion])
        {
            areaJuego[2][posicion] = 'O';
            break;
        }
        else if (areaJuego[0][posicion] == areaJuego[2][posicion])
        {
            areaJuego[1][posicion] = 'O';
            break;
        }
        else if (areaJuego[1][posicion] == areaJuego[2][posicion])
        {
            areaJuego[0][posicion] = 'O';
            break;
        }
        else if (areaJuego[posicion][0] == areaJuego[posicion][1])
        {
            areaJuego[posicion][2] = 'O';
            break;
        }
        else if (areaJuego[posicion][0] == areaJuego[posicion][2])
        {
            areaJuego[posicion][1] = 'O';
            break;
        }
        else if (areaJuego[posicion][1] == areaJuego[posicion][2])
        {
            areaJuego[posicion][0] = 'O';
            break;
        } else{
            areaJuego [posicion][posicion] = '0';
            break;
        }
    }
    
    turnoJugador++;
}

```
***

*First lets introudce what kind of game we want in this case with another user*

![ERROR](https://github.com/Up210206a/up210206_cpp/blob/main/U3/IMAGES/SELECTPLAY.png)

*Now lets simulate a game and say that P1 wants the box 1 and then the box 2*

![ERROR](https://github.com/Up210206a/up210206_cpp/blob/main/U3/IMAGES/P13.png)

*Finally lets say that the P1 wins with the boxes 1,2 and 3:*

![ERROR](https://github.com/Up210206a/up210206_cpp/blob/main/U3/IMAGES/P1WINS.png)




