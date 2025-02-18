#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int numPosit;
    int i;

    for(i=1;i<=15;i++){
        printf("Imprimir el Nro %i: ", i);
        scanf("%i", &num);

        if(num<0){
            numPosit = -(num);
        } else {
            numPosit = num;
        }

        printf("El numero positivo es: %i\n", numPosit);
        printf("-------------------------------------\n\n");
    }
    return 0;
}
