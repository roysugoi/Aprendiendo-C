//Vamos a indicar el importe que paga cada tipo de vehículo en un peaje.

#include <stdio.h>    //Existen muchos tipos de librerías, las cuales nos otorgan la capacidad de realizar funciones, y se añaden precedidas por #include. "stdio" significa "standard input output" y ".h" significa "header". Nos sirve para poder poner cosas en pantalla y guardar datos.

int main(){           //Esta es la función principal (main) que vamos a crear. "Int" quiere decir que es un número entero.

  int tipo, peaje;    //Declaramos nuestras variables, en este caso, el tipo de vehículo y el peaje a pagar, ambas serán números enteros (int).

  printf("Introduzca su tipo de vehículo, siendo:\n1 Turismo\n2 Motocicleta\n3 Autobús\n4 Camión\n\n"); //Parte textual en la que preguntamos al usuario su tipo de vehículo.

  scanf("%i",&tipo);  //Mediante scanf() permitimos al usuario introducir el tipo de vehículo (%i) y guardarlo como tipo (&tipo).

  switch (tipo) {     //Utilizamos switch para diferenciar cada tipo de vehículo.

    case 1: peaje = 8;    //En caso de que elija el tipo 1, imprimira la función indicada hasta el break;.
            printf("\nEl peaje a pagar es de %i€",peaje);break; //Parte textual en la que confirmamos el importe.
    case 2: peaje = 4;    //En caso de que elija el tipo 2, imprimira la función indicada hasta el break;.
            printf("\nEl peaje a pagar es de %i€",peaje);break; //Parte textual en la que confirmamos el importe.
    case 3: peaje = 20;   //En caso de que elija el tipo 3, imprimira la función indicada hasta el break;.
            printf("\nEl peaje a pagar es de %i€",peaje);break; //Parte textual en la que confirmamos el importe.
    case 4: peaje = 25;   //En caso de que elija el tipo 4, imprimira la función indicada hasta el break;.
            printf("\nEl peaje a pagar es de %i€",peaje);break; //Parte textual en la que confirmamos el importe.
    default:printf("\nEl tipo introducido es inválido");break;  //En caso de que no se cumpla ningún caso utilizamos default para imprimir el textoq ue deseemos.
  }

  return 0;   //Gracias a poner return 0; podemos saber que la función ha terminado correctamente, y que nuestro programa no ha fallado en un punto a mitad de ejecución. Es una buena costumbre utilizarlo.
}
