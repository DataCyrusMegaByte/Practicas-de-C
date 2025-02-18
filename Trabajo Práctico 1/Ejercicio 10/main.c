#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numUno;
    int numDos;
    int numTres;

    printf("Ingrese el primer numero: ");
    scanf("%i", &numUno);
    printf("Ingrese el segundo numero: ");
    scanf("%i", &numDos);
    printf("Ingrese el tercero numero: ");
    scanf("%i", &numTres);

    if((numUno != numDos) || (numUno != numTres) || (numDos != numTres)){
        if((numUno > numDos) && (numUno > numTres)){
            printf("\nEl primer numero es mayor.\n");
        } else if((numDos > numUno) && (numDos > numTres)){
            printf("\nEl segundo numero es mayor.\n");
        } else if((numTres > numUno) && (numTres > numDos)){
            printf("\nEl tercer numero es mayor.\n");
        }
    } else {
        printf("\nLos numeros son iguales.\n");
    }
    return 0;
}
