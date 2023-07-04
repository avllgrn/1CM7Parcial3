#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char Cadena1[50], Cadena2[50], Cadena3[100];
    int n1, n2, n3, i, j;

    printf("Ingresa una cadena sin espacios en blanco ");
    scanf("%s",&Cadena1);
    n1 = strlen(Cadena1);


    printf("Ingresa otra cadena sin espacios en blanco ");
    scanf("%s",&Cadena2);
    n2 = strlen(Cadena2);

    system("cls");

    for(i=0; i<n1; i++)
        Cadena3[i] = Cadena1[i];

    for(j=0; j<n2; j++,i++)
        Cadena3[i] = Cadena2[j];
    Cadena3[i] = '\0';
    n3 = strlen(Cadena3);

    printf("Cadena1: %s\n",Cadena1);
    printf("Tiene %d caracteres.\n\n",n1);
    printf("Cadena2: %s\n",Cadena2);
    printf("Tiene %d caracteres.\n\n",n2);
    printf("Cadena3: %s\n",Cadena3);
    printf("Tiene %d caracteres.\n\n",n3);

    return 0;
}
