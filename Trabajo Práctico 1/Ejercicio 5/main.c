#include <stdio.h>
#include <stdlib.h>

int main()
{
    int montoCompra;
    float descuento;
    float totalCompra;

    descuento = 0.20;

    printf("Por favor, ingrese el monto de la compra: ");
    scanf("%i", &montoCompra);

    if(montoCompra > 5000){
       totalCompra = montoCompra - (montoCompra*descuento);
    } else {
        totalCompra = montoCompra;
    }

    printf("El total a pagar es: $%f\n", totalCompra);
    return 0;
}
