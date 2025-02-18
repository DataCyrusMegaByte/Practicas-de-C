#include <stdio.h>
#include <stdlib.h>

int main()
{
    int calUno;
    int calDos;
    int calTres;
    int prom;

    printf("Ingrese la primer calificacion: ");
    scanf("%i", &calUno);
    printf("Ingrese la segunda calificacion: ");
    scanf("%i", &calDos);
    printf("Ingrese la tercera calificacion: ");
    scanf("%i", &calTres);

    prom = (calUno+calDos+calTres)/3;

    if(prom >= 7){
        printf("\nEl alumno aprobo con un promedio de %i\n", prom);
    } else {
        printf("\nEl alumno reprobo con un promedio de %i\n", prom);
    }

    return 0;
}
