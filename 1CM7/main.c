#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void calculaXporN(void);
void calculaXaLaN(void);
int factorial(int n);
void serieDeUnoEntreUnoMenosX(void);
void serieMenosLogNatDe1menosX(void);
void serieEaLaX(void);

int main(void){

    calculaXporN();
    system("pause");
    system("cls");
    calculaXaLaN();
    system("pause");
    system("cls");
    serieDeUnoEntreUnoMenosX();
    system("pause");
    system("cls");
    serieMenosLogNatDe1menosX();
    system("pause");
    system("cls");
    serieEaLaX();

    return 0;
}

void calculaXporN(void){
    int i,n;
    float x,s;
    printf("Calculo de x por n\n\n");
    printf("Ingresa x ");scanf("%f",&x);
    printf("Ingresa n ");scanf("%d",&n);
    for(i=1, s=0; i<=n; i++){
        //printf("s = %f\ti = %d\n",s,i);
        s = s + x;
    }
    printf("\n\n%f x %d = %f\n\n",x,n,s);
}
void calculaXaLaN(void){
    int i,n;
    float x,p;
    printf("Calculo de x^n\n\n");
    printf("Ingresa x ");scanf("%f",&x);
    printf("Ingresa n ");scanf("%d",&n);
    for(i=1, p=1; i<=n; i++){
        //printf("p = %f\ti = %d\n",p,i);
        p = p * x;
    }
    printf("\n\n%f^ %d = %f\n\n",x,n,p);
}
int factorial(int n){
    int i;
    int f;
    for(i=1, f=1; i<=n; i++){
        //printf("f = %d\ti = %d\n",f,i);
        f = f * i;
    }
    return f;
}
void serieDeUnoEntreUnoMenosX(void){
    int i,n;
    float x,s;
    printf("Calculo de 1/(1 - x) con n terminos de la serie\n\n");
    printf("Ingresa x (solo valores |x| < 1)\n");scanf("%f",&x);
    printf("Ingresa n ");scanf("%d",&n);
    for(i=0, s=0; i<=n; i++){
        //printf("s =%f\ti = %d\n",s,i);
        s = s + pow(x,i);
    }
    printf("\n\n1/(1 - %f) = %f\n\n",x,s);
}
void serieMenosLogNatDe1menosX(void){
    int i,n;
    float x,s;
    printf("Calculo de -ln(1 - x) con n terminos de la serie\n\n");
    printf("Ingresa x (solo valores |x| < 1)\n");scanf("%f",&x);
    printf("Ingresa n ");scanf("%d",&n);
    for(i=1, s=0; i<=n; i++){
        //printf("s =%f\ti = %d\n",s,i);
        s = s + pow(x,i)/i;
    }
    printf("\n\n-ln(1 - %f) = %f\n\n",x,s);
}
void serieEaLaX(void){
    int i,n;
    float x,s;
    printf("Calculo de e^x con n terminos de la serie\n\n");
    printf("Ingresa x ");scanf("%f",&x);
    printf("Ingresa n ");scanf("%d",&n);
    for(i=0, s=0; i<=n; i++){
        //printf("s =%f\ti = %d\n",s,i);
        s = s + pow(x,i)/factorial(i);
    }
    printf("\n\ne^%f = %f\n\n",x,s);
}
