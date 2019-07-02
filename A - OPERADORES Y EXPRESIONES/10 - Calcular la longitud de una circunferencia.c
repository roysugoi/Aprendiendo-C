//Vamos a calcular la hipotenusa de un tri�nguo rect�ngulo, pidiendo el valor de dos catetos.

#include <stdio.h> 		//Existen muchos tipos de librerías, las cuales nos otorgan la capacidad de realizar funciones, y se a�aden precedidas por #include. "stdio" significa "standard input output" y ".h" significa "header". Nos sirve para poder poner cosas en pantalla y guardar datos.
#include <math.h>

int main() 				//Esta es la funci�n principal (main) que vamos a crear. "Int" quiere decir que es un n�mero entero.		
{
	
	float hipotenusa,cateto1,cateto2;						//Dado que es muy probable que salga un n�mero REAL, utilizaremos la expresi�n float en vez de int para este ejercicio.
	
	printf("Introduce el valor de los dos catetos: ");		//Solicitamos al usuario que nos diga el valor de los dos catetos. Este es solo el texto, y con scanf haremos esto posible a continuaci�n.
	
	scanf("%f %f",&cateto1,&cateto2);						//Usamos scanf para recoger los dos números que el usuario teclee. Al ser reales, usamos %f. Indicamos a continuaci�n que se guarden los valores como cateto1 y cateto2 mediante el uso del s�mbolo &.								
	
	hipotenusa = sqrt(pow(cateto1,2)+pow(cateto2,2));		//Utilizamos la f�rmula de Pit�goras, la cual podemos utilizar gracias a la librer�a math.h. sqrt equivale a ra�z, y pow equivale a potencia. A continuaci�n de pow, indicamos el n�mero base, y tras la coma, la potencia.
	
	printf("La hipotenusa es: %.2f",hipotenusa);			//Mostramos al usuario el resultado, limit�ndolo a 2 decimales con %.2f. A continuaci�n tras la coma, establecemos que se muestre el resultado de la f�rmula para la hipotenusa.
	
    return 0;			//Gracias a poner return 0; podemos saber que la funci�n ha terminado correctamente, y que nuestro programa no ha fallado en un punto a mitad de ejecuci�n. Es una buena costumbre utilizarlo.
}
