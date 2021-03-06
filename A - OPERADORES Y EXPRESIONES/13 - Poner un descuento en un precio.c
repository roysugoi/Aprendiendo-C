//Vamos a hacer un ejercicio en el que aplicamos un descuento en el precio de una tienda.

#include <stdio.h> 		//Existen muchos tipos de librerías, las cuales nos otorgan la capacidad de realizar funciones, y se añaden precedidas por #include. "stdio" significa "standard input output" y ".h" significa "header". Nos sirve para poder poner cosas en pantalla y guardar datos.

int main() 				//Esta es la función principal (main) que vamos a crear. "Int" quiere decir que es un número entero.
{

	float total_compra, descuento, precio;				//Como siempre, lo primero es indicar las variables, en este caso flotantes por ser precios, y muy probablemente ser números con decimales.

	printf("Total de la compra: ");						//Parte textual en la que preguntamos cuánto se ha gastado el cliente.

	scanf("%f",&total_compra);							//Mediante scanf, habilitamos la posibilidad de que el usuario meta el importe, y lo guardamos como total_compra mediante el símbolo &.

	descuento = total_compra * 0.15;					//Esta es la fórmula que utilizaremos para calcular el importe que se descuenta del precio que ha pagado.

	precio = total_compra - descuento;					//Esta es la fórmula final en la que computamos el total a pagar por el cliente tras el descuento.

	printf("El total de la compra es %.2f €",precio);	//Parte textual del resultado, usamos número REAL, por tanto %.2f (.2 para que nos salgan dos decimales solo) y tras la coma argumentamos que queremos el resultado de la función precio.

    return 0;			//Gracias a poner return 0; podemos saber que la función ha terminado correctamente, y que nuestro programa no ha fallado en un punto a mitad de ejecución. Es una buena costumbre utilizarlo.
}
