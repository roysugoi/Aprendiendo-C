//Vamos a calcular la hipotenusa de un triánguo rectángulo, pidiendo el valor de dos catetos.

#include <stdio.h> 		//Existen muchos tipos de librerías, las cuales nos otorgan la capacidad de realizar funciones, y se añaden precedidas por #include. "stdio" significa "standard input output" y ".h" significa "header". Nos sirve para poder poner cosas en pantalla y guardar datos.
#include <math.h>

int main() 				//Esta es la función principal (main) que vamos a crear. "Int" quiere decir que es un número entero.		
{
	
	float hipotenusa,cateto1,cateto2;						//Dado que es muy probable que salga un número REAL, utilizaremos la expresión float en vez de int para este ejercicio.
	
	printf("Introduce el valor de los dos catetos: ");		//Solicitamos al usuario que nos diga el valor de los dos catetos. Este es solo el texto, y con scanf haremos esto posible a continuación.
	
	scanf("%f %f",&cateto1,&cateto2);						//Usamos scanf para recoger los dos números que el usuario teclee. Al ser reales, usamos %f. Indicamos a continuación que se guarden los valores como cateto1 y cateto2 mediante el uso del símbolo &.								
	
	hipotenusa = sqrt(pow(cateto1,2)+pow(cateto2,2));		//Utilizamos la fórmula de Pitágoras, la cual podemos utilizar gracias a la librería math.h. sqrt equivale a raíz, y pow equivale a potencia. A continuación de pow, indicamos el número base, y tras la coma, la potencia.
	
	printf("La hipotenusa es: %.2f",hipotenusa);			//Mostramos al usuario el resultado, limitándolo a 2 decimales con %.2f. A continuación tras la coma, establecemos que se muestre el resultado de la fórmula para la hipotenusa.
	
    return 0;			//Gracias a poner return 0; podemos saber que la función ha terminado correctamente, y que nuestro programa no ha fallado en un punto a mitad de ejecución. Es una buena costumbre utilizarlo.
}
