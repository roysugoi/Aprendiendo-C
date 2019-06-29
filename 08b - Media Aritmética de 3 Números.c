//Vamos a hacer un programa que calcule la media aritmética de tres números cualesquiera.

#include <stdio.h> 		//Existen muchos tipos de librerías, las cuales nos otorgan la capacidad de realizar funciones, y se añaden precedidas por #include. "stdio" significa "standard input output" y ".h" significa "header". Nos sirve para poder poner cosas en pantalla y guardar datos.

int main() 				//Esta es la función principal (main) que vamos a crear. "Int" quiere decir que es un número entero.		
{
	float n1,n2,n3,media;
	
	printf("Primer dígito: ");			//Pedimos mediante texto el primer dígito.
	
	scanf("%f",&n1);					//Mediante scanf habilitamos la opción de insertar el primer dígito, y lo guardamos como n1 mediante &n1.
	
	printf("Segundo dígito: ");			//Pedimos mediante texto el primer dígito.
	
	scanf("%f",&n2);					//Mediante scanf habilitamos la opción de insertar el segundo dígito, y lo guardamos como n1 mediante &n2.
	
	printf("Tercer dígito: ");			//Pedimos mediante texto el primer dígito.
	
	scanf("%f",&n3);					//Mediante scanf habilitamos la opción de insertar el tercer dígito, y lo guardamos como n1 mediante &n3.
	
	media = (n1 + n2 + n3) / 3;			//De esta manera calculamos la media aritmética de 3 números, sumando los 3 y dividiéndolos entre el número de dígitos a introducir.
	
	printf("La media es: %f",media);	//Imprimimos el resultado, de un número REAL por lo que usamos %f, y tras la coma especificamos que queremos la solución de la función denominada media.
	
    return 0;			//Gracias a poner return 0; podemos saber que la función ha terminado correctamente, y que nuestro programa no ha fallado en un punto a mitad de ejecución. Es una buena costumbre utilizarlo.
}
