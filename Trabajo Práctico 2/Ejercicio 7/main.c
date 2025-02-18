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
    int cantDatos, dadaBase;

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

    whilePila(&DADA, &INVERSON1);
    dadaBase = tope(&INVERSON1);
    desapilar(&INVERSON1);
    whilePila(&INVERSON1, &DADA);
    apilar(&DADA, dadaBase);

    mostrar(&DADA);

    return 0;
}
