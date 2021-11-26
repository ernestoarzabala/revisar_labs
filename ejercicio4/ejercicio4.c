#include <ctype.h>
#include <errno.h>
#include <limits.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

int leer_factor(const char *buffer);

int main(int numero_argumentos, char **lista_argumentos)
{

    FILE *archivo_para_escribir;
    FILE *archivo_a_leer;

    int dato_a_escribir = 0;
    int dato_leido;
    int factor = 0;

    if (numero_argumentos !=4 )
    {
        fprintf(stderr,"ERROR 001\nSintaxis: %s entrada.ext salida.ext factor\n",lista_argumentos[0]);
        return -1;
    }

    archivo_a_leer = fopen(lista_argumentos[1],"r"); /*Intentar abrir archivo*/
    if (archivo_a_leer == NULL )
    {
        perror(lista_argumentos[1]);
        return -2;
    }
    
    archivo_para_escribir = fopen(lista_argumentos[2],"w"); /*Intentar abrir archivo*/
    if (archivo_para_escribir == NULL )
    {
        perror(lista_argumentos[2]);
        return -3;
    }

    /* Inicia Procesar argumento factor*/
    
    factor = leer_factor(lista_argumentos[3]);

    /* Termina Procesar argumento factor*/

     while ( fscanf(archivo_a_leer,"%d",&dato_leido) == 1 ) /* Leer dato del archivo*/
    {

        dato_a_escribir = dato_leido * factor ;
        fprintf(archivo_para_escribir,"%d\n",dato_a_escribir);


    }

    fclose(archivo_a_leer); /* Cerrar archivo */
    fclose(archivo_para_escribir); /* Cerrar archivo */

    printf("\nTerminado!:\n");

    return EXIT_SUCCESS;
}


int leer_factor(const char *buffer)
{
    char *final;
    unsigned int numero_leido;

    errno = 0;

    const long sl = strtol(buffer,&final,10);

    if (final == buffer )
    {
        fprintf(stderr,"\n%s FACTOR no es un numero decimal\n",buffer);
        numero_leido = 0;

    }
    else if ('\0' != *final) 
    {
        fprintf(stderr, "%s: ERROR:caracteres extra: %s\n", buffer, final);
        numero_leido = 0;
    }
    else if ((LONG_MIN == sl || LONG_MAX == sl) && ERANGE == errno)
    {
        fprintf(stderr, "%s ERROR: fuera de rango del tipo de dato : long int\n", buffer);
        numero_leido = 0;
    }
    else if (sl > INT_MAX)
    {
        fprintf(stderr, "%ld ERROR: Valor mayor a : INT_MAX\n", sl);
        numero_leido = INT_MAX;
    }
    else if (sl < INT_MIN) 
    {
        fprintf(stderr, "%ld ERROR: Valor menor a : INT_MIN\n", sl);
        numero_leido = INT_MIN;
    }
    else
    {
        numero_leido  = (int) sl; 
    }
    
    return numero_leido;

}