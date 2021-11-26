#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

int main(int numero_argumentos, char **lista_argumentos)
{

    FILE *archivo_para_escribir;
    int dato_a_escribir = 1;
    int dato_anterior = 1;
    int dato_anterior_anterior = 0;

    if (numero_argumentos !=2 )
    {
        fprintf(stderr,"ERROR 001\nSintaxis: %s nombre.ext\n",lista_argumentos[0]);
        return -1;
    }

    archivo_para_escribir = fopen(lista_argumentos[1],"w"); /*Intentar abrir archivo*/
    if (archivo_para_escribir == NULL )
    {
        perror(lista_argumentos[1]);
        return -2;
    }

    while (dato_a_escribir < 500 ) /* Leer dato del archivo*/
    {

       fprintf(archivo_para_escribir,"%d\n",dato_a_escribir);

        dato_anterior_anterior = dato_anterior;
        dato_anterior = dato_a_escribir;
        dato_a_escribir = dato_anterior + dato_anterior_anterior;

    }

    printf("\nTerminado!:\n");

    fclose(archivo_para_escribir); /* Cerrar archivo */

    return EXIT_SUCCESS;
}