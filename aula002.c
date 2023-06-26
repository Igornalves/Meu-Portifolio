#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void IMPRIMIR(float a, float b, float s)
{

    printf(" o calculo de %f e %f e igual a %f", a, b, s);
}

int main()
{
 
    float a = 10.3;
    float b = 12.5;
    float s;
    float g;
    float h;

    s = a + b;
    g = a - b;
    h = a * b;

    IMPRIMIR(a, b, s);

    system("pause");
}