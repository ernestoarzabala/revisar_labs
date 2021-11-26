# Evidencia UII.2 Compilación y ejecución de programas sencillos desarrollados en lenguaje C [10%].

## Objetivo: 

    Comprender el procedimiento para abrir, guardar y crear un código ejecutable.

## Instrucciones

Al iniciar su ambiente (CS50 Labs/ Sandbox) aparece sin un archivo en el editor de texto y sin ningún archivo en la carpeta, tal como se muestra en la siguiente imagen:

![captura de pantalla de CS50 Labs / CS50 Sanbox](EVII_img1.png)

Hay que crear un nuevo archivo de texto que contendrá el código fuente del primer ejercicio. Para crear un nuevo archivo hay que presionar el símbolo + tal como se muestra en la siguiente imagen:

![captura de pantalla de CS50 Labs / CS50 Sanbox](EVII_img2.png)

Nos pedirá asignarle un nombre y una extensión. Recuerde que los archivos de texto que contienen el código fuente de los programas desarrollados en lenguaje C tienen la extensión .c .

![captura de pantalla de CS50 Labs / CS50 Sanbox](EVII_img3.png)

Asignele el nombre ejercicioA y la extensión .c tal como se muestra en la siguiente imagen:

![captura de pantalla de CS50 Labs / CS50 Sanbox](EVII_img4.png)

Presione el botón de "Create File" para crear su archivo de texto que contendrá el código fuente del programa.

![captura de pantalla de CS50 Labs / CS50 Sanbox](EVII_img5.png)

Una vez que ha creado el archivo el ambiente (CS50 Labs / CS50 Sanbox) se mostrará de la siguiente manera:

![captura de pantalla de CS50 Labs / CS50 Sanbox](EVII_img6.png)

En el editor de texto copie el siguiente texto de código fuente:

```c
#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int numero = 1;
    
    printf("Evidencia\tII.2\tCompilación y ejecución de programas sencillos desarrollados en lenguaje C\t[10 puntos].\n\n");
    printf("Archivo de código fuente:\t\"#%d\"\n",numero);
    

    return EXIT_SUCCESS;
}
```

Debe de quedar de la siguiente manera:

![captura de pantalla de CS50 Labs / CS50 Sanbox](EVII_img7.png)

Puede reacomodar el ambiente de la siguiente manera:

![captura de pantalla de CS50 Labs / CS50 Sanbox](EVII_img8.png)

![captura de pantalla de CS50 Labs / CS50 Sanbox](EVII_img9.png)

![captura de pantalla de CS50 Labs / CS50 Sanbox](EVII_img10.png)

Para compilar el archivo de código fuente necesita escribir el siguiente comando en la ventana de "Terminal"

```
clang -Wall ejercicioA.c -o ex1
```
![captura de pantalla de CS50 Labs / CS50 Sanbox](EVII_img11.png)

Recuerde que el proceso de compilación lo que hace es crear un archivo ejecutable a partir del archivo de texto que contiene el código fuente.
Al terminar el proceso de compilación , debido a que no sucedio ningún error, la ventana de la "Terminal" se mostrará de la siguiente manera:

![captura de pantalla de CS50 Labs / CS50 Sanbox](EVII_img12.png)

![captura de pantalla de CS50 Labs / CS50 Sanbox](EVII_img13.png)

Para verificar que ahora tenemos dos archivos : el de texto del código fuente (ejercicioA.c) y el nuevo archivo ejecutable (ex1) se puede utilizar el comando:

```
ls
```
 
"ls" puede entenderlo como si significara "lista todos los archivos de esta carpeta".

![captura de pantalla de CS50 Labs / CS50 Sanbox](EVII_img14.png)

Tambíen podemos revisar que existen estos archivos en el "FileTree" (directorio de la carpeta)

![captura de pantalla de CS50 Labs / CS50 Sanbox](EVII_img15.png)

para ejecutar el archivo ex1 que es un archivo ejecutable lo hacemos de la siguiente manera:

```
./ex1
```

![captura de pantalla de CS50 Labs / CS50 Sanbox](EVII_img16.png)

![captura de pantalla de CS50 Labs / CS50 Sanbox](EVII_img17.png)

El resultado de la ejecución será el siguiente:

![captura de pantalla de CS50 Labs / CS50 Sanbox](EVII_img18.png)

![captura de pantalla de CS50 Labs / CS50 Sanbox](EVII_img19.png)

```c

```

## Enviar evidencia para entrega

Las instrucciones y espacio para la entrega de esta evidencia las puedes encontrar en el curso de la [plataforma Moodle de la universidad] (http://mecatronica.utch.edu.mx)