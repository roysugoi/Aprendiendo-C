//En este ejercicio vamos a crear una herramienta que nos dice en base a la nota de un examen si un alumno est� o no aprobado.

#include <stdio.h>			//Existen muchos tipos de librerías, las cuales nos otorgan la capacidad de realizar funciones, y se a�aden precedidas por #include. "stdio" significa "standard input output" y ".h" significa "header". Nos sirve para poder poner cosas en pantalla y guardar datos.

int main(){					//Esta es la funci�n principal (main) que vamos a crear. "Int" quiere decir que es un número entero.

	float nota;				//Fijamos la variable REAL mediante float, dado que es muy probable que salga un decimal en una nota.

	printf("�Qu� nota has tenido en el examen?" );		//Parte textual en la que preguntamos al usuario su nota.

	scanf("%f",&nota);									//Mediante scanf habilitamos la posibilidad de que el usuario introduzca su nota. Al poder ser un número REAL usamos %f y lo guardamos como nota mediante &nota.

	if (nota >= 5){										//Condicionamos a que, si la nota es superior o igual a 5, se imprima un mensaje de aprobado.

		printf("Has aprobado");							//Parte textual en la que confirmamos al usuario que ha aprobado.

	}

	else {

		printf("No has aprobado" );						//Parte textual en la que confirmamos al usuario que no ha aprobado.

	}

	return 0;							//Gracias a poner return 0; podemos saber que la funci�n ha terminado correctamente, y que nuestro programa no ha fallado en un punto a mitad de ejecuci�n. Es una buena costumbre utilizarlo.

}
