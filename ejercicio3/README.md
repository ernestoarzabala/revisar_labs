# Evidencia Desarrollo de programas en lenguaje C que incluya el uso de operadores, ciclos y subrutinas. [30%]

## Objetivo: 

    Comprender el procedimiento de programación, sentencias de control y flujo de datos.

## Instrucciones

### Ejercicio 1 Compilación y errores

Compile el código fuente del archivo de texto ejercicio1.c para crear un archivo ejecutable de nombre ex1:

```
clang -Wall ejercicio1.c -o ex1
```

Al momento de compilar se generará un error.
Reemplace el código de la línea 24 por el siguiente:

```c
printf("\t\tEl programa ha \"finalizado\"\n\n");
```

Vuelva a intentar compilar el código fuente del archivo de texto ejercicio1.c

```
clang -Wall ejercicio1.c -o ex1
```

Se volverá a generar un error. Vuelva a intentar compilar el código ahora con:

```
clang -Wall ejercicio1.c -o ex1 -lcs50
```
### Ejercicio 2 Estructura de control de repetición (iteración) usando la proposición FOR

La proposición FOR es la más útil cuando se necesita repetir (iterar) un bloque de código un determinado número de veces.

El siguiente código muestra 15 veces un mensaje en la terminal o consola (pantalla)

```c
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    for(int numero_de_veces = 0; numero_de_veces < 15; numero_de_veces = numero_de_veces + 1)
    {
        printf("Este es el mensaje que se va a repetir 15 veces.\t(%d de 15)\n",numero_de_veces);
    }

    return EXIT_SUCCESS;
}
```

Cree un archivo de texto con el código anterior, compile dicho archivo de texto de código fuente y posteriormente ejecute el archivo ejecutable resultante del proceso de compilación.

Modifique el código del archivo de texto creado en el paso anterior para que concuerde con el siguiente:

```c
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    for(int numero_de_veces = 0; numero_de_veces < 15; ++numero_de_veces )
    {
        printf("Este es el mensaje que se va a repetir 15 veces.\t(%d de 15)\n",numero_de_veces);
    }

    return EXIT_SUCCESS;
}
```

Compile y ejecute de nueva cuenta.

Realice una nueva modificación para que el código ahora concuerde con el siguiente:

```c
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    for(int numero_de_veces = 15; numero_de_veces > 0 ; numero_de_veces = numero_de_veces - 1 )
    {
        printf("Este es el mensaje que se va a repetir 15 veces.\t(%d de 15)\n",numero_de_veces);
    }

    return EXIT_SUCCESS;
}
```
Compile y ejecute de nueva cuenta.

Realice una modificación más para que el código ahora concuerde con el siguiente:

```c
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    for(int numero_de_veces = 15; numero_de_veces > 0 ; --numero_de_veces)
    {
        printf("Este es el mensaje que se va a repetir 15 veces.\t(%d de 15)\n",numero_de_veces);
    }

    return EXIT_SUCCESS;
}

```
Compile y ejecute de nueva cuenta.

Realice un penúltima modificación al código para que ahora concuerde con el siguiente:

```c
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    for(int numero_de_veces = 0; numero_de_veces <= 45 ; numero_de_veces = numero_de_veces * 2)
    {
        printf("Este es el mensaje que se va a repetir 15 veces.\t(%d de 15)\n",numero_de_veces);
    }

    return EXIT_SUCCESS;
}
```
Compile y ejecute de nueva cuenta.

Realice un última modificación al código para que ahora concuerde con el siguiente:

```c
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    for(int numero_de_veces = 0; numero_de_veces <= 45 ; numero_de_veces *= 2)
    {
        printf("Este es el mensaje que se va a repetir 15 veces.\t(%d de 15)\n",numero_de_veces);
    }

    return EXIT_SUCCESS;
}
```

Cree un archivo de texto con el siguiente código , compile dicho archivo de texto de código fuente y posteriormente ejecute el archivo ejecutable resultante del proceso de compilación.

```c
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    for(i=5, j=200 ;  (i<30) && (j>3) ; i += 2 , j -= 15  )
    {
        printf("i=%d\tj=%d\n",i,j);
    }

    return EXIT_SUCCESS;
}
```

