#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int M[50][50];//Se declara matriz de ints, para 50 filas y 50 columnas
    int MT[50][50];//Su transpuesta tambien seria, para 50 filas y 50 columnas
    int i, j, m, n, mT, nT;
    srand(time(NULL));

    printf("Cuantas filas? ");
    scanf("%d",&m);
    printf("Cuantas columnas? ");
    scanf("%d",&n);
    mT = n;//Las columnas de la original seran las fila de la transpuesta
    nT = m;//Las filas de la original seran las columnas de la transpuesta

    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            M[i][j] = rand() % 100;
        }
    }

    for(i=0; i<m; i++){//Se genera la transpuesta de M
        for(j=0; j<n; j++){
            MT[j][i] = M[i][j]; //Con las filas de la original, como columnas de la transpuesta
                                //Con las columnas de la original, como filas de la transpuesta
        }
    }

    printf("\nM\n");
    for(i=0; i<m; i++){//Se muestra de izquiera a derecha, hacia abajo
        for(j=0; j<n; j++){
            printf("%d\t",M[i][j]);
        }
        printf("\n");
    }

    printf("\nMT\n");
    for(i=0; i<mT; i++){//Se muestra de izquiera a derecha, hacia abajo
        for(j=0; j<nT; j++){
            printf("%d\t",MT[i][j]);
        }
        printf("\n");
    }

    return 0;
}
