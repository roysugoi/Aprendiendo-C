//Vamos a calcular la cantidad de segundos que hay en las horas, minutos, y segundos que un usuario elija.

#include <stdio.h>									//Existen muchos tipos de librer�as, las cuales nos otorgan la capacidad de realizar funciones, y se a�aden precedidas por #include. "stdio" significa "standard input output" y ".h" significa "header". Nos sirve para poder poner cosas en pantalla y guardar datos.
#include <math.h>

int main (){										//Esta es la funci�n principal (main) que vamos a crear. "Int" quiere decir que es un n�mero entero.
	
	int n1,n2,n3;									//Primero tenemos que nombrar todas las variables, en este caso solicitamos tres n�meros enteros al usuario.
	
	float media, mult = 0;							//Despu�s nombramos las variables flotantes, es decir, n�meros presumiblemente reales (con decimales).
	
	printf("Dime tres n�meros: ");					//Solicitamos al usuario que nos diga tres n�meros. Este es solo el texto, y con scanf haremos esto posible a continuaci�n. Es importante saber que los n�meros se pueden meter, o bien seguidos separados por un espacio, o primero uno de ellos, presionar enter, y a continuaci�n el siguiente.
	
	scanf("%i %i %i",&n1,&n2,&n3);					//Usamos scanf para recoger los tres n�meros que el usuario teclee (al ser tres n�meros enteros, usamos %i tres veces, e indicamos a continuaci�n que se guarden los valores como n1, n2 y n3 mediante el uso del s�mbolo &.								
	
	mult = n1 * n2 * n3;							//Indicamos que la funci�n llamada mult supone n1 * n2 * n3.
	
	media = pow(mult,0.3333333);					//Dado que el equivalente de una ra�z c�bica, es elevar el n�mero a 1/n, elevamos el resultado de "mult" a 1/3, o 0.33.
	
	printf("La media geom�trica es %.1f", media);	//Imprimimos el resultado. Escribimos la frase que queramos, y a continuaci�n indicamos que lo que queremos que se muestre es la media geom�trica (nuestra funci�n "media", tras la coma).
	
	return 0;										//Gracias a poner return 0; podemos saber que la funci�n ha terminado correctamente, y que nuestro programa no ha fallado en un punto a mitad de ejecuci�n. Es una buena costumbre utilizarlo.
	
	}
