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
    Pila DADA, INVERSON;
    int cantDatos, dadaTope;

    inicpila(&DADA);
    inicpila(&INVERSON);

    printf("Ingrese la cantidad de datos a poner en una pila: ");
    scanf("%i", &cantDatos);

    for(int i=1; i<=cantDatos; i++){
        leer(&DADA);
    }

    printf("\nLos datos ingresados dentro de la pila DADA son: ");
    mostrar(&DADA);
    system("pause");

    dadaTope = tope(&DADA);
    desapilar(&DADA);

    whilePila(&DADA, &INVERSON);
    apilar(&DADA, dadaTope);
    whilePila(&INVERSON, &DADA);


    mostrar(&DADA);

    return 0;
}
