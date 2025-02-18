#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cantHombres;
    int cantMujeres;
    int alumnosTotales;
    float porcenHombres;
    float porcenMujeres;
    float porcentajeTotal;

    printf("Ingrese la cantidad de alumnos hombres: \n");
    scanf("%i", &cantHombres);
    printf("Ingrese la cantidad de alumnas mujeres: \n");
    scanf("%i", &cantMujeres);

    alumnosTotales = cantHombres + cantMujeres;
    porcenHombres = (cantHombres*100)/alumnosTotales;
    porcenMujeres = (cantMujeres*100)/alumnosTotales;

    printf("\nPorcentaje de alumnos hombres: %f", porcenHombres);
    printf("\nPorcentaje de alumnas mujeres: %f", porcenMujeres);

    return 0;
}
