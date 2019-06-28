//Con este ejemplo, vamos a imprimir una l�nea que dice "Hola 42".

#include <stdio.h> 		//Las librer�as son muy importantes, y empiezan por #include. "stdio" significa "standard input output" y ".h" significa "header", o archivo de cabecera. Sirve para poder poner cosas en pantalla y guardar datos.

int main() 				//Esta es la funci�n principal (main) que vamos a crear. "Int" quiere decir que es un n�mero entero.		
{
    printf("Hola 42");	//"printf" sirve para imprimir un texto, una suma, lo que sea. En este caso, solo texto.

    return 0;			//Gracias a poner return 0; podemos saber que la funci�n ha terminado correctamente, y que nuestro programa no ha fallado en un punto a mitad de ejecuci�n. Es una buena costumbre utilizarlo.
}

/* Por cierto, as� se escribe
un comentario de varias l�neas */						

