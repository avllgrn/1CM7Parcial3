#include <stdio.h>
#include <stdlib.h>

int main(void){
    int M[50][50];//Se declara matriz de ints, para 50 filas y 50 columnas
    int i, j, m, n;

    printf("Cuantas filas? ");
    scanf("%d",&m);
    printf("Cuantas columnas? ");
    scanf("%d",&n);

    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            M[i][j] = i;//Rellena la matriz con el valor de la fila
        }
    }

    printf("\nM\n");
    for(i=0; i<m; i++){//Se muestra de izquiera a derecha, hacia abajo
        for(j=0; j<n; j++){
            printf("%d\t",M[i][j]);
        }
        printf("\n");
    }

    return 0;
}
