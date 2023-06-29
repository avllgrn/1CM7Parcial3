#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int Original[50], Copia[50], CopiaInvertida[50];
    int i,j,n;
    srand(time(NULL));

    printf("Dame n ");scanf("%d",&n);

    for(i=0; i<n; i++)
        Original[i] = rand()%101;


    for(i=0; i<n; i++)
        Copia[i] = Original[i];

    for(i=0, j=n-1; i<n; i++, j--)
        CopiaInvertida[j] = Original[i];


    for(i=0; i<n; i++)
        printf("Original[%d] = %d\tCopia[%d] = %d\tCopiaInvertida[%d] = %d\n",
               i,Original[i], i,Copia[i], i,CopiaInvertida[i]);

    return 0;
}
