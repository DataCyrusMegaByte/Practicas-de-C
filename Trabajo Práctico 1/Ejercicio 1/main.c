#include <stdio.h>
#include <stdlib.h>

int main()
{
    float inv;
    float interes;
    int cantMeses;
    float montoAcum;
    int margGanancia;

    printf("Bienvenido a nuestro sistema de inversion.\n");
    printf("Por favor, ingrese el monto a invertir: ");
    scanf("%f", &inv);
    printf("Ingrese la cantidad de meses que mantendra la inversion: ");
    scanf("%i", &cantMeses);

    interes = 0.02;
    montoAcum = ((inv*interes)*cantMeses)+inv;
    margGanancia = montoAcum-inv;

    printf("\nLa inversion de $%i", inv);
    printf(" ha acumulado en %i", cantMeses);
    printf(" meses un total de $%f\n", montoAcum);
    printf("Teniendo un margen de ganancia de $%f", margGanancia);

    return 0;
}
