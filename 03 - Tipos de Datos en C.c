//Aquí vamos a ver e imprimir un ejemplo de los distintos tipos de datos que podemos usar, su tamaño en bytes en la memoria de la máquina, y el rango. Después, imprimimos los ejemplos.

#include <stdio.h>		//Las librerías son muy importantes, y empiezan por #include. "stdio" significa "standard input output" y ".h" significa "header", o archivo de cabecera. Sirve para poder poner cosas en pantalla y guardar datos.

int main(){				//Comenzamos con int main(){}, lo cual quiere decir que trabajaremos con una función PRINCIPAL que maneja números enteros (int).
	
	char a = 'e';				//"Char" viene de character, y puede ser un elemento cualquiera, sea número, letra o símbolo. Aquí decimos que el caracter "a" pasa a ser "e". BYTES: 1, RANGO: 0 .. 255.
	
	short b = -15;				//BYTES: 2, RANGO: -128 .. 127.
	
	int c = 1024;				//BYTES: 2, RANGO: -32768 .. 32767.

	unsigned int d = 128;		//Es exactamente igual que un int pero solo puede ser positivo. BYTES: 2, RANGO: 0 .. 65535.
	
	long e = 123456;			//BYTES: 4, RANGO: -2147483648 .. 2147483637.
	
	float f = 15.678;			//BYTES: 4, RANGO: 1.2E-38 to 3.4E+38 y 6 decimales.
	
	double g = 871239.76123;	//BYTES: 8, RANGO: 2.3E-308 to 1.7E+308 y 15 decimales.
	
	printf("El char es %c \n",a);			//El % indica qué tipo de dato es, al ser un char (pudiendo no ser un número), se escribe %c. A continuación, decimos que imprima el valor "a". \n sirve para crear una línea entre este y el siguiente renglón.
	
	printf("El short es %i \n",b);			//El % indica qué tipo de dato es, al ser un short de un número entero, se escribe %i. A continuación, decimos que imprima el valor "b".\n sirve para crear una línea entre este y el siguiente renglón.
	
	printf("El int es %i \n",c);			//El % indica qué tipo de dato es, al ser un int, se escribe %i. A continuación, decimos que imprima el valor "c". \n sirve para crear una línea entre este y el siguiente renglón.
	
	printf("El unsigned int es %i \n",d);	//El % indica qué tipo de dato es, al ser un int, se escribe %i. A continuación, decimos que imprima el valor "d". \n sirve para crear una línea entre este y el siguiente renglón.

	printf("El long es %li \n",e);			//En el caso del long int se escribe %li. A continuación, decimos que imprima el valor "e". \n sirve para crear una línea entre este y el siguiente renglón.
	
	printf("El float es %.2f \n",f);		//Al referirnos a un número real con decimales usamos %f. El ".2" lo hemos añadido porque no queremos muchísimos decimales, con dos nos vale. Los decimales se redondean.
	
	printf("El double es %lf \n",g);		//En este caso usamos %lf, equivalente a long float, dado que es un número con decimales.
	
	printf("%c %i %f",a,b,f);				//Así es como podemos poner en un mismo printf muchas variables seguidas, respetando el tipo de dato y el orden en el que los ponemos.
	
	return 0;			//Gracias a poner return 0; podemos saber que la función ha terminado correctamente, y que nuestro programa no ha fallado en un punto a mitad de ejecución. Es una buena costumbre utilizarlo.
}
