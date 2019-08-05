//Convertir de ºC a ºF o ºK en función de lo que el usuario elija en un menú posterior a la entrada de datos.

#include <stdio.h>         //Existen muchos tipos de librerías, las cuales nos otorgan la capacidad de realizar funciones, y se añaden precedidas por #include. "stdio" significa "standard input output" y ".h" significa "header". Nos sirve para poder poner cosas en pantalla y guardar datos.

float fah(float C);        //Esto es un "prototipo". Con esta sentencia indicamos, debajo de la librería, que nuestro programa contiene la función fah(float C). Hace que sea más eficiente, y es una buena práctica de programación.
float kel(float C);        //Esto es un "prototipo". Con esta sentencia indicamos, debajo de la librería, que nuestro programa contiene la función kel(float C). Hace que sea más eficiente, y es una buena práctica de programación.

int main(){                //Esta es nuestra función principal.

	int opc;                 //Esta es nuestra variable local. Dado que vamos a crear un menú, creamos una variable para almacenar el valor de la selección.

	float C,F=0,K=0;         //Estas variables locales son de tipo flotante, y representan cada una los distintos tipos de grados (Celsius, Fahrenheit, Kelvin).

	printf("Introduce los ºC: ");  //Parte textual en la que pedimos al usuario que introduzca los ºC.

	scanf("%f",&C);          //Mediante scanf permitimos que el usuario introduzca dichos ºC de tipo flotante (%f) y los guarda como el valor de C (&C).

	do {                     //Mediante DO, ejecutamos una primera parte del código de manera incondicional. Al ser un bucle do... while, primero se cargará el "Do" de manera incondicional.

		printf("\n1. Convertir a ºF");      //Parte textual en la que indicamos al usuario que vamos a convertir a ºF.
		printf("\n2. Convertir a ºK\n");    //Parte textual en la que indicamos al usuario que vamos a convertir a ºK.
		printf("\n3. Salir\n");             //Parte textual en la que indicamos al usuario que con esta opción sale del programa.
		printf("\nIntroduce la opción: ");  //Parte textual en la que pedimos al usuario que introduzca la opción.
		scanf("%i",&opc);                   //Mediante scanf permitimos que el usuario introduzca el número de la opción deseada.

		switch (opc) {       //Utilizamos switch para diferenciar y ejecutar una expresión (casos) en función de lo que el usuario introduzca.

			case 1: F = fah(C); printf("\nEso son %.2f ºF\n",F);break;  //Si el usuario intruduce 1, se cargará la expresión comprendida en el "case". Break hace que el programa sepa compartimentar los casos.
			case 2: K = kel(C); printf("\nEso son %.2f ºK\n",K);break;  //Si el usuario intruduce 2, se cargará la expresión comprendida en el "case". Break hace que el programa sepa compartimentar los casos.
		}

	} while(opc != 3);     //Si el usuario introduce la opción 3, el menú volverá a salir para que el usuario pueda elegir una opción válida.

	return 0;              //Gracias a poner return 0; podemos saber que la función ha terminado correctamente, y que nuestro programa no ha fallado en un punto a mitad de ejecución. Es una buena costumbre utilizarlo.
}

float fah(float C){      //Esta es nuestra función secundaria que se ejecuta durante el Case 1. Al ser un número flotanto usamos "float", llamamos a la función "fah" por Fahrenheit, e importamos el valor flotante de C (float C).
	float F=0;             //Variable local F que inicializamos en 0.
	F = (9*C) / 5 + 32;    //Fórmula que convierte ºC a ºF.
	return F;              //La función retorna un valor (F) a nuestra función principal para que el resultado se muestre en pantalla.
}

float kel(float C){      //Esta es nuestra función secundaria que se ejecuta durante el Case 1. Al ser un número flotanto usamos "float", llamamos a la función "kel" por Kelvin, e importamos el valor flotante de C (float C).
	float K=0;             //Variable local K que inicializamos en 0.
	K = C + 273.15;        //Fórmula que convierte ºC a ºK.
	return K;              //La función retorna un valor (K) a nuestra función principal para que el resultado se muestre en pantalla.
}
