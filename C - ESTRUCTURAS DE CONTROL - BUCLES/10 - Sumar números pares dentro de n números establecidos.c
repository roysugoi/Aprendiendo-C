//Programa que imprima la suma de todos los números pares hasta n, y que después diga cuántos números hay.

#include <stdio.h>      //Existen muchos tipos de librerías, las cuales nos otorgan la capacidad de realizar funciones, y se añaden precedidas por #include. "stdio" significa "standard input output" y ".h" significa "header". Nos sirve para poder poner cosas en pantalla y guardar datos.

int main(){             //Esta es la función principal (main) que vamos a crear. "Int" quiere decir que es un número entero.

	int cont=0,i,suma=0,n;//Establecemos las variables que vamos a utilizar en el programa y las inicializamos.

	printf("Digite la cantidad de elementos: ");   //Parte textual en la que pedimos al usuario que introduzca un número.

  scanf("%i",&n);       //Mediante scanf permitimos que el usuario pueda introducir dicho número entero (%i) y guardarlo como n (&n).

	for(i=1;i<=n;i++){    //Bucle FOR en el que establecemos que i=1, que se ejecute mientras i sea igual o menor a n, y que la función a ejecutar sea i = i + 1 (equivalente a i++).

		if(i%2==0){         //Establecemos mediante el condicional IF, que si el número de iteración (i) es divisible entre 2 con resto 0, entonces se ejecute la siguiente función.

			suma += i;        //Función en el que acumulamos el valor de la suma de los digitos hasta ahora operados (suma = suma + i).

			cont++;           //Función de contador en el cual guardamos la cantidad de veces que se ha ejecutado la función suma, y decirle después al usuario cuántos resultados pares hay dentro de esos n números.
		}
	}
	printf("\n La suma es: %i",suma);    //Parte textual en la que confirmamos el resultado de (suma) al usuario.

	printf("\n La cantidad de numeros es: %i",cont); //Parte textual en la que confirmamos la cantidad de números pares comprendida en esos n números, al usuario.

	return 0;    //Gracias a poner return 0; podemos saber que la función ha terminado correctamente, y que nuestro programa no ha fallado en un punto a mitad de ejecución. Es una buena costumbre utilizarlo.
}