### Ejercicio 3 Estructura de control de repetición (iteración) usando la proposición Do...WHILE

La proposición DO...WHILE es la más útil cuando se necesita repetir (iterar) un bloque de código y no se sabe de antemano cuantas veces se necesita repetir (iterar), además la proposición DO...WHILE asegura el bloque de código que se desea o quiere repetir se ejecute al menos una vez.

Cree un archivo de texto con el siguiente código , compile dicho archivo de texto de código fuente y posteriormente ejecute el archivo ejecutable resultante del proceso de compilación.

```c
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int j = 250;
    int k = 33;

    do
    {
        printf("j=%d\tk=%d\tj/k=%d\n",j,k,j/k);
        j -= 5;
        k -= 2;
    }while ( (j/k) > 2 );

    return EXIT_SUCCESS;
}
```
Modifique el código del archivo de texto creado en el paso anterior para que concuerde con el siguiente:

```c
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int j = 250;
    int k = 33;

    do
    {
        printf("j=%d\tk=%d\tj/k=%d\n",j,k,j/k);
        j -= 5;
        k -= 2;
    }while ( j > 250 );

    return EXIT_SUCCESS;
}

```
Compile y ejecute de nueva cuenta.

Modifique el código del archivo de texto creado en el paso anterior para que concuerde con el siguiente:

```c
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int j = 250;
    int k = 33;

    do
    {
        printf("j=%d\tk=%d\tj/k=%d\n",j,k,j/k);
        j -= 5;
        k -= 2;
    }while ( (j > 25) || ( k > 2)  );

    return EXIT_SUCCESS;
}

```

Compile y ejecute de nueva cuenta.

### Ejercicio 4 Estructura de control de repetición (iteración) usando la proposición WHILE

La proposición WHILE es la más útil cuando se necesita repetir (iterar) un bloque de código y no se sabe de antemano cuantas veces se necesita repetir (iterar), a diferencia de la proposición DO...WHILE  la proposición WHILE no asegura el bloque de código que se desea o quiere repetir se ejecute al menos una vez.

Cree un archivo de texto con el siguiente código , compile dicho archivo de texto de código fuente y posteriormente ejecute el archivo ejecutable resultante del proceso de compilación.

```c
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int j = 250;
    int k = 33;

    while ( (j/k) > 2 )
    {
        printf("j=%d\tk=%d\tj/k=%d\n",j,k,j/k);
        j -= 5;
        k -= 2;
    }

    return EXIT_SUCCESS;
}
```
Modifique el código del archivo de texto creado en el paso anterior para que concuerde con el siguiente:

```c
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int j = 250;
    int k = 33;

    while ( j > 250 )
    {
        printf("j=%d\tk=%d\tj/k=%d\n",j,k,j/k);
        j -= 5;
        k -= 2;
    }

    return EXIT_SUCCESS;
}

```
Compile y ejecute de nueva cuenta.

Modifique el código del archivo de texto creado en el paso anterior para que concuerde con el siguiente:

```c
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int j = 250;
    int k = 33;

    while ( (j > 25) || ( k > 2)  )
    {
        printf("j=%d\tk=%d\tj/k=%d\n",j,k,j/k);
        j -= 5;
        k -= 2;
    }

    return EXIT_SUCCESS;
}

```

Compile y ejecute de nueva cuenta.


### Ejercicio 5 Estructura de control de decisión, proposición IF

La proposición IF es útil para decidir en la siguientes situaciones:

A) Para decidir si un determinado bloque de código debe o no de ejecutarse.
B) Para decidir cuál de dos bloques de código es el único que debe de ejecutarse.
C) Para decidir cuál de varios bloques de código es el único que debe de ejecutarse.

Para lograr lo anterior la proposición IF hace uso de tres claúsulas :

    * if
    * else
    * else if

- La claúsula "if" puede ser usada sola.
- La cláusula "else" tiene que ir acompañada de la claúsula if.
- La cláusula "else if" tiene que ir siempre acompañada de las claúsulas if y else.

A)  Para decidir si un determinado bloque de código debe o no de ejecutarse.

