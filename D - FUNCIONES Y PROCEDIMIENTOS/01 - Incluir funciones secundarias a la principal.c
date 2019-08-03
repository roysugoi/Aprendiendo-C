//Programa comprendido por dos funciones (una sin retorno y otra con retorno de valor) para aprender a encadenar y reflejar dichas funciones en nuestra función principal.

#include <stdio.h>      //Existen muchos tipos de librerías, las cuales nos otorgan la capacidad de realizar funciones, y se añaden precedidas por #include. "stdio" significa "standard input output" y ".h" significa "header". Nos sirve para poder poner cosas en pantalla y guardar datos.

void saludo();          //Esto es un "prototipo". Con esta sentencia indicamos, debajo de la librería, que nuestro programa contiene la función void saludo. Hace que sea más eficiente, y es una buena práctica de programación.

int sumar();			      //Esto es un "prototipo". Con esta sentencia indicamos, debajo de la librería, que nuestro programa contiene la función int sumar. Hace que sea más eficiente, y es una buena práctica de programación.

int main(){             //Esta es la función principal (main) que vamos a crear. "Int" quiere decir que es un número entero.

	saludo();             //Indicamos en nuestra función principal que existe una función llamada saludo, y la "cogemos" para mostrarla en pantalla gracias a que la incluimos en nuestra función main.

	int a,b, suma=0;      //Indicamos nuestras variables locales dentro de la función main, en este caso vamos a sumar dos números (a y b) y operar una suma, la cual inicializamos en 0.

	printf("Introduce dos números: ");   //Parte textual en la que pedimos al usuario que introduzca dos números para ser sumados.

	scanf("%i %i",&a,&b); //Mediante scanf permitimos que el usuario pueda introducir dichos números (%i %i) y guardarlos como a y b mediante el uso de & (&a, &b).

	suma = sumar(a,b);    //Indicamos en nuestra función principal que la operación de sumar la vamos a realizar con el resultado que se obtiene de la función sumar, la cual está compuesta por a y b (a,b).

	printf("La suma es %i",suma);        //Parte textual en la que indicamos al usuario el resultado (%i) de la operación suma (,suma).

	return 0;             //Gracias a poner return 0; podemos saber que la función ha terminado correctamente, y que nuestro programa no ha fallado en un punto a mitad de ejecución. Es una buena costumbre utilizarlo.

}

void saludo(){          //Vamos a crear una función fuera de la principal (main). Esta función no devuelve un valor, por lo que utilizamos void, y llamamos a la función saludo.

	printf("Hola Rodrigo\n");  //Parte textual en la que saludamos al usuario.

}                       //Dado que no devuelve un resultado, no es necesario poner return 0; en este caso.

int sumar(int n1, int n2){   //Segunda función fuera de la principal en la que sí que vamos a recibir un resultado, por lo que usamos int + nombre que le asignamos, y entre paréntesis los "parámetros" con los que vamos a operar en dicha función.
                             //De manera automática el programa asigna el valor de a y b a n1 y n2, por lo que no tenemos que vincularlos de ninguna forma añadida.

	int suma=0;                //Establecemos las variables locales de nuestra función sumar. Inicializamos el valor de la operación suma en 0 para evitar errores.

	suma = n1 + n2;            //Esta función se va a encargar de ejecutar la operación de sumar los dos números introducidos por el usuario (a=n1, b=n2).

	return suma;               //Por último, dado que en este caso sí que obtenemos un retorno de valor, le indicamos al programa que retorne la suma obtenida (return suma;).
}
