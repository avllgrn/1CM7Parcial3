#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char cadena1[50], cadena2[50];
    int n1, n2;

    printf("Ingresa una cadena (sin espacios en blanco, con menos de 50 caracteres) ");
    scanf("%s",&cadena1);
    n1 = strlen(cadena1);

    printf("Ingresaste: %s\n",cadena1);
    printf("Tiene %d caracteres.\n\n",n1);

    printf("Ingresa otra cadena (sin espacios en blanco, con menos de 50 caracteres) ");
    scanf("%s",&cadena2);
    n2 = strlen(cadena2);

    printf("Ingresaste: %s\n",cadena2);
    printf("Tiene %d caracteres.\n\n",n2);

    return 0;
}
