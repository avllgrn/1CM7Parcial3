#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void rellenaVector(float X[50], int n);
void muestraVector(float X[50], int n);
void aplicaBurbuja(float X[50], int n);

int main(void){
    srand(time(NULL));
    float V[50];
    int n;

    printf("Cuantos valores? ");scanf("%d",&n);

    rellenaVector(V,n);
    printf("V inicial\n");
    muestraVector(V,n);

    aplicaBurbuja(V,n);

    printf("\nV final\n");
    muestraVector(V,n);

    return 0;
}

void rellenaVector(float X[50], int n){
    int i;
    for(i=0; i<n; i++)
        X[i] = rand() % 1000;
}
void muestraVector(float X[50], int n){
    int i;
    for(i=0; i<n; i++)
        printf("[%d] = %f\n",i,X[i]);
}
void aplicaBurbuja(float X[50], int n){
    float aux;
    int veces, i;
    for(veces=1; veces<n; veces++){
        for(i=0; i<n-1; i++)//Compara las posiciones contiguas
            if(X[i] < X[i+1]){//Intercambialas, si es necesario
                aux = X[i];
                X[i] = X[i+1];
                X[i+1] = aux;
            }
            //printf("\n\n%da vez que se aplica burbuja\n",veces);
            //muestraVector(X,n);
    }
}
