#include <stdio.h>
#include <stdlib.h>

int main()
{
    int montoCompra;
    float descuento;
    float totalCompra;

    descuento = 0.15;

    printf("Por favor, ingrese el monto de la compra: ");
    scanf("%i", &montoCompra);

    totalCompra = montoCompra - (montoCompra*descuento);

    printf("El total a pagar es: $%f\n", totalCompra);

    return 0;
}
