#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cantCamisas;
    int montoInicio;
    float descuento;
    int montoTotal;
    float imprDesc;

    printf("Ingrese la cantidad de camisas a comprar: ");
    scanf("%i", &cantCamisas);
    printf("\nIngrese el monto a pagar: ");
    scanf("%i", &montoInicio);

    if(cantCamisas >= 3){
        descuento = 0.20;
    } else {
        descuento = 0.10;
    }

    montoTotal = montoInicio - (montoInicio*descuento);
    imprDesc = descuento*100;

    printf("\nEl monto total, con un descuento de %f", imprDesc);
    printf(", es de $%i", montoTotal);
    printf("\n");
    return 0;
}
