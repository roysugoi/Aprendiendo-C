//En este ejercicio, creamos una herramienta que convierte ºC indicados por el usuario, a ºF.

#include <stdio.h> 		//Existen muchos tipos de librerías, las cuales nos otorgan la capacidad de realizar funciones, y se añaden precedidas por #include. "stdio" significa "standard input output" y ".h" significa "header". Nos sirve para poder poner cosas en pantalla y guardar datos.

int main() 				//Esta es la función principal (main) que vamos a crear. "Int" quiere decir que es un número entero.		
{

float n1, a = 0;							//Primero tenemos que nombrar todas las variables y operaciones que vamos a usar en nuestra función. Vamos a usar dos números que pueden llevar decimales, por lo que usamos la expresión float.
	
	printf("Calculadora de ºC a ºF.\n");	//Creamos así un pequeño título para la herramienta.

	printf("\nDime los ºC ");				//Solicitamos al usuario que nos diga los ºC. Este es solo el texto, y con scanf haremos esto posible a continuación. Utilizamos \n para generar un salto de línea, y crear un espacio respecto al título.
	
	scanf("%f",&n1);						//Usamos scanf para recoger los ºC que el usuario indique y los guardamos como n1 mediante el símbolo &.								
	
	a = n1 * 1.8 + 32;						//Esta es nuestra función que convierte ºC a ºF. Se puede encontrar en Google muy fácilmente.
	
	printf("\nEso son %.1f ºF", a);			//Imprimimos los resultados. \n sirve para crear un salto de línea y que no se pegue el texto. Escribimos la frase que queramos, y a continuación indicamos que lo que queremos que se muestre es la suma (escribiendo suma tras la coma).
	
    return 0;			//Gracias a poner return 0; podemos saber que la función ha terminado correctamente, y que nuestro programa no ha fallado en un punto a mitad de ejecución. Es una buena costumbre utilizarlo.
}
