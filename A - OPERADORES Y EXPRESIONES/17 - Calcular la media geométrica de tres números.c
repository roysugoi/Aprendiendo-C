//Vamos a calcular la cantidad de segundos que hay en las horas, minutos, y segundos que un usuario elija.

#include <stdio.h>									//Existen muchos tipos de librerías, las cuales nos otorgan la capacidad de realizar funciones, y se añaden precedidas por #include. "stdio" significa "standard input output" y ".h" significa "header". Nos sirve para poder poner cosas en pantalla y guardar datos.
#include <math.h>

int main (){										//Esta es la función principal (main) que vamos a crear. "Int" quiere decir que es un número entero.
	
	int n1,n2,n3;									//Primero tenemos que nombrar todas las variables, en este caso solicitamos tres números enteros al usuario.
	
	float media, mult = 0;							//Después nombramos las variables flotantes, es decir, números presumiblemente reales (con decimales).
	
	printf("Dime tres números: ");					//Solicitamos al usuario que nos diga tres números. Este es solo el texto, y con scanf haremos esto posible a continuación. Es importante saber que los números se pueden meter, o bien seguidos separados por un espacio, o primero uno de ellos, presionar enter, y a continuación el siguiente.
	
	scanf("%i %i %i",&n1,&n2,&n3);					//Usamos scanf para recoger los tres números que el usuario teclee (al ser tres números enteros, usamos %i tres veces, e indicamos a continuación que se guarden los valores como n1, n2 y n3 mediante el uso del símbolo &.								
	
	mult = n1 * n2 * n3;							//Indicamos que la función llamada mult supone n1 * n2 * n3.
	
	media = pow(mult,0.3333333);					//Dado que el equivalente de una raíz cúbica, es elevar el número a 1/n, elevamos el resultado de "mult" a 1/3, o 0.33.
	
	printf("La media geométrica es %.1f", media);	//Imprimimos el resultado. Escribimos la frase que queramos, y a continuación indicamos que lo que queremos que se muestre es la media geométrica (nuestra función "media", tras la coma).
	
	return 0;										//Gracias a poner return 0; podemos saber que la función ha terminado correctamente, y que nuestro programa no ha fallado en un punto a mitad de ejecución. Es una buena costumbre utilizarlo.
	
	}
