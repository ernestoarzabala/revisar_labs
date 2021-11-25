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

La proposición es la más útil cuando se necesita repetir (iterar) un bloque de código un determinado número de veces.

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

### Ejercicio 3 Estructura de control de repetición (iteración) usando la proposición WHILE

Cree un archivo de texto con el siguiente código , compile dicho archivo de texto de código fuente y posteriormente ejecute el archivo ejecutable resultante del proceso de compilación.

```c

```

### Ejercicio 4 Estructura de control de repetición (iteración) usando la proposición DO...WHILE

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




## Enviar evidencia para entrega

Las instrucciones y espacio para la entrega de esta evidencia las puedes encontrar en el curso de la [plataforma Moodle de la universidad] (http://mecatronica.utch.edu.mx)