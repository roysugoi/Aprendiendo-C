//Mediante la sentencia for, imprimir 100 veces una frase.

#include <stdio.h>        //Existen muchos tipos de librerías, las cuales nos otorgan la capacidad de realizar funciones, y se añaden precedidas por #include. "stdio" significa "standard input output" y ".h" significa "header". Nos sirve para poder poner cosas en pantalla y guardar datos.

int main (){              //Esta es la función principal (main) que vamos a crear. "Int" quiere decir que es un número entero.

  int i;                  //Declaramos el valor de nuestro contador (i=1).

  for (i=1;i<=100;i++) {  //Mediante el uso de for, podemos escribir en una misma línea: (valor inicial,hasta cuando repetir,operación con el valor).

    printf("No llegaré tarde a clase otra vez\n",i);    //Parte textual en la que mostramos los valores o la frase en este caso que queremos.

  }

  return 0;               //Gracias a poner return 0; podemos saber que la función ha terminado correctamente, y que nuestro programa no ha fallado en un punto a mitad de ejecución. Es una buena costumbre utilizarlo.

  }
