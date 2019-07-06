/*

Vamos a entender el funcionamiento de la sentencia Switch con su Default. Es como comparar el If, con su Else.

Este es el esquema que sigue switch:

switch (variable){

caso var1 : sentencias1;break;
caso var2 : sentencias2;break;
caso var3 : sentencias3;break;
default: sentencias;

}

*/

#include <stdio.h>    //Existen muchos tipos de librerías, las cuales nos otorgan la capacidad de realizar funciones, y se añaden precedidas por #include. "stdio" significa "standard input output" y ".h" significa "header". Nos sirve para poder poner cosas en pantalla y guardar datos.

int main (){          //Esta es la función principal (main) que vamos a crear. "Int" quiere decir que es un número entero.

  char vocal;         //Establecemos la variable local vocal, que al ser un caracter sentenciamos como char.

  printf("Introduce una vocal: ");    //Parte textual en la que pedimos al usuario que introduzca la vocal a elegir.

  scanf("%c",&vocal);                 //Mediante el scanf permitimos que el usuario pueda introducir la vocal deseada (%c), y guardarla como la variable vocal (&vocal).

  switch(vocal){      //Utilizamos switch para diferenciar cada caso. En caso de que se elija la a, imprimirá en pantalla una confirmación distinta a si elige la b o la e.

    case 'a': printf("Es la vocal a");break;  //Caso de que elija la a: Se imprime en pantalla confirmación. Es importante el break al final, dado que aisla las funciones de cada caso.
    case 'e': printf("Es la vocal e");break;  //Caso de que elija la e: Se imprime en pantalla confirmación. Es importante el break al final, dado que aisla las funciones de cada caso.
    case 'i': printf("Es la vocal i");break;  //Caso de que elija la i: Se imprime en pantalla confirmación. Es importante el break al final, dado que aisla las funciones de cada caso.
    case 'o': printf("Es la vocal o");break;  //Caso de que elija la o: Se imprime en pantalla confirmación. Es importante el break al final, dado que aisla las funciones de cada caso.
    case 'u': printf("Es la vocal u");break;  //Caso de que elija la u: Se imprime en pantalla confirmación. Es importante el break al final, dado que aisla las funciones de cada caso.
    default: printf("%c no es una vocal.",vocal); //Es buena costumbre establecer un default, para el momento en el que no se cumpla ningún caso.
  }

  /*  case 1: printf("Es el número 1");break;
      case 2: printf("Es el número 2");break;
      case 3: printf("Es el número 3");break; */    //Si trabajamos con números, no haría falta '' después de case.

  return 0;     //Gracias a poner return 0; podemos saber que la función ha terminado correctamente, y que nuestro programa no ha fallado en un punto a mitad de ejecución. Es una buena costumbre utilizarlo.
}
