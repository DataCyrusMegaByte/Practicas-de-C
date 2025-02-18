#include <stdio.h>
#include <stdlib.h>
#include "../../Archivos-de-uso/pila/pila.h"

int main()
{
    Pila DADA, AUX1, AUX2;
    int numDatos;

    inicpila(&DADA);
    inicpila(&AUX1);
    inicpila(&AUX2);

    printf("Ingrese la cantidad de numeros que pondra en una pila: ");
    scanf("%i", &numDatos);

    for(int i=1; i<=numDatos; i++){
        leer(&DADA);
    }

    printf("\n-----------------------------------------------------------------------\n");
    printf("\nVerificacion de datos:\n");
    printf("\nDADA:");
    mostrar(&DADA);

    for(int i=1; i<=3; i++){
        if(!pilavacia(&DADA)){
            apilar(&AUX1, desapilar(&DADA));
        }
    }
    printf("\n-----------------------------------------------------------------------\n");

    printf("\nVerificacion de datos:\n");
    printf("\nDADA:");
    mostrar(&DADA);
    printf("\nAUX1:");
    mostrar(&AUX1);

    for(int i=1; i<=2; i++){
        if(!pilavacia(&DADA)){
            apilar(&AUX2, desapilar(&DADA));
        }
    }

    printf("-----------------------------------------------------------------------\n");

    printf("\nVerificacion de datos:\n");
    printf("\nDADA:");
    mostrar(&DADA);
    printf("\nAUX2:");
    mostrar(&AUX2);

    return 0;
}
