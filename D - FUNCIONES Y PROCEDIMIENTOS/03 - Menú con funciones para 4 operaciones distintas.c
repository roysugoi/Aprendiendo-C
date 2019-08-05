//Hacer un programa que muestre un menú con las tareas: sumar, restar, multiplicar y dividir, y mantenga el menú disponible después de la primera operación.

#include <stdio.h>         //Existen muchos tipos de librerías, las cuales nos otorgan la capacidad de realizar funciones, y se añaden precedidas por #include. "stdio" significa "standard input output" y ".h" significa "header". Nos sirve para poder poner cosas en pantalla y guardar datos.

	void menu();             //Esto es un "prototipo". Con esta sentencia indicamos, debajo de la librería, que nuestro programa contiene la función void menu(). Hace que sea más eficiente, y es una buena práctica de programación.
	void sumar();            //Esto es un "prototipo". Con esta sentencia indicamos, debajo de la librería, que nuestro programa contiene la función void sumar(). Hace que sea más eficiente, y es una buena práctica de programación.
	void restar();           //Esto es un "prototipo". Con esta sentencia indicamos, debajo de la librería, que nuestro programa contiene la función void restar(). Hace que sea más eficiente, y es una buena práctica de programación.
	void mult();             //Esto es un "prototipo". Con esta sentencia indicamos, debajo de la librería, que nuestro programa contiene la función void mult(). Hace que sea más eficiente, y es una buena práctica de programación.
	void dividir();          //Esto es un "prototipo". Con esta sentencia indicamos, debajo de la librería, que nuestro programa contiene la función void dividir(). Hace que sea más eficiente, y es una buena práctica de programación.

