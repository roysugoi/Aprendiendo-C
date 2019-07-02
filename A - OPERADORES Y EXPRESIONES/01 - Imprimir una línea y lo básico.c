//Con este ejemplo, vamos a imprimir una línea que dice "Hola 42".

#include <stdio.h> 		//Existen muchos tipos de librerías, las cuales nos otorgan la capacidad de realizar funciones, y se añaden precedidas por #include. "stdio" significa "standard input output" y ".h" significa "header". Nos sirve para poder poner cosas en pantalla y guardar datos.

int main() 				//Esta es la función principal (main) que vamos a crear. "Int" quiere decir que es un número entero.
{
    printf("Hola 42");	//"printf" sirve para imprimir un texto, una suma, lo que sea. En este caso, solo texto.

    return 0;			//Gracias a poner return 0; podemos saber que la función ha terminado correctamente, y que nuestro programa no ha fallado en un punto a mitad de ejecución. Es una buena costumbre utilizarlo.
}

/* Por cierto, así se escribe
un comentario de varias líneas */
