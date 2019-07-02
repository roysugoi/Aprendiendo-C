//Vamos a calcular la cantidad de segundos que hay en las horas, minutos, y segundos que un usuario introduzca.

#include<stdio.h>									//Existen muchos tipos de librerías, las cuales nos otorgan la capacidad de realizar funciones, y se a�aden precedidas por #include. "stdio" significa "standard input output" y ".h" significa "header". Nos sirve para poder poner cosas en pantalla y guardar datos.

int main (){										//Esta es la funci�n principal (main) que vamos a crear. "Int" quiere decir que es un n�mero entero.
	
	int horas,minutos,segundos,t1,t2,t3,total;		//Como siempre, lo primero es indicar las variables, en este caso usamos números enteros (int).
	
	printf("N�mero de horas: ");					//Parte textual en la que preguntamos cu�ntas horas son.
	
	scanf("%i",&horas);								//Mediante scanf, habilitamos la posibilidad de que el usuario introduzca dichas horas. Guardarmos el n�mero entero (%i) como "horas" (&horas).
	
	printf("N�mero de minutos: ");					//Parte textual en la que preguntamos cu�ntos minutos son.
	
	scanf("%i",&minutos);							//Mediante scanf, habilitamos la posibilidad de que el usuario introduzca dichos minutos. Guardarmos el n�mero entero (%i) como "minutos" (&minutos).
	
	printf("N�mero de segundos: ");					//Parte textual en la que preguntamos cu�ntos segundos son.
	
	scanf("%i",&segundos);							//Mediante scanf, habilitamos la posibilidad de que el usuario introduzca dichos segundos. Guardarmos el n�mero entero (%i) como "segundos" (&segundos).
	
	t1 = horas * 3600;								//F�rmula para calcular los segundos por hora.
	
	t2 = minutos * 60;								//F�rmula para calcular los segundos por minuto.
	
	t3 = segundos;									//F�rmula para calcular los segundos y asignarlos a t3.
	
	total = t1 + t2 + t3;							//F�rmula para calcular la suma de todos los segundos que hay en t1, t2, y t3.
	
	printf("Eso son %i segundos",total);			//Parte textual en la que mostramos el resultado calculado, el cual es un n�mero entero (%i), de la funci�n "total".
	
	return 0;										//Gracias a poner return 0; podemos saber que la funci�n ha terminado correctamente, y que nuestro programa no ha fallado en un punto a mitad de ejecuci�n. Es una buena costumbre utilizarlo.
	
	}
