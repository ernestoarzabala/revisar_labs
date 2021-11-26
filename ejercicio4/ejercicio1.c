#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

int main(int numero_argumentos,char **lista_argumentos)
{

    printf("La cantidad de argumentos es %d\n\n",numero_argumentos);

    for(int indice=0; indice < numero_argumentos; ++indice )
    {

        printf("El argumento #%d es:\t%s\n",indice,lista_argumentos[indice]);

    }

    return EXIT_SUCCESS;

}