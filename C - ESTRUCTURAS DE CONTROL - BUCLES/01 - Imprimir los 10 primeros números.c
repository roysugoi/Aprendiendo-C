//Vamos a mostrar los 10 primeros números en pantalla gracias a la sentencia while, la cual permite que se repita un bucle o función mientras se cumpla una condición.

#include <stdio.h>      //Existen muchos tipos de librerías, las cuales nos otorgan la capacidad de realizar funciones, y se añaden precedidas por #include. "stdio" significa "standard input output" y ".h" significa "header". Nos sirve para poder poner cosas en pantalla y guardar datos.

int main (){            //Esta es la función principal (main) que vamos a crear. "Int" quiere decir que es un número entero.

  int i;                //i corresponde a iterador, o conteo.

  i = 1;                //Declaramos el valor de nuestra variable i, equivalente a 1.

  while (i<=10) {       //Usamos while para decir que una función se tiene que ejecutar todas las veces que haga falta hasta que la condición no se cumpla.

    printf("%i\n",i);   //i vale uno, pero necesitamos incrementar uno cada vez. De ahñi la necesidad de añadir la función en la siguiente línea.

    i = i + 1;          //Se podría declarar como i++; o como i+=1.

  }

  return 0;             //Gracias a poner return 0; podemos saber que la función ha terminado correctamente, y que nuestro programa no ha fallado en un punto a mitad de ejecución. Es una buena costumbre utilizarlo.
  }
