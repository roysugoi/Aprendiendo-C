//Vamos a hacer un programa, en el que se nos pedirá que repitamos un nombre que nos marca la terminal. El objetivo es ver cómo comparar strings en esta ocasión, en vez de números.

#include <stdio.h>    //Existen muchos tipos de librerías, las cuales nos otorgan la capacidad de realizar funciones, y se añaden precedidas por #include. "stdio" significa "standard input output" y ".h" significa "header". Nos sirve para poder poner cosas en pantalla y guardar datos.

#include <string.h>   //ESta librería la añadimos porque vamos a trabajar con strings, comparando lo introducido por el usuario con lo que el programa tiene configurado.

int main(){           //Esta es la función principal (main) que vamos a crear. "Int" quiere decir que es un número entero.

  char nombre[30];    //Declaramos nuestras variables locales, en este caso al introducir un nombre usamos char, el nombre de la función (nombre), y el número de caracteres máximos (30).

  printf("El nombre que tienes que teclear es Rodrigo: ");  //Le indicamos al usuario el nombre que debe introducir, siento importante que incluso la mayúscula sea introducida correctamente.

  scanf("%s", nombre);  //Mediante scanf pedimos al usuario que ingrese el nombre Rodrigo, el cual será un string (%s), y lo guardamos como nombre. En este caso, gracias a que es un string, no hace falta usar el símbolo &.

  if(strcmp(nombre,"Rodrigo")==0){                  //Comparamos el nombre configurado dentro del programa con lo introducido por el usuario, mediante "strcmp". Si es lo mismo (==0) entonces imprimimos que es correcto.

    printf("Has escrito Rodrigo correctamente");    //Confirmamos mediante texto que la entrada es correcta.

  }

  else{                                             //En caso contrario, usamos else.

    printf("No has escrito Rodrigo correctamente"); //Confirmamos mediante tecto que la entrada es incorrecta.

  }

  return 0;
}
