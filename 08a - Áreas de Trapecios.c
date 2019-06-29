//Vamos a hacer un programa que calcule el área de un trapecio.

#include <stdio.h> 		//Existen muchos tipos de librerías, las cuales nos otorgan la capacidad de realizar funciones, y se añaden precedidas por #include. "stdio" significa "standard input output" y ".h" significa "header". Nos sirve para poder poner cosas en pantalla y guardar datos.

int main() 				//Esta es la función principal (main) que vamos a crear. "Int" quiere decir que es un número entero.		
{
	float base_M, base_m, altura, area;
	
	printf("Medida de la base mayor: ");			//Parte textual en la que preguntamos la base mayor.
	scanf("%f",&base_M);							//Con este scanf el usuario puede introducir la longitud de la base mayor. Al ser un número REAL usamos %f.
	
	printf("Medida de la base menor: ");			//Parte textual en la que preguntamos la base menor. 
	scanf("%f",&base_m);							//Con este scanf el usuario puede introducir la longitud de la base menor. Al ser un número REAL usamos %f.
	
	printf("Medida de la altura: ");				//Parte textual en la que preguntamos la base altura. 
	scanf("%f",&altura);							//Con este scanf el usuario puede introducir la longitud de la altura. Al ser un número REAL usamos %f.
	
	area = ((base_M + base_m) / 2) * altura;		//Expresamos así la fórmula para calcular el área de un trapecio.
	
	printf("El área es %.2f",area);					//Imprimimos la parte textual, y después de la coma, el resultado de la función area.
	
    return 0;			//Gracias a poner return 0; podemos saber que la función ha terminado correctamente, y que nuestro programa no ha fallado en un punto a mitad de ejecución. Es una buena costumbre utilizarlo.
}
