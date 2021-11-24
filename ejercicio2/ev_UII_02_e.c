#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char letra;
    int numero_entero;
    double numero_decimal;

    string cadena_de_caracteres ;
    
    letra = get_char("Ingresa la inicial de tu primer nombre: ");
    numero_decimal = get_double("Ingresa un numero con punto decimal: ");
    numero_entero = get_int("Ingresa un numero entero: ");
    cadena_de_caracteres = get_string("Ingresa una cadena de caracteres (texto): ");


    printf("La inicial que ingresaste es:\t%c\n",letra);
    printf("El numero con punto decimal que ingresaste es:\t%f\n",numero_decimal);
    printf("El numero entero que ingresaste es:\t%d\n",numero_entero);
    printf("La cadena de caracteres (texto) que ingresaste es:\t%s",cadena_de_caracteres);

    printf("\t\tEl programa ha \"finalizado\"\n\n")

    return EXIT_SUCCESS;


}