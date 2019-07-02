//Vamos a calcular la cantidad de segundos que hay en las horas, minutos, y segundos que un usuario introduzca.

#include<stdio.h>										//Existen muchos tipos de librerías, las cuales nos otorgan la capacidad de realizar funciones, y se añaden precedidas por #include. "stdio" significa "standard input output" y ".h" significa "header". Nos sirve para poder poner cosas en pantalla y guardar datos.

int main (){												//Esta es la función principal (main) que vamos a crear. "Int" quiere decir que es un número entero.

	int horas,minutos,segundos,t1,t2,t3,total;		//Como siempre, lo primero es indicar las variables, en este caso usamos números enteros (int).

	printf("Número de horas: ");			//Parte textual en la que preguntamos cuántas horas son.

	scanf("%i",&horas);								//Mediante scanf, habilitamos la posibilidad de que el usuario introduzca dichas horas. Guardarmos el número entero (%i) como "horas" (&horas).

	printf("Número de minutos: ");		//Parte textual en la que preguntamos cuántos minutos son.

	scanf("%i",&minutos);							//Mediante scanf, habilitamos la posibilidad de que el usuario introduzca dichos minutos. Guardarmos el número entero (%i) como "minutos" (&minutos).

	printf("Número de segundos: ");		//Parte textual en la que preguntamos cuántos segundos son.

	scanf("%i",&segundos);						//Mediante scanf, habilitamos la posibilidad de que el usuario introduzca dichos segundos. Guardarmos el número entero (%i) como "segundos" (&segundos).

	t1 = horas * 3600;								//fórmula para calcular los segundos por hora.

	t2 = minutos * 60;								//fórmula para calcular los segundos por minuto.

	t3 = segundos;										//fórmula para calcular los segundos y asignarlos a t3.

	total = t1 + t2 + t3;							//fórmula para calcular la suma de todos los segundos que hay en t1, t2, y t3.

	printf("Eso son %i segundos",total);			//Parte textual en la que mostramos el resultado calculado, el cual es un número entero (%i), de la función "total".

	return 0;													//Gracias a poner return 0; podemos saber que la función ha terminado correctamente, y que nuestro programa no ha fallado en un punto a mitad de ejecución. Es una buena costumbre utilizarlo.

	}
