#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    float V[50];//Se reserva un vector de haste 50 elementos
    int i, n;
    srand(time(NULL));//Se inicializa la funcion para numeros aleatorios.

    printf("Cuantos elementos tendra V? ");
    scanf("%d",&n);

    if(n>0 && n<=50){//Se utilizan solo los que el usuario desee,
                     //mientras no revase el tamano del vector.
                     //Los espacios no utilizados, se desperdician
        for(i=0; i<n; i++)
            V[i] = rand() % 10; //Se rellena el vector con valores aleatorios
                                //entre [0, 10)

        for(i=0; i<n; i++)
            printf("V[%d] = %f\n",i, V[i]);
    }
    else
        printf("Dimension del arreglo invalida...\n\n");

    return 0;
}
