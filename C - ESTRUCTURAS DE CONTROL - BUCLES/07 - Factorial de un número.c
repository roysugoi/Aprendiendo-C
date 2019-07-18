//Factorial de un número.

#include <stdio.h>        //Existen muchos tipos de librerías, las cuales nos otorgan la capacidad de realizar funciones, y se añaden precedidas por #include. "stdio" significa "standard input output" y ".h" significa "header". Nos sirve para poder poner cosas en pantalla y guardar datos.

int main (){              //Esta es la función principal (main) que vamos a crear. "Int" quiere decir que es un número entero.

  int n=0, i=0, factorial=1;    //Declaramos las variables de las que haremos uso en el programa, en este caso, un número a introducir (n), el contador i, y factorial que será la función que nos de el resultado final.

  printf("Dime un número: ");   //Parte textual en la que pedimos al usuario que introduzca un número.

  scanf("%i",&n);               //Mediante scanf permitimos que el usuario pueda introducir dicho número entero (%i) y guardarlo como n (&n).

  for (i = 1; i <= n; i++) {    //Bucle FOR en el que establecemos que i=1, que se ejecute mientras i sea igual o menor a n, y que la función a ejecutar sea i = i + 1.

    factorial *= i;             //Fórmula que se ejecuta durante cada paso del bucle.
  }
  printf("El resultado es %i",factorial);   //Parte textual en la que confirmamos el resultado final (%i) de la operación (factorial).

  return 0;               //Gracias a poner return 0; podemos saber que la función ha terminado correctamente, y que nuestro programa no ha fallado en un punto a mitad de ejecución. Es una buena costumbre utilizarlo.
}
