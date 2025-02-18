#include <stdio.h>
#include <stdlib.h>
#include "../../Archivos-de-uso/Pila/pila.h"

int main()
{
    int cantDatos;
    Pila DADA, DISTINTOS;

    inicpila(&DADA);
    inicpila(&DISTINTOS);

    printf("Ingrese la cantidad de datos a poner en una pila: ");
    scanf("%i", &cantDatos);

    for(int i=1; i<=cantDatos; i++){
        leer(&DADA);
    }

    while(!pilavacia(&DADA)){
        if(tope(&DADA) !=  8){
            apilar(&DISTINTOS, desapilar(&DADA));
        } else {
            desapilar(&DADA);
        }
    }

    printf("Los datos de DADA distitos de 8 fueron transferidos a la pila DISTINTOS.\n");
    system("pause");

    printf("DISTINTOS:");
    mostrar(&DISTINTOS);

    return 0;
}
