//El símbolo ? para el uso del condicional en una sola línea.

#include <stdio.h>//Existen muchos tipos de librerías, las cuales nos otorgan la capacidad de realizar funciones, y se añaden precedidas por #include. "stdio" significa "standard input output" y ".h" significa "header". Nos sirve para poder poner cosas en pantalla y guardar datos.

int main (){      //Esta es la función principal (main) que vamos a crear. "Int" quiere decir que es un número entero.

int n1;           //Declaramos las variables que vamos a usar, en este caso, el número que queremos decir si es par o impar.

printf("Introduce un número: ");  //Parte textual en la que pedimos al usuario que introduzca un número par o impar.
scanf("%i",&n1);  //Mediante scanf, permitimos que el usuario pueda introducir un número entero (int) y guardarlo como n1 (%n1).

(n1%2==0) ? printf("El número es par") : printf("El número es impar");  //Si n1 es divisile entre 2 y el resto es 0 (n1%2==0) entonces se hará (:), en función del resultado (?) la primera asunción (par) o la segunda (impar).

return 0;         //Gracias a poner return 0; podemos saber que la función ha terminado correctamente, y que nuestro programa no ha fallado en un punto a mitad de ejecución. Es una buena costumbre utilizarlo.
}
