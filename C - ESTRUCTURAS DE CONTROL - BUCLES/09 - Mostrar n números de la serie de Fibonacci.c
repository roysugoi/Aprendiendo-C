//Programa que genera la serie de Fibonacci, mostrando n números introducidos por el usuario.

#include <stdio.h>        //Existen muchos tipos de librerías, las cuales nos otorgan la capacidad de realizar funciones, y se añaden precedidas por #include. "stdio" significa "standard input output" y ".h" significa "header". Nos sirve para poder poner cosas en pantalla y guardar datos.

int main (){              //Esta es la función principal (main) que vamos a crear. "Int" quiere decir que es un número entero.

  int n, i, x=0, y=1, z=1;    //Declaramos las variables de las que haremos uso en el programa. Dado que el algoritmo de la serie de Fibonacci requiere x, y y z, Inicializamos sus valores con los tres primeros números de la serie (0,1,1).

  printf("Dime cuántos números de Fibonacci quieres mostrar: ");    //Parte textual en la que pedimos al usuario que introduzca un número.

  scanf("%i",&n);         //Mediante scanf permitimos que el usuario pueda introducir dicho número entero (%i) y guardarlo como n (&n).

  printf("1, ");          //Dado que este algoritmo se saltaría el primer número, lo imprimimos antes de entrar en el bucle.

  for (i = 1; i < n; i++) {   //Bucle FOR en el que establecemos que i=1, que se ejecute mientras i sea igual o menor a n, y que la función a ejecutar sea i = i + 1 (equivalente a i++).

    z=x + y;      //Mediante estas tres expresiones, generamos la base del algoritmo para la serie de Fibonacci.

    x=y;          //Mediante estas tres expresiones, generamos la base del algoritmo para la serie de Fibonacci.

    y=z;          //Mediante estas tres expresiones, generamos la base del algoritmo para la serie de Fibonacci.

    printf("%i , ",z);    //Parte textual en la que confirmamos el resultado (z) al usuario.
  }
  return 0;               //Gracias a poner return 0; podemos saber que la función ha terminado correctamente, y que nuestro programa no ha fallado en un punto a mitad de ejecución. Es una buena costumbre utilizarlo.
}
