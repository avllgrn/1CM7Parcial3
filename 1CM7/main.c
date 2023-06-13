#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    float V[10];//Arreglo para almacenar hasta 10 datos float
    int i;

    //Se muestra el contenido inicial (basura) de los diez elementos del arreglo,
    //posicion por posicion, de la 0 a la 10 (sin llegar a 10)
    for(i=0; i<10; i++)
        printf("V[%d] = %f\n",i,V[i]);

    system("pause");
    system("cls");

    //Se pide al usuario cada uno de los diez elementos del arreglo,
    //posicion por posicion, de la 0 a la 10 (sin llegar a 10)
    for(i=0; i<10; i++){
        printf("Ingresa V[%d] ",i);
        scanf("%f",&V[i]);
    }

    system("pause");
    system("cls");

    //Se muestra el contenido final de los diez elementos del arreglo,
    //posicion por posicion, de la 0 a la 10 (sin llegar a 10)
    for(i=0; i<10; i++)
        printf("V[%d] = %f\n",i,V[i]);

    return 0;
}
