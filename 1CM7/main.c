#include <stdio.h>
#include <stdlib.h>

void leeVector(float X[50], int n);
void muestraVector(float X[50], int n);

int main(void){
    float V[50];
    int n;

    printf("Cuantos elementos tendra V? ");
    scanf("%d",&n);
    if(n<=0 || n>50)
        printf("Dimension invalida...\n\n");
    else{
        printf("Ingresa V\n");
        leeVector(V,n);
        system("pause");
        system("cls");

        printf("V\n");
        muestraVector(V,n);
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
void muestraVector(float X[50], int n){
    int i;
    for(i=0; i<n; i++)
        printf("[%d] = %f\n",i,X[i]);
}
