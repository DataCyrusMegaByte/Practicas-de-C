#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "../../Archivos-de-uso/Pila/pila.h"

int main()
{
    int cantDatos;
    Pila ORIGEN, DESTINO;

    inicpila(&ORIGEN);
    inicpila(&DESTINO);

    printf("Ingrese la cantidad de numeros a poner en una pila: ");
    scanf("%i", &cantDatos);

    for(int i=1; i<=cantDatos; i++){
        leer(&ORIGEN);
    }

    system("cls");
    printf("Estos son los datos que ingresaste en la pila ORIGEN: ");
    mostrar(&ORIGEN);
    system("pause");

    system("cls");

    while(!pilavacia(&ORIGEN)){
        apilar(&DESTINO, desapilar(&ORIGEN));
    }

    printf("Los datos de ORIGEN fueron transferidos a DESTINO.\n\n");
    printf("ORIGEN:");
    mostrar(&ORIGEN);
    printf("\n\nDESTINO:");
    mostrar(&DESTINO);

    return 0;
}
