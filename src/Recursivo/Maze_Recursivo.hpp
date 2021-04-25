//======================================================================
// Maze_Recursivo.hpp
//
// Librerías, directivas del preprocesador y prototipos de funciones 
// para Maze_Iterativo.cpp, Metodos_Grid.cpp and Visit_Grid.cpp
//
//======================================================================

#include <stdio.h>
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

//----CONSTANTES--------------------------------------------------------
#define ARRIBA 0
#define DERECHA 1
#define ABAJO 2
#define IZQUIERDA 3

//----PROTOTIPOS DE FUNCIONES-------------------------------------------
void Pedir();
void Arreglar_2D();
void SetGrid(char **);
int IsInBounds( int , int );
void Visit(int , int , char **);
void PrintGrid(char **);