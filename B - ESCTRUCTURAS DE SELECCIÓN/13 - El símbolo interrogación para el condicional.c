//Vamos a ver cómo convertir un número entero a romano.

#include <stdio.h>    //Existen muchos tipos de librerías, las cuales nos otorgan la capacidad de realizar funciones, y se añaden precedidas por #include. "stdio" significa "standard input output" y ".h" significa "header". Nos sirve para poder poner cosas en pantalla y guardar datos.

int main (){          //Esta es la función principal (main) que vamos a crear. "Int" quiere decir que es un número entero.

int n1;

printf("Introduce un número: ");
scanf("%i",&n1);

(n1%2==0) ? printf("El número es par") : printf("El número es impar");

return 0;
}
