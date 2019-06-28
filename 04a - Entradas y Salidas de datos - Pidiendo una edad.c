//Con este ejemplo, vamos a solicitar al usuario que meta un dato, en vez de darlo nosotros.

#include <stdio.h> 		//Las librer�as son muy importantes, y empiezan por #include. "stdio" significa "standard input output" y ".h" significa "header", o archivo de cabecera. Sirve para poder poner cosas en pantalla y guardar datos.

int main() 				//Esta es la funci�n principal (main) que vamos a crear. "Int" quiere decir que es un n�mero entero.		
{
    int a;				//Primero fijamos las variables con las que vamos a trabajar. Vamos a usar un n�mero entero en este ejemplo, pero podr�amos usar un n�mero con decimales o un caracter (float, char...).
      
    printf("Edad: ");				//Preguntamos el usuario su edad y posteriormente mediante scanf permitiremos la entrada del dato por el usuario.
    
    scanf("%i",&a);					//Con %i decimos que el valor que tiene que poner es un n�mero entero. &a significa que vamos a guardar el dato que el usuario meta en la variable a.
    
    printf("Tu edad es %i \n",a);	//L�gicamente tenemos que imprimir el resutlado, por lo que volvemos a usar printf e imprimimos el resultado con el input del usuario.
    
    return 0;			//Gracias a poner return 0; podemos saber que la funci�n ha terminado correctamente, y que nuestro programa no ha fallado en un punto a mitad de ejecuci�n. Es una buena costumbre utilizarlo.
}
