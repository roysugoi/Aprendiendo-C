//Vamos a hacer suma, resta, multiplicaci�n y divisi�n, solicitando dos números al usuario e imprimiendo los resultados.

#include <stdio.h> 		//Existen muchos tipos de librerías, las cuales nos otorgan la capacidad de realizar funciones, y se a�aden precedidas por #include. "stdio" significa "standard input output" y ".h" significa "header". Nos sirve para poder poner cosas en pantalla y guardar datos.

int main() 				//Esta es la funci�n principal (main) que vamos a crear. "Int" quiere decir que es un n�mero entero.		
{

	int n1,n2, suma = 0, resta = 0, mult = 0, div = 0;		//Primero tenemos que nombrar todas las variables y operaciones que vamos a usar en nuestra funci�n. Vamos a usar dos números (n1 y n2), y las cuatro operaciones m�s simples (+,-,*,/).
	
	printf("Dime dos números: ");							//Solicitamos al usuario que nos diga dos números. Este es solo el texto, y con scanf haremos esto posible a continuaci�n. Es importante saber que los números se pueden meter, o bien seguidos separados por un espacio, o primero uno de ellos, presionar enter, y a continuaci�n el siguiente.
	
	scanf("%i %i",&n1,&n2);									//Usamos scanf para recoger los dos números que el usuario teclee (al ser dos números enteros, usamos %i dos veces, e indicamos a continuaci�n que se guarden los valores como n1 y n2 mediante el uso del s�mbolo &.								
	
	suma = n1 + n2;											//Indicamos que la funci�n llamada suma supone n1 + n2.
	
	resta = n1 - n2;										//Indicamos que la funci�n llamada resta supone n1 - n2.
	
	mult = n1 * n2;											//Indicamos que la funci�n llamada mult supone n1 * n2.
	
	div = n1 / n2;											//Indicamos que la funci�n llamada div supone n1 / n2.

	printf("\nLa suma es %i", suma);						//Imprimimos los resultados. \n sirve para crear un salto de l�nea y que no se pegue el texto. Escribimos la frase que queramos, y a continuaci�n indicamos que lo que queremos que se muestre es la suma (escribiendo suma tras la coma).
	
	printf("\nLa resta es %i", resta);						//Imprimimos los resultados. \n sirve para crear un salto de l�nea y que no se pegue el texto. Escribimos la frase que queramos, y a continuaci�n indicamos que lo que queremos que se muestre es la resta (escribiendo resta tras la coma).
	
	printf("\nLa multiplicaci�n es %i", mult);				//Imprimimos los resultados. \n sirve para crear un salto de l�nea y que no se pegue el texto. Escribimos la frase que queramos, y a continuaci�n indicamos que lo que queremos que se muestre es la multiplicaci�n (escribiendo mult tras la coma).
	
	printf("\nLa divisi�n es %i", div);						//Imprimimos los resultados. \n sirve para crear un salto de l�nea y que no se pegue el texto. Escribimos la frase que queramos, y a continuaci�n indicamos que lo que queremos que se muestre es la divisi�n (escribiendo div tras la coma).

    return 0;			//Gracias a poner return 0; podemos saber que la funci�n ha terminado correctamente, y que nuestro programa no ha fallado en un punto a mitad de ejecuci�n. Es una buena costumbre utilizarlo.
}
