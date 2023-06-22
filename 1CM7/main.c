#include <stdio.h>
#include <stdlib.h>

int main(void){
    int x, xCociente, i, n;
    int binario[50];

    printf("Ingresa entero positivo ");
    scanf("%d",&x);
    printf("\n\n(%d)10 = (",x);

    for(i=0, xCociente=x; xCociente!=0; i++){
        binario[i] = xCociente%2;
        xCociente = xCociente/2;
    }
    n = i;//Numero de bits (posiciones del vector) utilizados

    for(i=n-1; i>=0; i--)
        printf("%d",binario[i]);

    printf(")2\n\n");

    return 0;
}
