#include <stdio.h>
#include <stdlib.h>

int main(void){
    int V[10];//Arreglo para almacenar hasta 10 datos int

    V[0] = 1;//Se almacena, en la posicion 0, directamente un dato int


    printf("Ingresa un valor int negativo ");
    scanf("%d",&V[3]);//Se almacena, en la posicion 3, un dato int ingresado por teclado

    V[6] = V[0] + V[3];//Se almacena, en la posicion 6, el resultado int
                        //de sumar el dato int en la posicion 0
                        //con el dato int en la posicion 3

    V[9] = abs(V[6]);//Se almacena, en la posicion 9, el valor absoluto int
                        //que retorna la funcion abs,
                        //tras enviarle el valor int en la posicion 6

    printf("%d + %d = %d\n", V[0], V[3], V[6]);
    printf("|%d| = %d\n", V[6], V[9]);

    return 0;
}
