#include <stdio.h>
#include <stdlib.h>
#include "../../Archivos-de-uso/Pila/pila.h"

int main()
{
    Pila MAZO, JUGADOR1, JUGADOR2;
    int cantDatos, datoPila;

    inicpila(&MAZO);
    inicpila(&JUGADOR1);
    inicpila(&JUGADOR2);

    do {
        printf("Ingrese la cantidad de cartas en un mazo: ");
        scanf("%i", &cantDatos);

        if(!(cantDatos%2==0)){
            printf("\nLa cantidad de cartas debe repartirse de modo tal que los dos jugadores tengan la misma cantidad.\nPruebe de nuevo.\n\n");
        }
    } while(cantDatos%2==1);

    for(int i=1; i<=cantDatos; i++){
        leer(&MAZO);
    }

    printf("\nLos datos ingresados en el mazo son: ");
    mostrar(&MAZO);
    system("pause");

    while(!pilavacia(&MAZO)){
        apilar(&JUGADOR1, desapilar(&MAZO));
        if(!pilavacia(&MAZO)){
            apilar(&JUGADOR2, desapilar(&MAZO));
        }
    }

    printf("\nLos datos del mazo han sido repartidos entre los jugadores.");
    printf("\n\nJugador 1:");
    mostrar(&JUGADOR1);
    printf("\n\nJugador 2:");
    mostrar(&JUGADOR2);

    return 0;
}
