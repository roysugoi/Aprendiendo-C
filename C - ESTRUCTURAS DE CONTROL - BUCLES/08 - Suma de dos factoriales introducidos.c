//Suma de factoriales, de dos números que el usuario introduzca.

#include <stdio.h>        //Existen muchos tipos de librerías, las cuales nos otorgan la capacidad de realizar funciones, y se añaden precedidas por #include. "stdio" significa "standard input output" y ".h" significa "header". Nos sirve para poder poner cosas en pantalla y guardar datos.

int main (){              //Esta es la función principal (main) que vamos a crear. "Int" quiere decir que es un número entero.

  int n1, n2, i, factorial1=1, factorial2=1, sumafactoriales=0;    //Declaramos las variables de las que haremos uso en el programa, en este caso, un número a introducir (n), el contador i, y factorial que será la función que nos de el resultado final.

  printf("introduzca el primer número: ");    //Parte textual en la que pedimos al usuario que introduzca un primer número.

  scanf("%i",&n1);         //Mediante scanf permitimos que el usuario pueda introducir dicho número entero (%i) y guardarlo como n1 (&n1).

  printf("introduzca el segundo número: ");   //Parte textual en la que pedimos al usuario que introduzca un segundo número.

  scanf("%i",&n2);         //Mediante scanf permitimos que el usuario pueda introducir dicho número entero (%i) y guardarlo como n2 (&n2).

  for (i = 1; i <= n1; i++) {   //Mediante FOR, ejecutaremos un bucle en el que el programa repetirá la función que contiene, considerando el valor de i=1, mientras que i sea menor o igual que el primer número introducido, y con el valor de i en función de i = i + 1 (i++;)

    factorial1 *= i;            //Función para calcular el factorial del primer número, que se ejecuta dentro del bucle FOR.
  }
  for (i=1;i<=n2; i++) {        //Mediante FOR, ejecutaremos un bucle en el que el programa repetirá la función que contiene, considerando el valor de i=1, mientras que i sea menor o igual que el segundo número introducido, y con el valor de i en función de i = i + 1 (i++;)

    factorial2 *= i;            //Función para calcular el factorial del segundo número, que se ejecuta dentro del bucle FOR.
  }
  sumafactoriales = factorial1 + factorial2;    //Mediante ésta última fórmula, sumamos el valor resultante de los bucles anteriores.

  printf("El resultado es %i",sumafactoriales); //Parte textual en la que confirmamos el resultado al usuario.

  return 0;               //Gracias a poner return 0; podemos saber que la función ha terminado correctamente, y que nuestro programa no ha fallado en un punto a mitad de ejecución. Es una buena costumbre utilizarlo.
}
