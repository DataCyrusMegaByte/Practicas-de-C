#include <stdio.h>
#include <stdlib.h>
#include "../../Archivos-de-uso/Pila/pila.h"

int main()
{
    Pila ORIGEN, INTERMEDIO, DESTINO;
    int cantDatos;

    inicpila(&ORIGEN);
    inicpila(&INTERMEDIO);
    inicpila(&DESTINO);

    printf("Ingrese la cantidad de datos a poner en una pila: ");
    scanf("%i", &cantDatos);

    for(int i=1; i<=cantDatos; i++){
        leer(&ORIGEN);
    }

    printf("Ahora se transferiran los datos de ORIGEN a DESTINO sin modificar el orden de los numeros.\n\n");
    system("pause");
    printf("\nPila ORIGEN antes de la transferencia: ");
    mostrar(&ORIGEN);
    system("pause");

    while(!pilavacia(&ORIGEN)){
        apilar(&INTERMEDIO, desapilar(&ORIGEN));
    }

    while(!pilavacia(&INTERMEDIO)){
        apilar(&DESTINO, desapilar(&INTERMEDIO));
    }

    printf("\nPila DESTINO despues de la transferencia: ");
    mostrar(&DESTINO);

    return 0;
}
