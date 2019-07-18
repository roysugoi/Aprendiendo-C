//Programa que mediante el bucle DO... WHILE, muestre en pantalla los 10 primeros números.

#include <stdio.h>      //Existen muchos tipos de librerías, las cuales nos otorgan la capacidad de realizar funciones, y se añaden precedidas por #include. "stdio" significa "standard input output" y ".h" significa "header". Nos sirve para poder poner cosas en pantalla y guardar datos.

int main(){             //Esta es la función principal (main) que vamos a crear. "Int" quiere decir que es un número entero.

	char option;          //Declaramos las variables que utilizaremos, en este caso el número de iteraciones que vaya realizando el bucle (i).

	do {                  //Mediante DO, ejecutamos una primera parte del código de manera incondicional.

		fflush(stdin);			//Mediante ésta expresión hacemos que el programa borre de la memoria el resultado para que la consola no se cierre, siempre y cuando se cumpla la condición del WHILE.

		printf("Hola");		//Parte textual en la que imprimimos en pantalla un saludo.

		printf("\nSi quieres que se repita el saludo, pulsa la tecla S y presiona Enter: ");		//Parte textual en la que pedimos al usuario que introduzca la letra S si quiere repetir el saludo.

		scanf("%c",&option);	//Mediante scanf permitimos que el usuario pueda introducir un caracter, y si es S, se cumplirá la condición del WHILE.

	} while(option=='s' || option=='S');				//Mediante WHILE, le decimos al programa hasta cuando se tiene que ejecutar la función dentro de DO. Dado que queremos que la s pueda ser mayúscula o minúscula, usamos || para decir que ambas condiciones valen, y que no por no ser una correcta, la otra no vale para seguir con el bucle.

	return 0;    //Gracias a poner return 0; podemos saber que la función ha terminado correctamente, y que nuestro programa no ha fallado en un punto a mitad de ejecución. Es una buena costumbre utilizarlo.
}
