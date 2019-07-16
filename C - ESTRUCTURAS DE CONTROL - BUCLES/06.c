//Suma de los 10 primeros números pares.

#include <stdio.h>        //Existen muchos tipos de librerías, las cuales nos otorgan la capacidad de realizar funciones, y se añaden precedidas por #include. "stdio" significa "standard input output" y ".h" significa "header". Nos sirve para poder poner cosas en pantalla y guardar datos.

int main (){              //Esta es la función principal (main) que vamos a crear. "Int" quiere decir que es un número entero.

  int i=0,n, suma=0;                  //Declaramos el valor de nuestro contador (i=1).

  char c;

  printf("Número de filas: ");

  scanf("%i",&n );

  for (i=1; i<=n; i++) {      //Mediante el uso de FOR, le decimos: (el contador vale 1, hasta llegar a 10 se repite la función, y la función es i = i + 1).

    printf("%c",suma);

    suma = suma + 1;

  }



  return 0;               //Gracias a poner return 0; podemos saber que la función ha terminado correctamente, y que nuestro programa no ha fallado en un punto a mitad de ejecución. Es una buena costumbre utilizarlo.

  }