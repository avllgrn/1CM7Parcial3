#include <stdio.h>
#include <stdlib.h>

int main(void){

    int a = 5;
    int b = 10;
    int aux;

    printf("a = %d\tb=%d\n\n",a,b);

    aux=a;
    a=b;
    b=aux;

    printf("a = %d\tb=%d\n\n",a,b);

    return 0;
}
