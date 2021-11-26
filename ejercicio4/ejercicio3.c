#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

int main(int numero_argumentos, char **lista_argumentos)
{

    FILE *archivo_a_leer;
    int dato_leido;
    int suma = 0;

    if (numero_argumentos !=2 )
    {
        fprintf(stderr,"ERROR 001\nSintaxis: %s nombre.ext\n",lista_argumentos[0]);
        return -1;
    }

    archivo_a_leer = fopen(lista_argumentos[1],"r"); /*Intentar abrir archivo*/
    if (archivo_a_leer == NULL )
    {
        perror(lista_argumentos[1]);
        return -2;
    }

    while ( fscanf(archivo_a_leer,"%d",&dato_leido) == 1 ) /* Leer dato del archivo*/
    {

        suma += dato_leido;

    }

    printf("\n\nLa suma de los valores es:\n%d\n",suma);

    fclose(archivo_a_leer); /* Cerrar archivo */

    return EXIT_SUCCESS;
}