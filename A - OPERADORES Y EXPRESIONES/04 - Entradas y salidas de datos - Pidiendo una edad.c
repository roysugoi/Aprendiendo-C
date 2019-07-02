//Vamos a solicitar al usuario que introduzca su edad, e imprimirla posteriormente.

#include <stdio.h> 		//Existen muchos tipos de librerías, las cuales nos otorgan la capacidad de realizar funciones, y se a�aden precedidas por #include. "stdio" significa "standard input output" y ".h" significa "header". Nos sirve para poder poner cosas en pantalla y guardar datos.

int main() 				//Esta es la funci�n principal (main) que vamos a crear. "Int" quiere decir que es un número entero.
{
    int a;				//Primero fijamos las variables con las que vamos a trabajar. Vamos a usar un número entero en este ejemplo, pero podr�amos usar un número con decimales o un caracter (float, char...).

    printf("Edad: ");				//Preguntamos el usuario su edad y posteriormente mediante scanf permitiremos la entrada del dato por el usuario.

    scanf("%i",&a);					//Con %i decimos que el valor que tiene que poner es un número entero. &a significa que vamos a guardar el dato que el usuario meta en la variable a.

    printf("Tu edad es %i \n",a);	//L�gicamente tenemos que imprimir el resutlado, por lo que volvemos a usar printf e imprimimos el resultado con el input del usuario.

    return 0;			//Gracias a poner return 0; podemos saber que la funci�n ha terminado correctamente, y que nuestro programa no ha fallado en un punto a mitad de ejecuci�n. Es una buena costumbre utilizarlo.
}
