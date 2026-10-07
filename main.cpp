#include <print>

using namespace std;

void mostrarTablero(int tablero [3][3]){
    for (int i = 0; i < 3; i++) {
     for(int j = 0; j < 3; j++){
 print("{}   ", tablero[i][j]);
     }
 print("\n");
}
}


auto main() -> int {
    int tablero [3][3] = {};
   
mostrarTablero(tablero);
}