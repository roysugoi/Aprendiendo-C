//Vamos a hacer un cajero con un saldo inicial de 1000€.

#include <stdio.h>

int main (){

  int opcion;
  float ingreso,retirada,saldo=1000;

  printf("\tBienvenido al cajero virtual\n");
  printf("\n1.Ingreso en cuenta");
  printf("\n2.Retirar fondos");
  printf("\n3.Salir");
  printf("\nIntroduza el número de la opción: ");
  scanf("%i",&opcion);

  switch (opcion) {
    case 1: printf("Introduzca el total a ingresar: ");
            scanf("%f",&ingreso);
            saldo = saldo + ingreso;
            printf("El saldo total es: %f€",saldo);
            break;
    case 2: printf("Introduzca el total a retirar: ");
            scanf("%f",&retirada);
            if (retirada > saldo){
              printf("No dispone de fondos suficientes.");
            }
            else {
              saldo = saldo - retirada;
              printf("Ha retirado %f€ y le quedan %f€",retirada,saldo);
            }
            break;
    case 3: break;
    default:printf("Introduzca un valor válido");
  }
  return 0;

}
