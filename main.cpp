#include <print>
#include <iostream>
#include <string>

using namespace std;

void mostrarTablero(int tablero [3][3]){
    for (int i = 0; i < 3; i++) {
     for(int j = 0; j < 3; j++){
 print("{}   ", tablero[i][j]);
     }
 print("\n");
}
}

void pedircasillas1 (int& fila, int& columna){

  string stri;
    print("Introduce la fila y columna (0-2): ");
    getline(cin, stri);
    fila = stoi(stri);
    getline(cin, stri);
    columna = stoi(stri);
}

bool comprobarCasillaValida (int tablero [3][3], int fila, int columna){
    if (fila < 0 || fila > 2 || columna < 0 || columna > 2) {
        
        return false;
    } else if (tablero[fila][columna] != 0) {
        
        return false;
    }
    return true;
}

void pedircasillas2 (int& fila, int& columna){
    string stri;
    print("Introduce la fila y columna (0-2): ");
    getline(cin, stri);
    fila = stoi(stri);
    getline(cin, stri);
    columna = stoi(stri);
}  

void colocarFicha1(int tablero [3][3], int fila, int columna) {
    tablero[fila][columna] = 1;
}

void colocarFicha2(int tablero [3][3], int fila, int columna) {
    tablero[fila][columna] = 2; 
}

auto main() -> int {
    int tablero [3][3] = {};
int fila, columna;
mostrarTablero(tablero);

pedircasillas1(fila, columna);


while(comprobarCasillaValida(tablero, fila, columna) == false) {
    print("Casilla inválida. Intenta de nuevo.\n");
    mostrarTablero(tablero);
    pedircasillas1(fila, columna);
    
}

colocarFicha1(tablero, fila, columna); 

mostrarTablero(tablero);

pedircasillas2(fila, columna);

while(comprobarCasillaValida(tablero, fila, columna) == false) {
    print("Casilla inválida. Intenta de nuevo.\n");
    mostrarTablero(tablero);
    pedircasillas2(fila, columna);
    
}

colocarFicha2(tablero, fila, columna);

mostrarTablero(tablero);
}