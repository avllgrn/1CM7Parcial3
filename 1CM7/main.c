#include <stdio.h>
#include <math.h>

int main(void){
    float V[10];//Arreglo para almacenar hasta 10 datos float

    V[0] = 1.2;//Se almacena, en la posicion 0, directamente un dato float


    printf("Ingresa un valor float negativo ");
    scanf("%f",&V[3]);//Se almacena, en la posicion 3, un dato float ingresado por teclado

    V[6] = V[0] + V[3];//Se almacena, en la posicion 6, el resultado float
                        //de sumar el dato float en la posicion 0
                        //con el dato float en la posicion 3

    V[9] = fabs(V[6]);//Se almacena, en la posicion 9, el valor absoluto float
                        //que retorna la funcion abs,
                        //tras enviarle el valor float en la posicion 6

    printf("%f + %f = %f\n", V[0], V[3], V[6]);
    printf("|%f| = %f\n", V[6], V[9]);

    return 0;
}
