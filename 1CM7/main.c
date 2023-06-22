#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int i, j, m, n;

    printf("Ingresa m ");scanf("%d",&m);
    printf("Ingresa n ");scanf("%d",&n);

    for(i=0; i<m; i++){//Contador externo es mas lento que el interno, da m vueltas
        for(j=0; j<n; j++){ //Contador externo es mas rapido que el externo,
                            //da n vueltas por cada vuelta del externo (total=n x m)
            printf("(%d,%d)\t",i,j);
        }
        printf("\n");
    }

    return 0;
}
