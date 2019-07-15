//

#include <stdio.h>      //Existen muchos tipos de librerías, las cuales nos otorgan la capacidad de realizar funciones, y se añaden precedidas por #include. "stdio" significa "standard input output" y ".h" significa "header". Nos sirve para poder poner cosas en pantalla y guardar datos.

int main (){            //Esta es la función principal (main) que vamos a crear. "Int" quiere decir que es un número entero.

  int n1, contador=0, suma=0, mult=0;

  printf("Introduce un número. Si es mayor o igual a 10, multiplicaré los 10 primeros números, y si es menor los sumaré: ");
  scanf("%i",&n1);

  contador = 1;

  if (n1>=10) {
    while (contador <= 10) {
      mult = mult * contador;
      contador = contador + 1;
    }
    printf("La multiplicación es %i", mult);
  }

  else {
    while (contador <= 10) {
      suma = suma + contador;
      contador = suma + 1;
    }
    printf("La suma es %i", suma);
  }

  return 0;             //Gracias a poner return 0; podemos saber que la función ha terminado correctamente, y que nuestro programa no ha fallado en un punto a mitad de ejecución. Es una buena costumbre utilizarlo.
  }
