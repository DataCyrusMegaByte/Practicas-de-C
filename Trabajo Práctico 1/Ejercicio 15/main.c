#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int calif;
    int sumCalif;
    int promedio;
    int menorCalif;

    menorCalif = 99999;

    for(i=1;i<=40;i++){
        printf("Ingrese la calificacion del alumno Nro %i: ", i);
        scanf("%i", &calif);

        sumCalif += calif;

        if(calif < menorCalif){
            menorCalif = calif;
        }
    }
    printf("--------------------------------------------------\n");

    promedio = sumCalif / i;

    printf("\nEl promedio de calificaciones del total de alumnos es: %i", promedio);
    printf("\nLa calificacion mas baja es: %i\n", menorCalif);
    return 0;
}
