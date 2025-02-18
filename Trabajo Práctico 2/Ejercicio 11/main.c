#include <stdio.h>
#include <stdlib.h>
#include "../../Archivos-de-uso/Pila/pila.h"

int main()
{
    Pila MODELO, DADA;
    Pila DADA_aux;

    inicpila(&MODELO);
    inicpila(&DADA);

    apilar(&MODELO, 1);
    apilar(&MODELO, 2);
    apilar(&MODELO, 3);
    apilar(&MODELO, 4);
    apilar(&MODELO, 5);     //TOPE

    apilar(&DADA, 1);
    apilar(&DADA, 2);
    apilar(&DADA, 3);
    apilar(&DADA, 4);
    apilar(&DADA, 5);

    while(!(pilavacia(&DADA))){
        if(tope(&DADA) == tope(&MODELO)){
            desapilar(&DADA);
            printf("EEE\n");
        } else {
            apilar(&DADA_aux, desapilar(&DADA));
        }
    }

    while(!(pilavacia(&DADA_aux))){
        apilar(&DADA, desapilar(&DADA_aux));
    }
     printf("Se han eliminado los valores similares de la pila DADA a la pila MODELO: \n");
     mostrar(&DADA);
    return 0;
}