Cree un archivo de texto con el siguiente código , compile dicho archivo de texto de código fuente y posteriormente ejecute el archivo ejecutable resultante del proceso de compilación.

```c
#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    
    int numero;
    
    printf("\n\n");
    
    numero = get_int("Ingresa un numero entero por favor:");

    if (numero < 0)
    {
        printf("\nEl número ingresado es negativo!\n");
    }

    printf("\t\tGracias!\n");

    return EXIT_SUCCESS;
}
```

B) Para decidir cuál de dos bloques de código es el único que debe de ejecutarse.

Cree un archivo de texto con el siguiente código , compile dicho archivo de texto de código fuente y posteriormente ejecute el archivo ejecutable resultante del proceso de compilación.

```c
#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    
    int numero;
    
    printf("\n\n");
    
    numero = get_int("Ingresa un numero entero por favor:");

    if (numero > 0)
    {
        printf("\nEl número ingresado es positivo!\n");
    }
    else
    {
        printf("\nEl número ingresado es negativo!\n");
    }

    printf("\t\tGracias!\n");

    return EXIT_SUCCESS;
}
```

C) Para decidir cuál de varios bloques de código es el único que debe de ejecutarse.

Cree un archivo de texto con el siguiente código , compile dicho archivo de texto de código fuente y posteriormente ejecute el archivo ejecutable resultante del proceso de compilación.

```c
#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    
    int numero;
    
    printf("\n\n");
    
    numero = get_int("Ingresa un numero entero por favor:");

    if (numero > 0)
    {
        printf("\nEl número ingresado es positivo!\n");
    }
    else if (numero == 0)
    {
        printf("\nEl número ingresado es cero!\n");
    }
    else
    {
        printf("\nEl número ingresado es negativo!\n");
    }

    printf("\t\tGracias!\n");

    return EXIT_SUCCESS;
}

```
Cree un archivo de texto con el siguiente código , compile dicho archivo de texto de código fuente y posteriormente ejecute el archivo ejecutable resultante del proceso de compilación.


```c
#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    
    int primer_numero;
    int segundo_numero;
    
    printf("\n\n");
    
    primer_numero = get_int("Ingresa un numero entero por favor:");
    segundo_numero = get_int("Ingresa un segundo entero por favor:");

    if ( (primer_numero > 0) && (segundo_numero > 0) )
    {
        printf("\nAmbos numeros son positivos\n");
    }
    else if ( (primer_numero > 0) && (segundo_numero < 0) )
    {
        printf("\nEl primer número ingresado es positivo.\tEl segundo numero ingresado es negativo\n");
    }
    else if ( (primer_numero < 0) && (segundo_numero > 0) )
    {
        printf("\nEl primer número ingresado es negativo.\tEl segundo numero ingresado es positivo\n");
    }
    else if ( (primer_numero == 0) && (segundo_numero > 0) )
    {
        printf("\nEl primer número ingresado es cero.\tEl segundo numero ingresado es positivo\n");
    }
    else if ( (primer_numero > 0) && (segundo_numero == 0) )
    {
        printf("\nEl primer número ingresado es positivo.\tEl segundo numero ingresado es cero\n");
    }
    else if ( (primer_numero == 0) && (segundo_numero < 0) )
    {
        printf("\nEl primer número ingresado es cero.\tEl segundo numero ingresado es negativo\n");
    }
    else if ( (primer_numero < 0) && (segundo_numero == 0) )
    {
        printf("\nEl primer número ingresado es negativo.\tEl segundo numero ingresado es cero\n");
    }
     else if ( (primer_numero == 0) && (segundo_numero == 0) )
    {
        printf("\nAmbos numeros ingresados son cero\n");
    }
    else
    {
        printf("\nAmbos numeros ingresados son negativos!\n");
    }

    printf("\t\tGracias!\n");

    return EXIT_SUCCESS;
}
```

### Ejercicio 6 Estructura de control de selección, proposición SWITCH

La proposición SWITCH es útil para decidir en la siguientes situaciones:

