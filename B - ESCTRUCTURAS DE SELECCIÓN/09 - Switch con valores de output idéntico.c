//Vamos a usar la sentencia switch para mostrar la equivalencia de una nota de la A a la F en Sobresaliente a Insuficiente.

#include <stdio.h> //Existen muchos tipos de librerías, las cuales nos otorgan la capacidad de realizar funciones, y se añaden precedidas por #include. "stdio" significa "standard input output" y ".h" significa "header". Nos sirve para poder poner cosas en pantalla y guardar datos.

int main (){      // //Esta es la función principal (main) que vamos a crear. "Int" quiere decir que es un número entero.

  char nota;      //Declaramos la variable nota, la cual será un caracter, por lo que la denominamos mediante char.

  printf("¿Cuál es tu nota? ");   //Parte textual en la que preguntamos al usuario cual es su nota en forma de letra.
  scanf("%c",&nota);              //Mediante scanf permitimos al usuario que introduzca dicha letra.

  switch (nota) {     //Utilizamos la sentencia switch para que el texto que se imprime en pantalla depende del input del usuario.
    case 'a':printf("Tu nota es Sobresaliente");break;    //En caso de que la letra introducida sea A, se imprimirá Sobresaliente. Es importante usar break; de lo contrario se solapará el output con el siguiente caso.
    case 'b':printf("Tu nota es Notable");break;          //En caso de que la letra introducida sea B, se imprimirá Notable. Es importante usar break; de lo contrario se solapará el output con el siguiente caso.
    case 'c':printf("Tu nota es Bien");break;             //En caso de que la letra introducida sea C, se imprimirá Bien. Es importante usar break; de lo contrario se solapará el output con el siguiente caso.
    case 'd':                                             //Tanto D como F significan que el usuario tiene una nota equivalente a Insuficiente. Para hacer esto, dejamos D vacía y no utilizamos break;, para que la función se solape y ahorrar código.
    case 'f':printf("Tu nota es Insuficiente");break;     //En caso de que la letra introducida sea D o F, se imprimirá Insuficiente. Es importante usar break; de lo contrario se solapará el output con el siguiente caso. Al ser el último, el siguiente caso es default.
    default: printf("Vuelve a intentarlo, las opciones son A, B, C, D y F.");break; //Este será el texto que se imprima cuando ningún caso se cumpla, gracias al uso de default.
  }

  return 0;   //Gracias a poner return 0; podemos saber que la función ha terminado correctamente, y que nuestro programa no ha fallado en un punto a mitad de ejecución. Es una buena costumbre utilizarlo.
}
