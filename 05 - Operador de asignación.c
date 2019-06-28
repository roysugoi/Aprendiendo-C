//Con este ejemplo, vamos a hacer suma, resta, multiplicación y división. El operador de asignación es el =.

#include <stdio.h> 		//Las librerías son muy importantes, y empiezan por #include. "stdio" significa "standard input output" y ".h" significa "header", o archivo de cabecera. Sirve para poder poner cosas en pantalla y guardar datos.

int main() 				//Esta es la función principal (main) que vamos a crear. "Int" quiere decir que es un número entero.		
{
    int a = 10;			//Aquí estamos asignando un valor (10) a una variable local, que es a.
    
    a += 10; 			//Es lo mismo usar esta expresión que a = a + 10. De esta forma usamos menos líneas de código que si nombramos dos variables. Si usásemos dos, podríamos primero nombrar int x, y después decir que x = a + 10, lo que nos daría el mismo resultado (20).
    
    /* En lo que respecta a resta, multiplicación y división:
	
	a -= 5;				//Es lo mismo usar esta expresión que a = a - 5.
    
    a *= 2;				//Es lo mismo usar esta expresión que a = a * 2.
    
    a /= 2;				//Es lo mismo usar esta expresión que a = a / 2.
    
    */
	   
    printf("El resultado es: %i",a);	//Imprimimos así el resultado de la operación a +=10, equivalente a (a = a + 10).
    
    return 0;			//Gracias a poner return 0; podemos saber que la función ha terminado correctamente, y que nuestro programa no ha fallado en un punto a mitad de ejecución. Es una buena costumbre utilizarlo.
}
