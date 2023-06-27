#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    float Calificaciones[50][11];
    float menor,mayor,x;
    int i,j,m,n,alumnoMenor,parcialMenor,alumnoMayor,parcialMayor,
        aprobadosParcial,reprobadosParcial,cuantasX,parcialesAprobadosAlumno1,
        parcialesReprobadosAlumno3,alumnosAprobadosParcial0,
        alumnosReprobadosParcial2, reprobadosFinal;
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
        Calificaciones[i][n] = Calificaciones[i][n] / n;
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

    x = 10;//Esto puede preguntarsele al usuario
    cuantasX = 0;
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            if(Calificaciones[i][j] == x)
                cuantasX++;


    parcialesAprobadosAlumno1 = 0;
    for(j=0; j<n; j++)
        if(Calificaciones[1][j] >= 6)
            parcialesAprobadosAlumno1++;

    parcialesReprobadosAlumno3 = 0;
    for(j=0; j<n; j++)
        if(Calificaciones[3][j] < 6)
            parcialesReprobadosAlumno3++;

    alumnosAprobadosParcial0 = 0;
    for(i=0; i<m; i++)
        if(Calificaciones[i][0] >= 6)
            alumnosAprobadosParcial0++;

    alumnosReprobadosParcial2 = 0;
    for(i=0; i<m; i++)
        if(Calificaciones[i][2] < 6)
            alumnosReprobadosParcial2++;

    reprobadosFinal = 0;
    for(i=0; i<m; i++)
        if(Calificaciones[i][n] < 6)
            reprobadosFinal++;


    printf("Calif menor del semestre: %f, alumno %d, parcial %d\n", menor,alumnoMenor+1,parcialMenor+1);
    printf("Calif mayor del semestre: %f, alumno %d, parcial %d\n", mayor,alumnoMayor+1,parcialMayor+1);
    printf("Calificaciones aprobatorias por parcial hay %d\n",aprobadosParcial);
    printf("Calificaciones aprobatorias por parcial hay %d\n",reprobadosParcial);
    printf("Hubo %d %f, durante el semestre\n",cuantasX,x);
    printf("El alumno 2 aprobo %d parciales\n",parcialesAprobadosAlumno1);//Alumno (1+1)
    printf("El alumno 4 reprobo %d parciales\n",parcialesReprobadosAlumno3);//Alumno (3+1)
    printf("%d alumnos aprobaron el parcial 1\n",alumnosAprobadosParcial0);//Parcial (0+1)
    printf("%d alumnos reprobaron el parcial 3\n",alumnosReprobadosParcial2);//Parcial (2+1)
    printf("%d alumnos reprobaron el semestre\n",reprobadosFinal);//Columna n tiene calificaciones finales

    return 0;
}
