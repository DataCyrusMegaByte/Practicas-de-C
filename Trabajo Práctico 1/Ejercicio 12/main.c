#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i;
    int num;
    int numCubo;
    int numCuarta;

    for(i=1; i<=10; i++){
        printf("Imprime el Nro %i: ", i);
        scanf("%i", &num);
        printf("\n");

        numCubo = pow(num, 3);
        numCuarta = pow(num, 4);

        printf("El cubo de este numero es: %i\n", numCubo);
        printf("La cuerta de este numero es: %i\n", numCuarta);
        printf("------------------------------------------------\n\n");
    }
    return 0;
}
