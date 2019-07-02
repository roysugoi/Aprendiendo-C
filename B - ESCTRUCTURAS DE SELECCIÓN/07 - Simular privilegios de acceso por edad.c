// Vamos a crear un programa que nos diga si tenemos acceso a un recurso. En este caso, podrán acceder al recurso hombres y mujeres mayores de 18, y no podrán hombres y mujeres menores de 18.

#include <stdio.h>    //Existen muchos tipos de librerías, las cuales nos otorgan la capacidad de realizar funciones, y se añaden precedidas por #include. "stdio" significa "standard input output" y ".h" significa "header". Nos sirve para poder poner cosas en pantalla y guardar datos.
#include <string.h>   //Dado que vamos a trabajar con strings en este ejercicio, incorporamos la librería de strings para poder usar sus funcionalidades.

int main (){          //Esta es la función principal (main) que vamos a crear. "Int" quiere decir que es un número entero.

  char nombre[30], sexo[20];    //Indicamos nuestras variables locales, en este caso hay de dos tipos. Por un lado, la parte textual que introducirá el usuario, que son nombre y sexo.

  int edad;                     //Indicamos la variable local referente a un número, en este caso la edad.

  printf("Dime tu nombre: ");   //Parte textual en la que solicitamos el nombre al usuario.
  scanf("%s",nombre);           //Mediante scanf, permitimos que el usuario introduzca su nombre. Usamos %s al ser un string, y a continuación dónde lo guardamos, en este caso en la variable nombre. No ponemos & antes de nombre al ser un string.

  printf("Dime tu edad: ");     //Parte textual en la que solicitamos la edad al usuario.
  scanf("%i",&edad);            //Mediante scanf solicitamos al usuario que introduzca su edad, mediante un número entero, y lo guardamos en la variable edad (&edad).

  printf("Indica si eres Hombre o Mujer: ");   //Parte textual en la que solicitamos el sexo al usuario.
  scanf("%s",sexo);             //Mediante scanf, permitimos que el usuario introduzca su nombre. Usamos %s al ser un string, y a continuación dónde lo guardamos, en este caso en la variable nombre. No ponemos & antes de nombre al ser un string.

  if (strcmp(sexo,"Hombre")==0) {     //Mediante if, establecemos la condición de que si es hombre, se cumpla la siguiente función. En este caso la función que se cumple es de nuevo un if, por lo que es un codicional anidado.
    if (edad >= 18) {           //Si la edad es mayor que igual a 18, se cumplira el siguiente printf.
      printf("Eres hombre y mayor de 18, por lo que tienes acceso a este recurso.");  //Parte textual en la que confirmamos el acceso del que dispone el usuario.
    }
    if (edad < 18) {            //Si la edad es menor que 18, se cumplira el siguiente printf.
      printf("Eres hombre y menor de 18, por lo que no tienes acceso a este recurso");//Parte textual en la que confirmamos el acceso del que dispone el usuario.
    }
  }

  if (strcmp(sexo,"Mujer")==0) {//Mediante if, establecemos la condición de que si es hombre, se cumpla la siguiente función. En este caso la función que se cumple es de nuevo un if, por lo que es un codicional anidado.
    if (edad >= 18) {           //Si la edad es mayor o igual que 18, se cumplira el siguiente printf.
      printf("Eres mujer y mayor de 18, por lo que tienes acceso a este recurso.");   //Parte textual en la que confirmamos el acceso del que dispone el usuario.
    }
    if (edad < 18) {            //Si la edad es menor que 18, se cumplira el siguiente printf.
      printf("Eres mujer y menor de 18, por lo que no tienes acceso a este recurso"); //Parte textual en la que confirmamos el acceso del que dispone el usuario.
    }
  }

return 0;   //Gracias a poner return 0; podemos saber que la función ha terminado correctamente, y que nuestro programa no ha fallado en un punto a mitad de ejecución.
}
