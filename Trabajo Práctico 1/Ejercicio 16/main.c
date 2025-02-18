#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int multiplicando;
    int multiplicadorTotal;
    int producto;

    printf("Ingrese el numero cuya tabla de multiplicar quiera ver: ");
    scanf("%i", &multiplicando);
    printf("Ingrese la cantidad de columnas que quiere ver en la tabla: ");
    scanf("%i", &multiplicadorTotal);

    printf("\n");

    for(i=0;i<=multiplicadorTotal;i++){
        producto = multiplicando*i;

        printf("%i x ", multiplicando);
        printf("%i = ", i);
        printf("%i\n", producto);
    }
    return 0;
}
