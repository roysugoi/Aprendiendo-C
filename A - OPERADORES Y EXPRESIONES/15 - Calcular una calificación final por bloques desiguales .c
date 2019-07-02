/* Un alumno quiere saber su calificación final en una asignatura.
Dicha calificación se compone de los siguientes porcentajes:

- 55% del promedio de sus tres calificaciones parciales.
- 30% de la calificación del examen final.
- 15% de la calificación de un trabajo final.*/

#include <stdio.h> 		//Existen muchos tipos de librerías, las cuales nos otorgan la capacidad de realizar funciones, y se añaden precedidas por #include. "stdio" significa "standard input output" y ".h" significa "header". Nos sirve para poder poner cosas en pantalla y guardar datos.

int main() 				//Esta es la función principal (main) que vamos a crear. "Int" quiere decir que es un número entero.
{
		int n1,n2,n3,promedio,examen_final,trabajo_final;							//Establecemos primero las variables que vamos a utilizar. Calcularemos primero cada apartado por separado, por lo que aunque estas son las variables, más adelante tenemos que inicializar las funciones que usaremos para calcular sus valores.

		int total_promedio=0,total_examen=0,total_trabajo=0,calificacion_final=0;	//Estas son las funciones que utilizaremos para calcular por separado el valor numérico de la calificación final.

		printf("Calificaciones de los tres parciales: ");							//Parte textual en la que preguntamos las calificaciones en los tres parciales.
		scanf("%i %i %i",&n1,&n2,&n3);												//Mediante scanf, habilitamos la posibilidad de que el usuario introduzca dichas calificaciones, y lo guardamos como n1, n2 y n3 mediante el símbolo & y en orden.

		printf("¿Cual es tu calificación en el examen final? ");					//Parte textual en la que preguntamos la calificación en el examen final.
		scanf("%i",&examen_final);													//Mediante scanf, habilitamos la posibilidad de que el usuario introduzca dicha calificación, y lo guardamos como examen_final mediante el símbolo &.

		printf("¿Cual es tu calificación en el trabajo final? ");					//Parte textual en la que preguntamos la calificación en el trabajo final.
		scanf("%i",&trabajo_final);													//Mediante scanf, habilitamos la posibilidad de que el usuario introduzca dicha calificación, y lo guardamos como trabajo_final mediante el símbolo &.

		promedio = (n1+n2+n3)/3;				//Esta es la fórmula que utilizamos para calcular la media aritmética de las tres calificaciones.

		total_promedio = promedio * 0.55;		//Calculamos el primer bloque de la calificación final global.
		total_examen =  examen_final * 0.3;		//Calculamos el segundo bloque de la calificación final global.
		total_trabajo = trabajo_final * 0.15;	//Calculamos el tercer bloque de la calificación final global.

		calificacion_final = total_promedio + total_examen + total_trabajo;		//Calculamos la calificación final global sumando los resultados de los tres bloques.

		printf("Tu nota final es: %i",calificacion_final);						//Parte textual en la que representamos el resultado en forma de número entero (%i) de la función calificación_final.

    return 0;			//Gracias a poner return 0; podemos saber que la función ha terminado correctamente, y que nuestro programa no ha fallado en un punto a mitad de ejecución. Es una buena costumbre utilizarlo.
}
