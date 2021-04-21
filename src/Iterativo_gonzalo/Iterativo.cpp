#include "laberinto.hpp"

int main(){
    int i;// chema: he quitado el unsigned
    int filas=0;
    int columnas=0;

    printf("Iterativo");

    // Se pide al usuario el tamaño del laberinto.
    printf("Introduzca dimensiones\n Filas: ");
    scanf("%d", &filas);
    printf(" Columnas: ");
    scanf("%d", &columnas); // he puesto %d... por ser enteros (chema)

    columnas+=2;   // (chema): creo que no tiene por qué hacerse...
    filas+=2; // Añadimos un marco que serán los bordes del laberinto

    char **grid = NULL;
    // Se reserva memoria para el vector de vectores dinámicos (del tamaño de "filas").
    grid = (char **) malloc (filas  * sizeof(char *)); 
    if (grid == NULL) {
        printf("No se pudo reservar memoria\n");
        return -1;
    }
    // Se reserva memoria para cada fila (del tamaño de "columnas").
    for (i = 0; i < filas; ++i) {
        grid[i] = (char *) malloc (columnas * sizeof(char));
        if (grid[i] == NULL) {
            printf("No se pudo reservar memoria\n");
            return -1;
        }
    }

    srand(time(0)); // Generador de numero aleatorio.
    printf("he llegado hasta Srand\n");
    SetGrid(grid, filas, columnas);
    printf("he hecho la grid\n");
    MakeMaze(grid);
    printf("he hecho el laberinto\n"); 
    PrintGrid(grid,filas,columnas);

    // Se libera memoria para cada fila.
    for (i = 0; i < filas; ++i) {
        free(grid[i]);
    }
    free(grid); //Se libera memoria para el vector de vectores ("primera columna").

    system("pause");

    return 0;
}

