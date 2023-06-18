#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void leeVector(float X[50], int n);
void rellenaVector(float X[50], int n);
void muestraVector(float X[50], int n);
void sumaVectores(float X[50], float Y[50], float Z[50], int n);
void restaVectores(float X[50], float Y[50], float Z[50], int n);

int main(void){
    float V1[50], V2[50], V3[50], V4[50];
    int n1, n2, n3, n4;
    srand(time(NULL));//Se inicializa la funcion para numeros aleatorios.

    printf("Cuantos elementos tendra V1? ");
    scanf("%d",&n1);
    printf("Cuantos elementos tendra V2? ");
    scanf("%d",&n2);

    if(n1<=0 || n1>50 ||
       n2<=0 || n2>50 )
        printf("Dimensiones invalidas...\n\n");
    else if(n1 != n2)
        printf("Error! No pueden sumarse ni restarse...\n\n");
    else{
        n3 = n1;
        n4 = n2;

        rellenaVector(V1,n1);
        rellenaVector(V2,n2);

        sumaVectores(V1,V2,V3,n3);
        restaVectores(V1,V2,V4,n4);

        printf("\nV1\n");
        muestraVector(V1,n1);
        printf("\nV2\n");
        muestraVector(V2,n2);
        printf("\nV1+V2\n");
        muestraVector(V3,n3);
        printf("\nV1-V2\n");
        muestraVector(V3,n3);
    }

    return 0;
}

void leeVector(float X[50], int n){
    int i;
    for(i=0; i<n; i++){
        printf("Ingresa [%d] ",i);
        scanf("%f",&X[i]);
    }
}
void rellenaVector(float X[50], int n){
    int i;
    for(i=0; i<n; i++)
        X[i] = rand() % 100;
}
void muestraVector(float X[50], int n){
    int i;
    for(i=0; i<n; i++)
        printf("[%d] = %f\n",i,X[i]);
}
void sumaVectores(float X[50], float Y[50], float Z[50], int n){
    int i;
    for(i=0; i<n; i++)
        Z[i] = X[i] + Y[i];
}
void restaVectores(float X[50], float Y[50], float Z[50], int n){
    int i;
    for(i=0; i<n; i++)
        Z[i] = X[i] - Y[i];
}
