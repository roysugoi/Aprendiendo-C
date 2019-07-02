//Vamos a hacer suma, resta, multiplicaci�n y divisi�n. El operador de asignaci�n es el =.

#include <stdio.h> 		//Existen muchos tipos de librerías, las cuales nos otorgan la capacidad de realizar funciones, y se a�aden precedidas por #include. "stdio" significa "standard input output" y ".h" significa "header". Nos sirve para poder poner cosas en pantalla y guardar datos.

int main() 				//Esta es la funci�n principal (main) que vamos a crear. "Int" quiere decir que es un n�mero entero.
{
    int a = 10;			//Aqu� estamos asignando un valor (10) a una variable local, que es a.

    a += 10; 			//Es lo mismo usar esta expresi�n que a = a + 10. De esta forma usamos menos l�neas de c�digo que si nombramos dos variables. Si us�semos dos, podr�amos primero nombrar int x, y despu�s decir que x = a + 10, lo que nos dar�a el mismo resultado (20).

    /* En lo que respecta a resta, multiplicaci�n y divisi�n:

	a -= 5;				//Es lo mismo usar esta expresi�n que a = a - 5.

    a *= 2;				//Es lo mismo usar esta expresi�n que a = a * 2.

    a /= 2;				//Es lo mismo usar esta expresi�n que a = a / 2.

    */

    printf("El resultado es: %i",a);	//Imprimimos as� el resultado de la operaci�n a +=10, equivalente a (a = a + 10).

    return 0;			//Gracias a poner return 0; podemos saber que la funci�n ha terminado correctamente, y que nuestro programa no ha fallado en un punto a mitad de ejecuci�n. Es una buena costumbre utilizarlo.
}
