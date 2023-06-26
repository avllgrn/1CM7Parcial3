#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    float Calificaciones[50][11];
    float menor,mayor;
    int i,j,m,n,alumnoMenor,parcialMenor,alumnoMayor,parcialMayor,
        aprobadosParcial,reprobadosParcial;
    srand(time(NULL));

    printf("Cuantos alumnos? ");scanf("%d",&m);
    printf("Cuantos parciales? ");scanf("%d",&n);

    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            Calificaciones[i][j] = (rand()%101)/10.0;


    for(i=0; i<m; i++)
        Calificaciones[i][n] = 0.0;


    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            Calificaciones[i][n] = Calificaciones[i][n] + Calificaciones[i][j];
        }
        Calificaciones[i][n] =
        Calificaciones[i][n] / n;
    }


    printf("Alumno\t");
    for(j=0; j<n; j++)
        printf("P%d\t\t",j+1);
    printf("Promedio\n\n");

    for(i=0; i<m; i++){
        printf("%d\t",i+1);
        for(j=0; j<=n; j++){
            printf("%f\t",Calificaciones[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");



    menor = Calificaciones[0][0];
    alumnoMenor = 0;
    parcialMenor = 0;
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            if(Calificaciones[i][j] < menor){
                menor = Calificaciones[i][j];
                alumnoMenor = i;
                parcialMenor = j;
            }

    mayor = Calificaciones[0][0];
    alumnoMayor = 0;
    parcialMayor = 0;
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            if(Calificaciones[i][j] > mayor){
                mayor = Calificaciones[i][j];
                alumnoMayor = i;
                parcialMayor = j;
            }

    aprobadosParcial = 0;
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            if(Calificaciones[i][j] >= 6)
                aprobadosParcial++;

    reprobadosParcial = 0;
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            if(Calificaciones[i][j] < 6)
                reprobadosParcial++;


    printf("Calif menor del semestre: %f, alumno %d, parcial %d\n",
           menor,alumnoMenor+1,parcialMenor+1);
    printf("Calif mayor del semestre: %f, alumno %d, parcial %d\n",
           mayor,alumnoMayor+1,parcialMayor+1);
    printf("Calificaciones aprobatorias por parcial hay %d\n",aprobadosParcial);
    printf("Calificaciones aprobatorias por parcial hay %d\n",reprobadosParcial);


















    return 0;
}
