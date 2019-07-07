//Vamos a hacer un cajero con un saldo inicial de 1000€.

#include <stdio.h>  //Existen muchos tipos de librerías, las cuales nos otorgan la capacidad de realizar funciones, y se añaden precedidas por #include. "stdio" significa "standard input output" y ".h" significa "header". Nos sirve para poder poner cosas en pantalla y guardar datos.

int main (){        //Esta es la función principal (main) que vamos a crear. "Int" quiere decir que es un número entero.

  int opcion;       //Declaramos las variables que vamos a utilizar. La primera es un número entero para elegir una opción del menú.
  float ingreso,retirada,saldo=1000;    //Las demás variables tienen la posibilidad de tener decimales, por lo que usamos float, y establecemos además un saldo inicial.

  printf("\tBienvenido al cajero virtual\n");     /*Parte textual en la que creamos un pequeño título. \t significa que vamos a tabular el texto.*/
  printf("\n1.Ingreso en cuenta");                /*Parte textual en la que creamos la primera opción. \n significa que vamos a meter una línea nueva.*/
  printf("\n2.Retirar fondos");                   /*Parte textual en la que creamos la segunda opción. \n significa que vamos a meter una línea nueva.*/
  printf("\n3.Salir");                            /*Parte textual en la que creamos la tercera opción. \n significa que vamos a meter una línea nueva.*/
  printf("\nIntroduza el número de la opción: "); /*Parte textual en la que pedimos al usuario que introduzca la opción que desea. \n significa que vamos a meter una línea nueva.*/
  scanf("%i",&opcion);    //Mediante scanf permitimos que el usuario introduzca el número de la opción (%i) y lo guarde como opcion (&opcion).

  switch (opcion) {       //Utiizaremos switch para crear diferentes outputs en función de la opción seleccionada.
  }
    case 1: printf("Introduzca el total a ingresar: "); //Parte textual en la que se imprime y pregunta cuanto quiere ingresar el usuario.
            scanf("%f",&ingreso);                       //Mediante scanf permitimos que el usuario introduzca el número de euros a ingresar, y lo guardamos como ingreso (&ingreso).
            saldo = saldo + ingreso;                    //Fórmula que usaremos para calcular el saldo y dar error si no hay fondos.
            printf("El saldo total es: %f€",saldo);     //Parte textual en la que confirmamos el saldo total del que se dispone.
            break;                                      //Usamos break para separar casos.
    case 2: printf("Introduzca el total a retirar: ");  //Parte textual en la que preguntamos por el dinero a retirar.
            scanf("%f",&retirada);                      //Mediante scanf permitimos que el usuario introduzca la cantidad en euros a retirar.
            if (retirada > saldo){                      //Condicional mediante if, en caso de que la cantidad retirada sea mayor al saldo, informa de que no hay fondos disponibles.
              printf("No dispone de fondos suficientes."); //Confirmación textual de que no hay fondos.
            }
            else {                                      //Si no se cumple el if, entra en juego el else, con la función que viene a continuación.
              saldo = saldo - retirada;                 //Fórmula que usaremos para calcular el saldo y dar el resultado final del saldo.
              printf("Ha retirado %f€ y le quedan %f€",retirada,saldo); //Parte textual en la que se muestra el saldo tras la retirada y cuánto se ha retirado.
            }
            break;                                      //Usamos break para separar casos.
    case 3: break;                                      //Usamos break para separar casos.
    default:printf("Introduzca un valor válido");       //Parte textual en la que se imprime la confirmación de que no se ha introducido un valor válido del menú.
  }
  return 0;    //Gracias a poner return 0; podemos saber que la función ha terminado correctamente, y que nuestro programa no ha fallado en un punto a mitad de ejecución. Es una buena costumbre utilizarlo.
  }
