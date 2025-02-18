#include <stdio.h>
#include <stdlib.h>

int main()
{
    int horas;
    int horasExtra;
    int sueldoBase;
    int sueldoExtra;
    int sueldoTotal;

    printf("Cuantas horas trabaja usted?: $");
    scanf("%i", &horas);

    if(horas > 40){
        horasExtra = horas - 40;
        sueldoBase = 40*300;
        sueldoExtra = horasExtra*400;
        sueldoTotal = sueldoBase + sueldoExtra;
    } else {
        sueldoBase = horas*300;
        sueldoTotal = sueldoBase;
    }

    printf("\nSu sueldo total es de $%i\n", sueldoTotal);

    return 0;
}
