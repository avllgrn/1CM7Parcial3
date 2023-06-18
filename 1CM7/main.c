#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    float V1[50], V2[50], V3[50];
    int i, n1, n2, n3;
    srand(time(NULL));//Se inicializa la funcion para numeros aleatorios.

    printf("Cuantos elementos tendra V1? ");
    scanf("%d",&n1);
    printf("Cuantos elementos tendra V2? ");
    scanf("%d",&n2);

    if(n1<=0 || n1>50 ||
       n2<=0 || n2>50 )
        printf("Dimensiones invalidas...\n\n");
    else if(n1 != n2)
        printf("Error! No pueden sumarse...\n\n");
    else{
        n3 = n1;
        printf("%d %d %d\n\n",n1,n2,n3);
        for(i=0; i<n1; i++)
            V1[i] = rand() % 100; //Se rellena el vector con valores aleatorios entre [0, 100)

        for(i=0; i<n2; i++)
            V2[i] = rand() % 100; //Se rellena el vector con valores aleatorios entre [0, 100)

        for(i=0; i<n3; i++)
            V3[i] = V1[i] + V2[i]; //Se suman los arreglos, elemento a elemento

        for(i=0; i<n3; i++)//Se muestra simultaneamente los tres arreglos, elemento pot elemento
            printf("[%d]\t%f\t+\t%f\t= %f\n",i, V1[i], V2[i], V3[i]);
    }

    return 0;
}
