//Con este ejercicio crearemos una herramienta que determina si un n�mero introducido por el usuario es par o impar.

#include <stdio.h>			//Existen muchos tipos de librer�as, las cuales nos otorgan la capacidad de realizar funciones, y se a�aden precedidas por #include. "stdio" significa "standard input output" y ".h" significa "header". Nos sirve para poder poner cosas en pantalla y guardar datos.

int main(){					//Esta es la funci�n principal (main) que vamos a crear. "Int" quiere decir que es un n�mero entero.
	
	int n1;					//Declaramos la variable n1, un n�mero que ser� entero y que el usuario teclear�.
	
	printf("Introduce un n�mero: ");	//Parte textual en la que solicitamos al usuario que introduzca un n�mero.
	
	scanf("%i",&n1);		//Mediante scanf, permitimos que el usuario sea capaz de introducir dicho n�mero entero (%i), y guardarlo como n1 (&n1).
	
	if (n1 % 2 == 0){		//Mediante if, le decimos al programa que si ese n�mero (n1) es divisible entre 2 (% 2), y el resultado es 0 (== 0), entonces el n�mero es par.
		
		printf("El n�mero %i es par.",n1);		//Parte textual en la que confirmamos al usuario que el n�mero es par.
		
	}
	
	else {					//Mediante else, le decimos al programa que todo lo que no sea dividible entre dos, sea impar.
		
		printf("El n�mero %i es impar.",n1);	//Parte textual en la que confirmamos al usuario que el n�mero es impar.
	}
	
	return 0;				//Gracias a poner return 0; podemos saber que la funci�n ha terminado correctamente, y que nuestro programa no ha fallado en un punto a mitad de ejecuci�n. Es una buena costumbre utilizarlo.

}
