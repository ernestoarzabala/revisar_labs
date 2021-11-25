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

## Enviar evidencia para entrega

Las instrucciones y espacio para la entrega de esta evidencia las puedes encontrar en el curso de la [plataforma Moodle de la universidad] (http://mecatronica.utch.edu.mx)