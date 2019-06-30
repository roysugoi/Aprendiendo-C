//Con este ejercicio crearemos una herramienta que determina si un número introducido por el usuario es par o impar.

#include <stdio.h>			//Existen muchos tipos de librerías, las cuales nos otorgan la capacidad de realizar funciones, y se añaden precedidas por #include. "stdio" significa "standard input output" y ".h" significa "header". Nos sirve para poder poner cosas en pantalla y guardar datos.

int main(){					//Esta es la función principal (main) que vamos a crear. "Int" quiere decir que es un número entero.
	
	int n1;					//Declaramos la variable n1, un número que será entero y que el usuario tecleará.
	
	printf("Introduce un número: ");	//Parte textual en la que solicitamos al usuario que introduzca un número.
	
	scanf("%i",&n1);		//Mediante scanf, permitimos que el usuario sea capaz de introducir dicho número entero (%i), y guardarlo como n1 (&n1).
	
	if (n1 % 2 == 0){		//Mediante if, le decimos al programa que si ese número (n1) es divisible entre 2 (% 2), y el resultado es 0 (== 0), entonces el número es par.
		
		printf("El número %i es par.",n1);		//Parte textual en la que confirmamos al usuario que el número es par.
		
	}
	
	else {					//Mediante else, le decimos al programa que todo lo que no sea dividible entre dos, sea impar.
		
		printf("El número %i es impar.",n1);	//Parte textual en la que confirmamos al usuario que el número es impar.
	}
	
	return 0;				//Gracias a poner return 0; podemos saber que la función ha terminado correctamente, y que nuestro programa no ha fallado en un punto a mitad de ejecución. Es una buena costumbre utilizarlo.

}
