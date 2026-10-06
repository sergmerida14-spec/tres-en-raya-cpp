# Diseño del tres en raya

## Tablero
Array 3x3 de enteros. 0 = casilla vacía, 1 = jugador 1, 2 = jugador 2.

## Funciones
| Función | Qué recibe | Qué devuelve |
|---|---|---|
| mostrarTablero | el tablero | nada (escribe por pantalla) |
| pedirCasilla | nada | fila y columna elegidas |
| comprobarCasillaValida | el tablero y la casilla | si es válida o no |
| colocarFicha | el tablero, la casilla y el jugador | nada (modifica el tablero) |
| comprobarGanador | el tablero y el jugador | si ese jugador ha ganado |
| comprobarEmpate | el tablero | si está lleno sin ganador |

## Bucle principal
1. Crear el tablero vacío y poner como jugador actual al jugador 1.
2. Mostrar el tablero.
3. Pedir una casilla al jugador actual.
4. Si la casilla no es válida, mostrar un error y volver al paso 3 sin cambiar de jugador.
5. Colocar la ficha del jugador actual.
6. Mostrar el tablero.
7. Si el jugador actual ha ganado, mostrar el mensaje de victoria y terminar.
8. Si hay empate, mostrar el mensaje de empate y terminar.
9. Cambiar de jugador (1 pasa a 2 y 2 pasa a 1).
10. Volver al paso 2.

La partida termina por victoria o por empate.