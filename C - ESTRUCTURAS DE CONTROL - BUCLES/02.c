//Suma de los n primeros números, introducidos por el usuario.

#include <stdio.h>      //Existen muchos tipos de librerías, las cuales nos otorgan la capacidad de realizar funciones, y se añaden precedidas por #include. "stdio" significa "standard input output" y ".h" significa "header". Nos sirve para poder poner cosas en pantalla y guardar datos.

int main (){            //Esta es la función principal (main) que vamos a crear. "Int" quiere decir que es un número entero.

  int contador, n1, suma=0;

  printf("Introduce la cantidad de números a sumar: ");
  scanf("%i",&n1);

  contador = 1;

  while (contador <= n1) {
    suma = suma + contador;
    contador = contador + 1;
  }

  printf("%i",suma);


  return 0;
}
