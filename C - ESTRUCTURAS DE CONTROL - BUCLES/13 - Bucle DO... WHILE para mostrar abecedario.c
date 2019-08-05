//Programa que mediante el bucle DO... WHILE, muestra en pantalla el abecedario en minúscula.

#include <stdio.h>      //Existen muchos tipos de librerías, las cuales nos otorgan la capacidad de realizar funciones, y se añaden precedidas por #include. "stdio" significa "standard input output" y ".h" significa "header". Nos sirve para poder poner cosas en pantalla y guardar datos.

int main(){             //Esta es la función principal (main) que vamos a crear. "Int" quiere decir que es un número entero.

	char letra='a';       //Primero fijamos las variables que vamos a usar. Dado que el valor de 'a' es equivalente a 61 en hexadecimal, podemos operar con ella como si fuese un número.

	do {                  //Mediante el bucle DO...WHILE haremos que el programa ejecute una primera acción, seguida de un condicional, para ver si dicha función se sigue cumpliendo.

		printf("%c\n",letra);	//Parte en la que imprimimos en pantalla la letra inicial, en este caso a, dado que la hemos fijado en nuestras variables.

		letra++;            //Al valor hexadecimal de 'a' le sumamos 1 para obtener la siguiente letra en el abecedario (b=62 en hexadecimal).

	} while(letra<='z');	//Mientras que el valor de la letra sea inferior al que supone 'z' en hexadecimal, se repetirá la función incluida en DO.

	return 0;    //Gracias a poner return 0; podemos saber que la función ha terminado correctamente, y que nuestro programa no ha fallado en un punto a mitad de ejecución. Es una buena costumbre utilizarlo.
}
