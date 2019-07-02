//Vamos a hacer un programa que calcule el �rea de un trapecio.

#include <stdio.h> 		//Existen muchos tipos de librerías, las cuales nos otorgan la capacidad de realizar funciones, y se a�aden precedidas por #include. "stdio" significa "standard input output" y ".h" significa "header". Nos sirve para poder poner cosas en pantalla y guardar datos.

int main() 				//Esta es la funci�n principal (main) que vamos a crear. "Int" quiere decir que es un n�mero entero.
{
	float base_M, base_m, altura, area;

	printf("Medida de la base mayor: ");			//Parte textual en la que preguntamos la base mayor.
	scanf("%f",&base_M);							//Con este scanf el usuario puede introducir la longitud de la base mayor. Al ser un n�mero REAL usamos %f.

	printf("Medida de la base menor: ");			//Parte textual en la que preguntamos la base menor.
	scanf("%f",&base_m);							//Con este scanf el usuario puede introducir la longitud de la base menor. Al ser un n�mero REAL usamos %f.

	printf("Medida de la altura: ");				//Parte textual en la que preguntamos la base altura.
	scanf("%f",&altura);							//Con este scanf el usuario puede introducir la longitud de la altura. Al ser un n�mero REAL usamos %f.

	area = ((base_M + base_m) / 2) * altura;		//Expresamos as� la f�rmula para calcular el �rea de un trapecio.

	printf("El �rea es %.2f",area);					//Imprimimos la parte textual, y despu�s de la coma, el resultado de la funci�n area.

    return 0;			//Gracias a poner return 0; podemos saber que la funci�n ha terminado correctamente, y que nuestro programa no ha fallado en un punto a mitad de ejecuci�n. Es una buena costumbre utilizarlo.
}
