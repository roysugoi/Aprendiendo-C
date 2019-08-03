//Determinar si un número es par o no con dos funciones, una principal y otra secundaria.

#include <stdio.h>      //Existen muchos tipos de librerías, las cuales nos otorgan la capacidad de realizar funciones, y se añaden precedidas por #include. "stdio" significa "standard input output" y ".h" significa "header". Nos sirve para poder poner cosas en pantalla y guardar datos.

int comprobar(int num); //Esto es un "prototipo". Con esta sentencia indicamos, debajo de la librería, que nuestro programa contiene la función int comprobar(int num). Hace que sea más eficiente, y es una buena práctica de programación.

int main(){    //Esta es la función principal (main) que vamos a crear. "Int" quiere decir que es un número entero.

	int num,x;   //Declaramos aquí nuestras variables locales, en este caso el número que pedimos al usuario (num) y x, que nos servirá para operar con el valor que nos retorne la función secundaria (gracias a return 0 o return 1, dependiendo de cual se cumpla en ella).

	printf("Introduce un número"); //Parte textual en la que pedimos al usuario que introduzca un número.

	scanf("%i",&num);    //Mediante scanf permitimos que el usuario pueda introducir un número entero (%i) y lo guarde como num (&num).

	x=comprobar(num);    //Mediante esta expresión, recogemos el valor de la función secundaria y le atribuimos dicho valor a nuestra variable local, x, para poder operar con ella.

	if (x==0) {          //Mediante if, condicionamos que si el valor de x equivale a 0 (x==0) entonces se cumpla lo que encontramos entre {}.

		printf("%i es par",num);   //Parte textual en la que confirmamos al usuario que el número introducido (num) es par.

	}

	else{                //En caso de que el If no se cumpla, se ejecutará la función incluida entre los siguientes {}.

		printf("%i es impar",num); //Parte textual en la que confirmamos al usuario que el número introducido (num) es impar.

	}

	return 0;             //Gracias a poner return 0; podemos saber que la función ha terminado correctamente, y que nuestro programa no ha fallado en un punto a mitad de ejecución. Es una buena costumbre utilizarlo.

}

int comprobar(int num){ //Función secundaria en la que retornaremos un valor (int) y a la cual llamamos "comprobar". Esta función, utilizará el parámetro int num (int num).

	if(num%2==0){         //Mediante el uso de If indicamos que si el número introducido es divisible entre 2 y el resto da 0 (num%2==0), entonces se ejecutará el contenido de {}.

		return 0;           //Al cumplirse la condición impuesta, se retorna el valor 0 (return 0;).

	}

	else {                //Mediante Else indicamos al programa que si no se cumple la condición del If, se ejecute lo comprendido entre los {}.

		return 1;           //Al cumplirse la condición impuesta, se retorna el valor 1 (return 1;).

	}
}
