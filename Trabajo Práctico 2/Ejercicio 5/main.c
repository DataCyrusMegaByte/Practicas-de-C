#include <stdio.h>
#include <stdlib.h>
#include "../../Archivos-de-uso/Pila/pila.h"

void whilePila(P_Pila a, P_Pila b){
    while(!pilavacia(a)){
        apilar(b, desapilar(a));
    }
}

int main()
{
    Pila DADA, INVERSON1, INVERSON2;
    int cantDatos;

    inicpila(&DADA);
    inicpila(&INVERSON1);
    inicpila(&INVERSON2);

    printf("Ingrese la cantidad de datos a poner en una pila: ");
    scanf("%i", &cantDatos);

    for(int i=1; i<=cantDatos; i++){
        leer(&DADA);
    }

    printf("\nLos datos ingresados dentro de la pila DADA son: ");
    mostrar(&DADA);
    system("pause");
    printf("\nAhora se invertira el orden de los datos de la pila DADA: ");

    /*while(!pilavacia(&DADA)){
        apilar(&INVERSON1, desapilar(&DADA));
    }

    while(!pilavacia(&INVERSON1)){
        apilar(&INVERSON2, desapilar(&INVERSON1));
    }

    while(!pilavacia(&INVERSON2)){
        apilar(&DADA, desapilar(&INVERSON2));
    }*/

    whilePila(&DADA, &INVERSON1);
    whilePila(&INVERSON1, &INVERSON2);
    whilePila(&INVERSON2, &DADA);

    mostrar(&DADA);

    return 0;
}