A) Para seleccionar de varios fragmentos de código cual es único el que debe de ejecutarse.
B) Para seleccionar de varios fragmentos de códigos algunos que deben de ejecutarse.


Para lograr lo anterior la proposición SWITCH hace uso de cuatro palabras reservadas :

    * switch
    * case
    * default
    * break


A) Para seleccionar de varios fragmentos de código cual es único el que debe de ejecutarse.

Cree un archivo de texto con el siguiente código , compile dicho archivo de texto de código fuente y posteriormente ejecute el archivo ejecutable resultante del proceso de compilación.

```c
#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int numero;
    
    printf("\n\n");
    
    numero = get_int("Ingresa un numero entero  en el rango [-5,5] por favor:");

    switch(numero)
    {
        case -5:
                printf("Ingresaste el numero -5\n");
                break;
        case -4:
                printf("Ingresaste el numero -4\n");
                break;
        case -3:
                printf("Ingresaste el numero -3\n");
                break;
        case -2:
                 printf("Ingresaste el numero -2\n");
                break;
        case -1:
                printf("Ingresaste el numero -1\n");
                break;
        case 5:
                printf("Ingresaste el numero 5\n");
                break;
        case 4:
                printf("Ingresaste el numero 4\n");
                break;
        case 3:
                printf("Ingresaste el numero 3\n");
                break;
        case 2:
                printf("Ingresaste el numero 2\n");
                break;
        case 1:
                printf("Ingresaste el numero 1\n");
                break;
        case 0:
                printf("Ingresaste el numero 0\n");
                break;
        default:
                 printf("Ingresaste un numero fuera del rango!\n");

    }
    return EXIT_SUCCESS;
}


```

B) Para seleccionar de varios fragmentos de códigos algunos que deben de ejecutarse.

Cree un archivo de texto con el siguiente código , compile dicho archivo de texto de código fuente y posteriormente ejecute el archivo ejecutable resultante del proceso de compilación.

```c
#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int numero;
    
    printf("\n\n");
    
    numero = get_int("Ingresa un numero entero  en el rango [-5,5] por favor:");

    switch(numero)
    {
        case -5:
        case -4:
        case -3:
        case -2:
        case -1:
                printf("Ingresaste un numero negativo\n");
                break;
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
                printf("Ingresaste un numero positivo\n");
                break;
        case 0:
                printf("Ingresaste el numero 0\n");
                break;
        default:
                 printf("Ingresaste un numero fuera del rango!\n");

    }
    return EXIT_SUCCESS;
}
```

Cree un archivo de texto con el siguiente código , compile dicho archivo de texto de código fuente y posteriormente ejecute el archivo ejecutable resultante del proceso de compilación.

```c
#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int letra;
    
    printf("\n\n");
    
    letra = get_char("Ingresa una letra, por favor:");

    switch(letra)
    {
        case 'a' :
        case 0x41:        
        case 'e':
        case 'E':
        case 105:
        case 'I':
        case 'o':
        case 0x4F:
        case 117:
        case 'U':
                printf("La letra es una vocal\n");
                break;
        
        case 0x39:
        case 0x38:
        case 0x37:
        case '0':
        case '1':
        case '2':
        case '3':
        case 54:
        case 53:
        case 52:
                printf("La letra es un digito cuyo valor numerico es:\%d \n",letra - '0');
                break;
        case '!':
        case '"':
        case '#':
        case 0x24:
        case 0x25:
        case 0x26:
        case 0x27:
        case 0x28:
        case 0x29:
        case 0x2A:
        case 0x2B:
        case 0x2C:
        case 0x2D:
        case 0x2E:
        case 0x2F:
        case 64:
        case 63:
        case 62:
        case 61:
        case 60:
        case 59:
        case 58:
        case '[':
        case ']':
        case '}':
        case '{':
                printf("Ingresaste un símbolo\n");
                break;
        default:
                 printf("Ingresaste alguna otra letra del alfabeto!\n");

    }

    return EXIT_SUCCESS;
}
```

## Enviar evidencia para entrega

Las instrucciones y espacio para la entrega de esta evidencia las puedes encontrar en el curso de la [plataforma Moodle de la universidad] (http://mecatronica.utch.edu.mx)