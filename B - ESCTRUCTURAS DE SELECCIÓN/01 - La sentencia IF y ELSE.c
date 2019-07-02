//En este ejercicio vamos a hacer una prueba de divisibilidad mediante la expresi�n IF.

#include <stdio.h>			//Existen muchos tipos de librerías, las cuales nos otorgan la capacidad de realizar funciones, y se a�aden precedidas por #include. "stdio" significa "standard input output" y ".h" significa "header". Nos sirve para poder poner cosas en pantalla y guardar datos.

int main(){							//Esta es la funci�n principal (main) que vamos a crear. "Int" quiere decir que es un n�mero entero.

	int n1,n2;						//Como siempre, lo primero es indicar las variables, en este caso dos números enteros (int).

	printf("Dime dos números: ");		//Parte textual en la que pedimos al usuario que introduzca dos números.

	scanf("%i %i",&n1,&n2);					//Mediante scanf, habilitamos la posibilidad de que el usuario introduzca dichos números. Guardarmos los números enteros (%i %i) como n1 y n2" (&n1 &n2).

	if(n1 % n2 == 0){								//Usamos if para generar una situaci�n condicional. En este caso, si n1 es divisible (lo cual se escribe como %) entre 2, y el residuo es 0 (lo cual se escribe como == 0) entonces se cumplir� la funci�n/impresi�n a continuaci�n.

		printf("El número %i es divisible entre %i",n1,n2); 		//Parte textual que aparece SOLO si los números introducidos por el usuario dan como resto 0.

	}

	else {								//La expresi�n else quiere decir que si no se cumple lo dicho previamente, se cumplir� la funci�n o impresi�n que contiene a continuaci�n.

		printf("El número %i no es divisible entre %i",n1,n2);	//Parte textual en la que confirmamos al usuario que no es divisible.

	}

	return 0;							//Gracias a poner return 0; podemos saber que la funci�n ha terminado correctamente, y que nuestro programa no ha fallado en un punto a mitad de ejecuci�n. Es una buena costumbre utilizarlo.

}
