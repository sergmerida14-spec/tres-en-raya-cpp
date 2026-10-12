#include <print>
#include <iostream>
#include <string>

using namespace std;

void mostrarTablero(int tablero [3][3]){  // Función para mostrar el tablero en la consola
    for (int i = 0; i < 3; i++) {
     for(int j = 0; j < 3; j++){
 print("{}   ", tablero[i][j]);
     }
 print("\n");
}
}

void pedircasillas1 (int& fila, int& columna){ // Función para pedir al jugador 1 que introduzca la fila y columna

  string stri;
    print(" Jugador 1: Introduce la fila y columna (0-2): ");
    getline(cin, stri);
    fila = stoi(stri);
    getline(cin, stri);
    columna = stoi(stri);
}

bool comprobarCasillaValida (int tablero [3][3], int fila, int columna){ // Función para comprobar si la casilla introducida es válida  
    if (fila < 0 || fila > 2 || columna < 0 || columna > 2) {
        
        return false;
    } else if (tablero[fila][columna] != 0) {
        
        return false;
    }
    return true;
}

void pedircasillas2 (int& fila, int& columna){
    string stri;
    print(" Jugador 2: Introduce la fila y columna (0-2): ");
    getline(cin, stri);
    fila = stoi(stri);
    getline(cin, stri);
    columna = stoi(stri);
}  

void colocarFicha1(int tablero [3][3], int fila, int columna ) {
    tablero[fila][columna] = 1;
}

void colocarFicha2(int tablero [3][3], int fila, int columna) {
    tablero[fila][columna] = 2; 
}

bool comprobarGanador(int tablero [3][3], int jugador) {
    // Comprobar filas
    for (int i = 0; i < 3; i++) {
        if (tablero[i][0] == jugador && tablero[i][1] == jugador && tablero[i][2] == jugador) {
            return true;
        }
    }

    // Comprobar columnas
    for (int j = 0; j < 3; j++) {
        if (tablero[0][j] == jugador && tablero[1][j] == jugador && tablero[2][j] == jugador) {
            return true;
        }
    }

    // Comprobar diagonales
    if (tablero[0][0] == jugador && tablero[1][1] == jugador && tablero[2][2] == jugador) {
        return true;
    }
    if (tablero[0][2] == jugador && tablero[1][1] == jugador && tablero[2][0] == jugador) {
        return true;
    }

    return false;
}

bool comprobarEmpate(int tablero [3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (tablero[i][j] == 0) {
                return false; // Aún hay casillas vacías
            }
        }
    }
    return true; // No hay casillas vacías, es un empate
}

auto main() -> int {

    int tablero [3][3] = {};
int fila, columna;
mostrarTablero(tablero);

while(comprobarGanador(tablero, 1) == false && comprobarGanador(tablero, 2) == false && comprobarEmpate(tablero) == false) {

pedircasillas1(fila, columna);


while(comprobarCasillaValida(tablero, fila, columna) == false) {
    print("Casilla inválida. Intenta de nuevo.\n");
    mostrarTablero(tablero);
    pedircasillas1(fila, columna);
    
}

colocarFicha1(tablero, fila, columna); 

mostrarTablero(tablero);

if (comprobarGanador(tablero, 1) == true) {
    print("¡Jugador 1 ha ganado!\n");
    break;
} else if (comprobarEmpate(tablero) == true) {
    print("¡Es un empate!\n");
    break;
}

pedircasillas2(fila, columna);

while(comprobarCasillaValida(tablero, fila, columna) == false) {
    print("Casilla inválida. Intenta de nuevo.\n");
    mostrarTablero(tablero);
    pedircasillas2(fila, columna);
}

colocarFicha2(tablero, fila, columna);

mostrarTablero(tablero);
if (comprobarGanador(tablero, 2) == true) {
    print("¡Jugador 2 ha ganado!\n");
    break;
} else if (comprobarEmpate(tablero) == true) {
    print("¡Es un empate!\n");
    break;
}
}
print("¡Fin del juego!\n");
}