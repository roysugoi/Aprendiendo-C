//Saber si un número introducido es primo.

#include <stdio.h>        //Existen muchos tipos de librerías, las cuales nos otorgan la capacidad de realizar funciones, y se añaden precedidas por #include. "stdio" significa "standard input output" y ".h" significa "header". Nos sirve para poder poner cosas en pantalla y guardar datos.

int main (){              //Esta es la función principal (main) que vamos a crear. "Int" quiere decir que es un número entero.

  int n, i, contador=0;   //Inicializamos las variables que vamos a utilizar. Es bueno inicializarlas a 0, por si existe algún número en memoria que pueda llevar a error.

  printf("Dime un número: "); //Parte textual en la que pedimos al usuario que introduzca un número.

  scanf("%i",&n);             //Mediante scanf permitimos que el usuario pueda introducir dicho número entero (%i) y guardarlo como n (&n).

  for (i = 1; i <=n; i++){    //Mediante el uso de for, pediremos al programa que cumpla la siguiente función hasta que el número del contador sea igual al número introducido por el usuario.

    if (n%i==0) {             //Durante el bucle establecido anteriormente, y con ese condicional IF, le decimos al programa que si existe un número con resto = 0 respecto a n (n%i==0), entonces la función a continuación se cumpla.

      contador++;             //Función en la que establecemos que cada vez que se encuentre un número que dé resto=0 al dividir a n, contador aumente en 1 su valor.
    }
  }

  if (contador>2) {               //Condicional final en el que le decimos al programa que si el contador es mayor a dos, cumpla la función a continuación.

    printf("%i no es primo",n);   //Parte textual en la que confirmamos al usuario que el número introducido no es primo.
  }

  else {                          //Segunda parte del condicional que se ejecutará si no se cumple la condición asignada en IF.

    printf("%i es primo",n);      //Parte textual en la que confirmamos al usuario que el número introducido es primo.
  }

  return 0;               //Gracias a poner return 0; podemos saber que la función ha terminado correctamente, y que nuestro programa no ha fallado en un punto a mitad de ejecución. Es una buena costumbre utilizarlo.
  }
