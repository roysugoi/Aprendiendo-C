//Vamos a solicitar al usuario que introduzca su nombre, e imprimirlo posteriormente.

#include <stdio.h> 		//Existen muchos tipos de librerías, las cuales nos otorgan la capacidad de realizar funciones, y se añaden precedidas por #include. "stdio" significa "standard input output" y ".h" significa "header". Nos sirve para poder poner cosas en pantalla y guardar datos.

int main() 				//Esta es la función principal (main) que vamos a crear. "Int" quiere decir que es un número entero.
{
    char b[50];						//Fifamos la variable char, dado que el usuario tecleará letras, y con [50] estamos diciendo que utilizaremos un string de 50 caracteres.

    printf("Nombre: ");				//Preguntamos el usuario su nombre.

    gets(b);						//Aunque podríamos utilizar scanf, scanf tiene una limitación, y es que no es capaz de leer pasado un espacio. Si queremos que se puedan meter nombres compuestos o apellidos, usamos gets(b).od

    printf("Tu nombre es %s",b);	//Lógicamente tenemos que imprimir el resultado, por lo que volvemos a usar printf e imprimimos el resultado con el input del usuario.

    return 0;			//Gracias a poner return 0; podemos saber que la función ha terminado correctamente, y que nuestro programa no ha fallado en un punto a mitad de ejecución. Es una buena costumbre utilizarlo.
}
