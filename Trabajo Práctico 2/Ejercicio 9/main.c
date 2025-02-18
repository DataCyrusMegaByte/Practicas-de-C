#include <stdio.h>
#include <stdlib.h>
#include "../../Archivos-de-uso/Pila/pila.h"

int main()
{
    Pila A, B;

    inicpila(&A);
    inicpila(&B);

    apilar(&A, 2);
    apilar(&A, 5);
    apilar(&A, 23);
    apilar(&A, 9);
    apilar(&A, 12);
    apilar(&A, 45);

    apilar(&B, 5);
    apilar(&B, 4);
    apilar(&B, 23);
    apilar(&B, 87);
    apilar(&B, 14);
    apilar(&B, 21);
    /*apilar(&B, 7);*/

    while(!(pilavacia(&A)) && !(pilavacia(&B))){
        desapilar(&A);
        desapilar(&B);

        if(pilavacia(&A) && !(pilavacia(&B))){
            printf("La pila B tiene mas elementos que A.");
            break;
        } else if(pilavacia(&B) && !(pilavacia(&A))) {
            printf("La pila A tiene mas elementos que B.");
            break;
        } else if (pilavacia(&A) && pilavacia(&B)){
            printf("Ambas pilas tienen la misma cantidad de elementos.");
            break;
        }
    }

    return 0;
}
