#!/bin/bash

# -----------------------------------------------------------------
#                 PRUEBAS PRÁCTICA DE RECURSIVIDAD
#   Es necesario tener este archivo .sh (shell) en una misma 
#   carpeta junto con ambos programas ya compilados. Nos genera
#   dos archivos .txt con los resultado de las pruebas.
#       PRUEBAS:
#           - Ejecutar ambos archivos por separado aumentando
#           los valores del tamaño del problema, en nuestro caso
#           el producto de "filas" * "columnas", es decir el área.
# -----------------------------------------------------------------

STARTTIMESCRIPT=$(date +%s) #time in seconds

mypath=$(pwd) # creo una variable mypath que contiene my root path desde el cual estoy ejecutando el script
echo "Estoy en el directorio $mypath" #así se ponen commandos con variables
echo "---------------------" # para imprimir por pantalla

STARTTIMELOOP=$(date +%s%3N) #time in milliseconds

file="output_recursive.txt"
touch $file

# Write column names
echo "filas columnas iteraciones" > $file

initial=20
final=1000
step=50

while [ $initial -le $final ]
    do 
        echo $initial $initial | $mypath/pruebas_Maze_Recursivo >> $file
        initial=$(( $initial + $step ))
    done

ENDTIMELOOP=$(date +%s%3N) #time in milliseconds
echo "The for loop takes $(($ENDTIMELOOP - $STARTTIMELOOP)) milliseconds to complete..."



ENDTIMESCRIPT=$(date +%s) #time in seconds

echo "---------------------"
echo "This script takes $(($ENDTIMESCRIPT - $STARTTIMESCRIPT)) seconds to complete..."
