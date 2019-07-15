//Suma de los 10 primeros números pares.

#include <stdio.h>        //Existen muchos tipos de librerías, las cuales nos otorgan la capacidad de realizar funciones, y se añaden precedidas por #include. "stdio" significa "standard input output" y ".h" significa "header". Nos sirve para poder poner cosas en pantalla y guardar datos.

int main (){              //Esta es la función principal (main) que vamos a crear. "Int" quiere decir que es un número entero.

  int i,suma=0;                  //Declaramos el valor de nuestro contador (i=1).

  for (i=1; i<=10; i++) {      //Mediante el uso de FOR, le decimos: (el contador vale 1, hasta llegar a 10 se repite la función, y la función es i = i + 1).

    if(i%2==0){                 //Pero debemos comprobar mediante IF, que el número es divisible entre 2 (i%2==0).

      suma = suma + i;          //Este es el valor acumulativo que se va sumando de todos los números pares comprobados.
    }

  }

  printf("La suma es %i",suma); //Parte textual en la que mostramos el valor final de la función suma.

  return 0;               //Gracias a poner return 0; podemos saber que la función ha terminado correctamente, y que nuestro programa no ha fallado en un punto a mitad de ejecución. Es una buena costumbre utilizarlo.

  }
