#include <stdio.h>
#include <stdlib.h>

int main()
{
    int calif;
    int contCalif;
    int sumaCalif;
    int promedio;

    contCalif = 1;

    do {
        printf("Ingrese la calificacion Nro %i\n", contCalif);
        scanf("%i", &calif);

        sumaCalif += calif;

        if(contCalif <= 7){
           contCalif++;
        }
    } while (contCalif <= 7);

    promedio = sumaCalif / contCalif;

    printf("\nEl promedio de las calificaciones es: %i\n", promedio);
    return 0;
}
