//Con este ejemplo, vamos a hacer una suma de n�mero entero y una resta de un n�mero real, jugando con el valor de PI.

#include <stdio.h>		//Existen muchos tipos de librerías, las cuales nos otorgan la capacidad de realizar funciones, y se a�aden precedidas por #include. "stdio" significa "standard input output" y ".h" significa "header". Nos sirve para poder poner cosas en pantalla y guardar datos.

#define PI 3.1416 		//Macros empiezan por #define, y sirven para definir variables que vayamos a utilizar posteriormente. En este caso decimos que PI vale 3.1416.

int y = 5; 				//Esta es una variable GLOBAL, y quiere decir que "y" va a ser 5 en todas las funciones posteriores.

int main(){ 			//Comenzamos con int main(){}, lo cual quiere decir que trabajaremos con una funci�n PRINCIPAL que maneja números enteros (int).
	
	int x = 10; 		//Aqu� estamos asignando un valor a X de la misma forma que se lo hemos asignado antes a PI, pero en este caso lo llamamos variable LOCAL, porque est� dentro de una funci�n y solo la podemos usar dentro de dicha funci�n.
	
	int suma = 0;		//Decalaramos la variable ENTERA suma = 0, pero quiero que suma var�e su valor, no que sea 0, por lo que despu�s escribo la f�rmula que le da el valor.
	
	float resta = 0;	//Decalaramos la variable REAL (conserva los decimales) resta = 0, pero quiero que resta var�e su valor, no que sea 0, por lo que despu�s escribo la f�rmula que le da el valor.
	
	suma = PI + x;		//Con esto declaramos que suma va ahora a almacenar el valor PI + x en vez de 0 y sin conservar los decimales.
	
	resta = PI - x; 	//Con esto declaramos que resta va ahora a almacenar el valor PI - x en vez de 0 y conservar los decimales.
	
	printf("La suma es %i\n",suma);  // El % indica qu� tipo de dato es, al ser entero, se escribe %i. A continuaci�n, ",suma" obliga a %i a imprimir el resultado de PI + x. \n sirve para crear una l�nea entre este y el siguiente rengl�n.

	printf("La resta es %.2f",resta); // Aqu� hacemos lo mismo, pero al referirnos a un n�mero real con decimales usamos %f. El ".2" lo hemos a�adido porque no queremos much�simos decimales, con dos nos vale. Los decimales se redondean.

	return 0; 			//Gracias a poner return 0; podemos saber que la funci�n ha terminado correctamente, y que nuestro programa no ha fallado en un punto a mitad de ejecuci�n.
}
