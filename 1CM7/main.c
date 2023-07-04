#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char Origen[50], Destino[50];
    int n, i, j;

    printf("Ingresa una Origen sin espacios en blanco ");
    scanf("%s",&Origen);
    n = strlen(Origen);

    for(i=0, j=n-1; i<n; i++, j--)
        Destino[j] = Origen[i];
    Destino[i] = '\0';

    printf("\nIngresaste: %s\n",Origen);
    printf("Invertida : %s\n\n",Destino);
    printf("Tienen %d caracteres.\n",n);

    return 0;
}
