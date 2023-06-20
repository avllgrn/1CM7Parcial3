#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    float P1[50], P2[50], P3[50], Promedio[50],mayor,menor,s,promGral;
    int i,n,aprobados,reprobados;
    srand(time(NULL));//Se inicializa la funcion para numeros aleatorios.

    printf("Cuantos alumnos tienes? ");
    scanf("%d",&n);

    for(i=0; i<n; i++){//Se rellenan los parciales, alumno por alumno
        P1[i] = (rand() % 101)/10.0;
        P2[i] = (rand() % 101)/10.0;
        P3[i] = (rand() % 101)/10.0;
    }

    for(i=0; i<n; i++)//Se calculan los promedios, alumno por alumno
        Promedio[i] = (P1[i]+P2[i]+P3[i])/3;

    //Busca la mayor calificacion de P1
    mayor = P1[0];//Se supone que la primera calificacion es la mayor
    for(i=0; i<n; i++)
        if(P1[i] > mayor)//Si se encuentra una mayor,
            mayor = P1[i];//se almacena la nueva

    //Busca la menor calificacion de P2
    menor = P2[0];//Se supone que la primera calificacion es la mayor
    for(i=0; i<n; i++)
        if(P2[i] < menor)//Si se encuentra una menor,
            menor = P2[i];//se almacena la nueva

    //Busca cuantos reprobaron P3
    reprobados = 0;//Inicialmente, no se sabe cuantos reprobados hay
    for(i=0; i<n; i++)
        if(P3[i] < 6)//Si se encuentra una calificacion reprobatoria,
            reprobados++;//se incrementa el conteo de reprobados

    //Busca cuantos aprobaron la materia
    aprobados = 0;//Inicialmente, no se sabe cuantos aprobados hay
    for(i=0; i<n; i++)
        if(Promedio[i] >= 6)//Si se encuentra una calificacion aprobatoria,
            aprobados++;//se incrementa el conteo de aprobados

    //Acumula las calificaciones finales
    s = 0;//Suma acumulada comienza en cero
    for(i=0; i<n; i++)
        s = s + Promedio[i];//Acumula cada calificacion final
    promGral = s/n;//El promedio es la suma de todos, dividido entre n alumnos


    printf("Alumno\tP1\t\tP2\t\tP3\t\tPromedio\n\n");
    for(i=0; i<n; i++)//Se muestran las calificaciones
        printf("%d\t%f\t%f\t%f\t%f\n",i,P1[i],P2[i],P3[i],Promedio[i]);

    printf("\nMayor calificacion en P1\t= %f\n",mayor);
    printf("Menor calificacion en P2\t= %f\n",menor);
    printf("Alumnos reprobados en P3\t= %d\n",reprobados);
    printf("Alumnos aprobaron la materia\t= %d\n",aprobados);
    printf("Promedio final del grupo\t= %f\n",promGral);

    return 0;
}