int main(){                //Esta es nuestra función principal. En este caso vamos a mostrar la función de menú, para que muestre en pantalla al iniciar las opciones que queramos que el usuario tenga a su disposición.

	menu();                  //Mediante esta expresión llamamos a la función menú para que muestre su valor o contenido en pantalla al comenzar el programa.

	return 0;                //Gracias a poner return 0; podemos saber que la función ha terminado correctamente, y que nuestro programa no ha fallado en un punto a mitad de ejecución. Es una buena costumbre utilizarlo.
}
void menu(){               //Esta será nuestra primera función secundaria. Su utilidad será la de mostrar un menú con 5 opciones al usuario, y cada opción que sea elegida a su vez se encargue de "cargar" la función solicitada.

	int opc;                 //Esta es nuestra variable local. El usuario introducirá el número de la función que quiere cargar (sumar, restar, etc).

	do{                           	//Mediante DO, ejecutamos una primera parte del código de manera incondicional. Al ser un bucle do... while, primero se cargará el "Do" de manera incondicional.
		printf("\n1. Sumar.");        //Parte textual en la que indicamos la opción 1 (sumar).
		printf("\n2. Restar.");       //Parte textual en la que indicamos la opción 2 (restar).
		printf("\n3. Multiplicar.");  //Parte textual en la que indicamos la opción 3 (multiplicar).
		printf("\n4. Dividir.");      //Parte textual en la que indicamos la opción 4 (dividir).
		printf("\n5. Salir.\n");      //Parte textual en la que indicamos la opción 5 (salir).
		printf("\nOpción: ");         //Parte textual en la que solicitamos al usuario que introduzca su elección.
		scanf("%i",&opc);             //Mediante scanf permitimos que el usuario introduzca el número de la opción.

		switch (opc) {                //Utilizamos switch para diferenciar y ejecutar una expresión (casos) en función de lo que el usuario introduzca.
			case 1: sumar();break;      //Si el usuario intruduce 1, se cargará la función sumar(). Break hace que el programa sepa compartimentar los casos.
			case 2:	restar();break;     //Si el usuario intruduce 2, se cargará la función restar(). Break hace que el programa sepa compartimentar los casos.
			case 3:	mult();break;       //Si el usuario intruduce 3, se cargará la función mult(). Break hace que el programa sepa compartimentar los casos.
			case 4:	dividir();break;    //Si el usuario intruduce 4, se cargará la función dividir(). Break hace que el programa sepa compartimentar los casos.
		}

	}while(opc != 5);               //Esta expresión quiere decir que mientras (while) el valor de "opc" no sea 5, siempre se muestre el menú en pantalla. Cuando sea 5, el programa terminará.
}

	void sumar(){                   //Esta es la función secundaria que permitirá la suma de dos dígitos introducidos por el usuario.
		int n1, n2, suma=0;           //Estas son las variables locales que pedimos al usuario (n1 y n2) y la operación que realizaremos en esta función (suma) la cual inicializamos a 0.
		printf("\nIntroduce dos números: "); //Parte textal en la que pedimos al usuario que introduzca dos números.
		scanf("%i %i",&n1,&n2);       //Mediante scanf permitimos que el usuario introduzca dichos números (%i %i) y los guarde como n1 y n2 (&n1, &n2).
		suma=n1+n2;                   //La función que hemos creado ejecutará esta operación de suma con los números recogidos (n1 y n2).
		printf("\nLa suma es %i\n",suma);      //Parte textal en la que confirmamos al usuario el resultado de la operación con los números introducidos.
	}

	void restar(){                  //Esta es la función secundaria que permitirá la resta de dos dígitos introducidos por el usuario.
		int n1, n2, resta=0;          //Estas son las variables locales que pedimos al usuario (n1 y n2) y la operación que realizaremos en esta función (resta) la cual inicializamos a 0.
		printf("\nIntroduce dos números: ");  //Parte textal en la que pedimos al usuario que introduzca dos números.
		scanf("%i %i",&n1,&n2);       //Mediante scanf permitimos que el usuario introduzca dichos números (%i %i) y los guarde como n1 y n2 (&n1, &n2).
		resta=n1-n2;                  //La función que hemos creado ejecutará esta operación de resta con los números recogidos (n1 y n2).
		printf("\nLa resta es %i\n",resta);     //Parte textal en la que confirmamos al usuario el resultado de la operación con los números introducidos.
	}

	void mult(){                    //Esta es la función secundaria que permitirá la multiplicación de dos dígitos introducidos por el usuario.
		int n1, n2, mult=0;           //Estas son las variables locales que pedimos al usuario (n1 y n2) y la operación que realizaremos en esta función (multiplicar) la cual inicializamos a 0.
		printf("\nIntroduce dos números: ");  //Parte textal en la que pedimos al usuario que introduzca dos números.
		scanf("%i %i",&n1,&n2);       //Mediante scanf permitimos que el usuario introduzca dichos números (%i %i) y los guarde como n1 y n2 (&n1, &n2).
		mult=n1*n2;                   //La función que hemos creado ejecutará esta operación de multiplicación con los números recogidos (n1 y n2).
		printf("\nLa multip. es %i\n",mult);    //Parte textal en la que confirmamos al usuario el resultado de la operación con los números introducidos.
	}

	void dividir(){                 //Esta es la función secundaria que permitirá la división de dos dígitos introducidos por el usuario.
		int n1, n2, div=0;            //Estas son las variables locales que pedimos al usuario (n1 y n2) y la operación que realizaremos en esta función (dividir) la cual inicializamos a 0.
		printf("\nIntroduce dos números: ");  //Parte textal en la que pedimos al usuario que introduzca dos números.
		scanf("%i %i",&n1,&n2);       //Mediante scanf permitimos que el usuario introduzca dichos números (%i %i) y los guarde como n1 y n2 (&n1, &n2).
		div=n1/n2;                    //La función que hemos creado ejecutará esta operación de división con los números recogidos (n1 y n2).
		printf("\nLa división es %i\n",div);    //Parte textal en la que confirmamos al usuario el resultado de la operación con los números introducidos.
	}
