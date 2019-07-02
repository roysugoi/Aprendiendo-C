//Vamos a hacer un programa que calcule la media aritm�tica de tres números cualesquiera.

#include <stdio.h> 		//Existen muchos tipos de librerías, las cuales nos otorgan la capacidad de realizar funciones, y se a�aden precedidas por #include. "stdio" significa "standard input output" y ".h" significa "header". Nos sirve para poder poner cosas en pantalla y guardar datos.

int main() 				//Esta es la funci�n principal (main) que vamos a crear. "Int" quiere decir que es un n�mero entero.		
{
	float n1,n2,n3,media;
	
	printf("Primer d�gito: ");			//Pedimos mediante texto el primer d�gito.
	
	scanf("%f",&n1);					//Mediante scanf habilitamos la opci�n de insertar el primer d�gito, y lo guardamos como n1 mediante &n1.
	
	printf("Segundo d�gito: ");			//Pedimos mediante texto el primer d�gito.
	
	scanf("%f",&n2);					//Mediante scanf habilitamos la opci�n de insertar el segundo d�gito, y lo guardamos como n1 mediante &n2.
	
	printf("Tercer d�gito: ");			//Pedimos mediante texto el primer d�gito.
	
	scanf("%f",&n3);					//Mediante scanf habilitamos la opci�n de insertar el tercer d�gito, y lo guardamos como n1 mediante &n3.
	
	media = (n1 + n2 + n3) / 3;			//De esta manera calculamos la media aritm�tica de 3 números, sumando los 3 y dividi�ndolos entre el n�mero de d�gitos a introducir.
	
	printf("La media es: %f",media);	//Imprimimos el resultado, de un n�mero REAL por lo que usamos %f, y tras la coma especificamos que queremos la soluci�n de la funci�n denominada media.
	
    return 0;			//Gracias a poner return 0; podemos saber que la funci�n ha terminado correctamente, y que nuestro programa no ha fallado en un punto a mitad de ejecuci�n. Es una buena costumbre utilizarlo.
}
