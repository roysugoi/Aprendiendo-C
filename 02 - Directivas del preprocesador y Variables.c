//Con este ejemplo, vamos a hacer una suma de número entero y una resta de un número real, y jugando con el valor de PI.

#include <stdio.h>		//Las librerías son muy importantes, y empiezan por #include. "stdio" significa "standard input output" y ".h" significa "header", o archivo de cabecera. Sirve para poder poner cosas en pantalla y guardar datos.

#define PI 3.1416 		//Macros empiezan por #define, y sirven para definir variables que vayamos a utilizar posteriormente. En este caso decimos que PI vale 3.1416.

int y = 5; 				//Esta es una variable GLOBAL, y quiere decir que "y" va a ser 5 en todas las funciones posteriores.

int main(){ 			//Comenzamos con int main(){}, lo cual quiere decir que trabajaremos con una función PRINCIPAL que maneja números enteros (int).
	
	int x = 10; 		//Aquí estamos asignando un valor a X de la misma forma que se lo hemos asignado antes a PI, pero en este caso lo llamamos variable LOCAL, porque está dentro de una función y solo la podemos usar dentro de dicha función.
	
	int suma = 0;		//Decalaramos la variable ENTERA suma = 0, pero quiero que suma varíe su valor, no que sea 0, por lo que después escribo la fórmula que le da el valor.
	
	float resta = 0;	//Decalaramos la variable REAL (conserva los decimales) resta = 0, pero quiero que resta varíe su valor, no que sea 0, por lo que después escribo la fórmula que le da el valor.
	
	suma = PI + x;		//Con esto declaramos que suma va ahora a almacenar el valor PI + x en vez de 0 y sin conservar los decimales.
	
	resta = PI - x; 	//Con esto declaramos que resta va ahora a almacenar el valor PI - x en vez de 0 y conservar los decimales.
	
	printf("La suma es %i\n",suma);  // El % indica qué tipo de dato es, al ser entero, se escribe %i. A continuación, ",suma" obliga a %i a imprimir el resultado de PI + x. \n sirve para crear una línea entre este y el siguiente renglón.

	printf("La resta es %.2f",resta); // Aquí hacemos lo mismo, pero al referirnos a un número real con decimales usamos %f. El ".2" lo hemos añadido porque no queremos muchísimos decimales, con dos nos vale. Los decimales se redondean.

	return 0; 			//Gracias a poner return 0; podemos saber que la función ha terminado correctamente, y que nuestro programa no ha fallado en un punto a mitad de ejecución.
}

