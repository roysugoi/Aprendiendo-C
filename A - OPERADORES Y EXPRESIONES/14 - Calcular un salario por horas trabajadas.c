//Vamos a hacer una herramienta con la que calculamos el salario de un empleado por sus horas trabajadas, conociendo su coste por hora.

#include <stdio.h> 		//Existen muchos tipos de librerías, las cuales nos otorgan la capacidad de realizar funciones, y se añaden precedidas por #include. "stdio" significa "standard input output" y ".h" significa "header". Nos sirve para poder poner cosas en pantalla y guardar datos.

int main() 				//Esta es la función principal (main) que vamos a crear. "Int" quiere decir que es un número entero.		
{
	
	float horas_trabajadas,coste_hora,salario;		//Como siempre, lo primero es indicar las variables, en este caso usamos flotantes.
	
	printf("¿Cuántas horas ha trabajado? ");		//Parte textual en la que preguntamos cuántas horas ha trabajado el empleado.
	
	scanf("%f",&horas_trabajadas);					//Mediante scanf, habilitamos la posibilidad de que el usuario introduzca dichas horas, y lo guardamos como horas_trabajadas mediante el símbolo &.
	
	printf("¿Cuál es el valor por hora? ");			//Parte textual en la que preguntamos cuánto cobra por hora el empleado.
	
	scanf("%f",&coste_hora);						//Mediante scanf, habilitamos la posibilidad de que el usuario introduzca el valor por hora, y lo guardamos como coste_hora mediante el símbolo &.
	
	salario = horas_trabajadas * coste_hora;		//Fórmula que usamos para calcular el salario, multiplicando las horas trabajadas por el coste de cada hora.
	
	printf("El salario a pagar es %.2f",salario);	//Parte textual del resultado, usamos número REAL, por tanto %.2f (.2 para que nos salgan dos decimales solo) y tras la coma argumentamos que queremos el resultado de la función salario.
		
    return 0;			//Gracias a poner return 0; podemos saber que la función ha terminado correctamente, y que nuestro programa no ha fallado en un punto a mitad de ejecución. Es una buena costumbre utilizarlo.
}
