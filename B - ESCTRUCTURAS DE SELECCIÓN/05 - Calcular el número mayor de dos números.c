//Con este ejercicio crearemos un programa que no dirá qué número es mayor que otro, o sean iguales, cuando el usuario introduzca dos números.

#include <stdio.h>			//Existen muchos tipos de librerías, las cuales nos otorgan la capacidad de realizar funciones, y se añaden precedidas por #include. "stdio" significa "standard input output" y ".h" significa "header". Nos sirve para poder poner cosas en pantalla y guardar datos.

int main(){					//Esta es la función principal (main) que vamos a crear. "Int" quiere decir que es un número entero.
	
	int n1,n2;				//Declaramos las variables n1 y n2, que el usuario tecleará.
	
	printf("Pon dos números: ");	//Parte textual en la que pedimos dos números.
	
	scanf("%i %i",&n1,&n2);			//Mediante scanf, pedimos dos números enteros (%i %i), y los guardamos como n1 y n2 (&n1, &n2).
	
	if (n1 > n2){					//Usamos el condicional mediante la expresión if, estableciendo la regla de que si n1 es mayor que n2, entonces un texto posterior dirá que n1 es mayor.
	
		printf("El número %i es mayor que %i",n1,n2); //Parte textual en la que decimos que el n1 (primer %i) es mayor que n2 (segundo %i).
	}
	
	else {							//Mediante else, expresamos que si no se cumple la primera condición, pueden pasar, en este caso, dos cosas. Es decir, tendremos que crear un if dentro de un else, lo que se llama condicional anidado.
	
		if (n2 > n1){				//Lo primero que puede ocurrir es que n2 sea mayor que n1, y lo expresamos de esta manera.
		
			printf("El número %i es mayor que %i",n2,n1);	//Parte textual en la que indicamos al usuario que n2 es mayor que n1.
		}
		
		if (n1 == n2){				//Lo segundo que puede ocurrir es que sean iguales, y lo reflejamos como n1 == n2.
			
			printf("Ambos son iguales.",n2,n1);				//Parte textual en la que indicamos al usuario que los dos números son iguales.
		}
		
	}
	
	return 0;				//Gracias a poner return 0; podemos saber que la función ha terminado correctamente, y que nuestro programa no ha fallado en un punto a mitad de ejecución. Es una buena costumbre utilizarlo.

}
