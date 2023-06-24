#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int M1[50][50];
    int M2[50][50];
    int M3[50][50];
    int i, j, m1, n1, m2, n2, m3, n3;
    srand(time(NULL));

    printf("Cuantas filas para M1? ");
    scanf("%d",&m1);
    printf("Cuantas columnas para M1? ");
    scanf("%d",&n1);
    printf("Cuantas filas para M2? ");
    scanf("%d",&m2);
    printf("Cuantas columnas para M2? ");
    scanf("%d",&n2);

    if(m1!=m2 || n1!=n2)
        printf("\n\nError! No puede sumarse...\n\n");
    else{
        m3=m1;
        n3=n2;

        for(i=0; i<m1; i++){
            for(j=0; j<n1; j++){
                M1[i][j] = rand() % 100;
            }
        }

        for(i=0; i<m2; i++){
            for(j=0; j<n2; j++){
                M2[i][j] = rand() % 100;

            }
        }

        for(i=0; i<m3; i++){
            for(j=0; j<n3; j++){//Se suman elemento a elemento
                M3[i][j] = M1[i][j] + M2[i][j];

            }
        }

        printf("\nM1\n");
        for(i=0; i<m1; i++){//Se muestra de izquiera a derecha, hacia abajo
            for(j=0; j<n1; j++){
                printf("%d\t",M1[i][j]);
            }
            printf("\n");
        }

        printf("\nM2\n");
        for(i=0; i<m2; i++){//Se muestra de izquiera a derecha, hacia abajo
            for(j=0; j<n2; j++){
                printf("%d\t",M2[i][j]);
            }
            printf("\n");
        }

        printf("\nM1+M2\n");
        for(i=0; i<m3; i++){//Se muestra de izquiera a derecha, hacia abajo
            for(j=0; j<n3; j++){
                printf("%d\t",M3[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
