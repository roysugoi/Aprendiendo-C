//En este ejercicio, creamos una herramienta que convierte �C indicados por el usuario, a �F.

#include <stdio.h> 		//Existen muchos tipos de librerías, las cuales nos otorgan la capacidad de realizar funciones, y se a�aden precedidas por #include. "stdio" significa "standard input output" y ".h" significa "header". Nos sirve para poder poner cosas en pantalla y guardar datos.

int main() 				//Esta es la funci�n principal (main) que vamos a crear. "Int" quiere decir que es un n�mero entero.		
{

float n1, a = 0;							//Primero tenemos que nombrar todas las variables y operaciones que vamos a usar en nuestra funci�n. Vamos a usar dos números que pueden llevar decimales, por lo que usamos la expresi�n float.
	
	printf("Calculadora de �C a �F.\n");	//Creamos as� un peque�o t�tulo para la herramienta.

	printf("\nDime los �C ");				//Solicitamos al usuario que nos diga los �C. Este es solo el texto, y con scanf haremos esto posible a continuaci�n. Utilizamos \n para generar un salto de l�nea, y crear un espacio respecto al t�tulo.
	
	scanf("%f",&n1);						//Usamos scanf para recoger los �C que el usuario indique y los guardamos como n1 mediante el s�mbolo &.								
	
	a = n1 * 1.8 + 32;						//Esta es nuestra funci�n que convierte �C a �F. Se puede encontrar en Google muy f�cilmente.
	
	printf("\nEso son %.1f �F", a);			//Imprimimos los resultados. \n sirve para crear un salto de l�nea y que no se pegue el texto. Escribimos la frase que queramos, y a continuaci�n indicamos que lo que queremos que se muestre es la suma (escribiendo suma tras la coma).
	
    return 0;			//Gracias a poner return 0; podemos saber que la funci�n ha terminado correctamente, y que nuestro programa no ha fallado en un punto a mitad de ejecuci�n. Es una buena costumbre utilizarlo.
}
