//Hallar los múltiplos de 3 desde 1 hasta n.

#include <stdio.h>        //Existen muchos tipos de librerías, las cuales nos otorgan la capacidad de realizar funciones, y se añaden precedidas por #include. "stdio" significa "standard input output" y ".h" significa "header". Nos sirve para poder poner cosas en pantalla y guardar datos.

int main (){              //Esta es la función principal (main) que vamos a crear. "Int" quiere decir que es un número entero.

  int n, i;               //La variable i es el contador (de 1 en 1, por lo que i=1).

  printf("Introduce hasta qué número comprobar los múltiplos de 3: ");  //Parte textual en la que pedimos al usuario que introduzca hasta qué número comprobar.

  scanf("%i",&n);         //Mediante scanf permitimos que el usuario pueda introducir un número entero (%i) y guardarlo como n (&n).

  i = 1;                  //Establecemos el valor de nuestro contador (para que el while vaya número por número comprobando).

  while (i<=n) {          //Usamos la expresión while para que la función compruebe mientras sea cierta la condición, todos los números múltiplos de 3.

    if(i%3==0){           //Condición if dentro del while en la que requerimos que el número que se esté comprobando (que es igual que el número de intentos) sea múltiplo de 3, pidiendo al programa que nos diga si el resto de la división entre 3 es 0 (i%3==0)

      printf("%i \n",i);  //Parte textual en la que confirmamos el resultado de la operación if dentro del while, mientras se cumple.

    }

    i = i + 1;            //Mediante esta fórmula incrementamos en cada bucle el valor del contador en 1. Se podría también escribir i++;.

  }

  return 0;               //Gracias a poner return 0; podemos saber que la función ha terminado correctamente, y que nuestro programa no ha fallado en un punto a mitad de ejecución. Es una buena costumbre utilizarlo.

  }
