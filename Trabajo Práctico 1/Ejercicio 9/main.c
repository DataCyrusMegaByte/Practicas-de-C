#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numUno;
    int numDos;
    int resultado;

    printf("Ingrese el primer numero: ");
    scanf("%i", &numUno);
    printf("Ingrese el segundo numero: ");
    scanf("%i", &numDos);

    if(numUno == numDos){
        resultado = numUno*numDos;
        printf("\nMultiplicacion: %i", resultado);
    } else if(numUno>numDos){
        resultado = numUno - numDos;
        printf("\nResta: %i", resultado);
    } else if (numDos>numUno){
        resultado = numUno + numDos;
        printf("\nSuma: %i", resultado);
    }

    return 0;
}
