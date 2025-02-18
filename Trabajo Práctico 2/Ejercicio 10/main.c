#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "../../Archivos-de-uso/Pila/pila.h"

int main()
{
    Pila A, B;
    Pila A_aux, B_aux;
    Pila A_aux2, B_aux2;
    bool verdaderos, falsos, iguales;

    inicpila(&A);
    inicpila(&B);
    inicpila(&A_aux);
    inicpila(&B_aux);
    inicpila(&A_aux2);
    inicpila(&B_aux2);

    apilar(&A, 1);
    apilar(&A, 2);
    apilar(&A, 3);
    apilar(&A, 4);
    apilar(&A, 5);
    apilar(&A, 6);

    apilar(&B, 1);
    apilar(&B, 2);
    apilar(&B, 3);
    apilar(&B, 4);
    apilar(&B, 5);
    apilar(&B, 6);
    /*apilar(&B, 7);*/

    while(!(pilavacia(&A)) && !(pilavacia(&B))){
        apilar(&A_aux, desapilar(&A));
        apilar(&B_aux, desapilar(&B));

        if(pilavacia(&A) && !(pilavacia(&B))){
            printf("La pila B tiene mas elementos que A.");
            break;
        } else if(pilavacia(&B) && !(pilavacia(&A))) {
            printf("La pila A tiene mas elementos que B.");
            break;
        } else if (pilavacia(&A) && pilavacia(&B)){
            printf("Ambas pilas tienen la misma cantidad de elementos.");

            while(!(pilavacia(&A_aux)) && !(pilavacia(&B_aux))){
                apilar(&A_aux2, desapilar(&A_aux));
                apilar(&B_aux2, desapilar(&B_aux));
            }
            break;
        }
    }

    while(!(pilavacia(&A_aux2)) && !(pilavacia(&B_aux2))){
        if(tope(&A_aux2) == tope(&B_aux2)){
            iguales = true;
        } else {
            iguales = false;
            break;
        }

        desapilar(&A_aux2);
        desapilar(&B_aux2);
    }

    if (iguales){
        printf("\nAmbas pilas son completamente iguales.\n");
    } else {
        printf("\nLas pilas no son completamente iguales.\n");
    }

    return 0;
}
