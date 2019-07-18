//Programa que mediante el bucle do... while, muestre en pantalla los 10 primeros números.

#include <stdio.h>      //Existen muchos tipos de librerías, las cuales nos otorgan la capacidad de realizar funciones, y se añaden precedidas por #include. "stdio" significa "standard input output" y ".h" significa "header". Nos sirve para poder poner cosas en pantalla y guardar datos.

int main(){             //Esta es la función principal (main) que vamos a crear. "Int" quiere decir que es un número entero.

	int i;								//Declaramos las variables que utilizaremos, en este caso el número de iteraciones que vaya realizando el bucle (i).

	i=1;									//Valor inicial de i es 1 y el incremento de iteraciones será 1.

	do {									//Mediante DO, ejecutamos una primera parte del código de manera incondicional.

		printf("%i\n",i);		//Parte textual en la que imprimimos en pantalla el número resultante del bucle.

		i++;								//Valor incremental de i al finalizar el bucle, cada vez que se ejecute, i aumentará en 1 su valor. Es equivalente a i = i + 1;

	} while(i<=10);				//Mediante WHILE, le decimos al programa hasta cuando se tiene que ejecutar la función dentro de DO.

	return 0;    //Gracias a poner return 0; podemos saber que la función ha terminado correctamente, y que nuestro programa no ha fallado en un punto a mitad de ejecución. Es una buena costumbre utilizarlo.
}
