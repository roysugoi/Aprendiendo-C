//Suma de los n primeros números, introducidos por el usuario.

#include <stdio.h>      //Existen muchos tipos de librerías, las cuales nos otorgan la capacidad de realizar funciones, y se añaden precedidas por #include. "stdio" significa "standard input output" y ".h" significa "header". Nos sirve para poder poner cosas en pantalla y guardar datos.

int main (){            //Esta es la función principal (main) que vamos a crear. "Int" quiere decir que es un número entero.

  int contador, n1, suma=0;     //Declaramos las variables que vamos a necesitar utilizar, en este caso el valor del contador (1), el número que pedimos (n1), y el valor inicializado de la suma, que es 0.

  printf("Introduce la cantidad de números a sumar: ");   //Parte textual en la que pedimos al usuario que introduzca los números que quiere sumar.

  scanf("%i",&n1);      //Mediante scanf permitimos que el usuario pueda introducir un número entero (n1), y guardarlo como n1 (&n1).

  contador = 1;         //Valor de incremento del contador.

  while (contador <= n1) {      //Mediante while, hacemos que el programa repita esta función hasta que la condición (contador <= n1) no se cumpla.

    suma = suma + contador;     //Función que calcula el número que se va a imprimir en pantalla.

    contador = contador + 1;    //Función que le dice al programa la cantidad de veces que se ha repetido el bucle.

  }

  printf("%i",suma);    //Parte textual en la que mostramos el resultado final.

  return 0;             //Gracias a poner return 0; podemos saber que la función ha terminado correctamente, y que nuestro programa no ha fallado en un punto a mitad de ejecución. Es una buena costumbre utilizarlo.
  }
