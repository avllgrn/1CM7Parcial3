#include <stdio.h>
#include <stdlib.h>

int main(void){
    float M[40][50];//Declaracion de matriz de 40 filas y 50 columnas

    M[12][23] = 45.67;//Se almacena un dato en la fila 12 columna 23

    printf("Ingresa un dato para la posicion M[24][45] ");
    scanf("%f",&M[24][45]);//Se teclea un dato y se almacena en la fila 24 columna 45

    M[34][46] = M[12][23] + M[24][45];//Se almacena un resultado en la fila 34 columna 46

    printf("%f + %f = %f\n\n",M[12][23],M[24][45],M[34][46]);//Se muestran las po siciones utilizadas

    return 0;
}
