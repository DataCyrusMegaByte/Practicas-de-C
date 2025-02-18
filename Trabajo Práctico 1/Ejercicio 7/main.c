#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numUno;
    int numDos;

    printf("Imprimir el primer numero: ");
    scanf("%i", &numUno);
    printf("Imprimir el segundo numero: ");
    scanf("%i", &numDos);

    if(numUno > numDos){
        printf("%i", numDos);
        printf("\n%i\n", numUno);
    } else if (numDos > numUno){
        printf("%i", numUno);
        printf("\n%i\n", numDos);
    } else {
        printf("\nAmbos numeros son iguales.\n");
    }

    return 0;
}
