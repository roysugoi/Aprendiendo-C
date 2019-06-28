//Aqu� vamos a ver e imprimir un ejemplo de los distintos tipos de datos que podemos usar, su tama�o en bytes en la memoria de la m�quina, y el rango. Despu�s, imprimimos los ejemplos.

#include <stdio.h>		//Las librer�as son muy importantes, y empiezan por #include. "stdio" significa "standard input output" y ".h" significa "header", o archivo de cabecera. Sirve para poder poner cosas en pantalla y guardar datos.

int main(){				//Comenzamos con int main(){}, lo cual quiere decir que trabajaremos con una funci�n PRINCIPAL que maneja n�meros enteros (int).
	
	char a = 'e';				//"Char" viene de character, y puede ser un elemento cualquiera, sea n�mero, letra o s�mbolo. Aqu� decimos que el caracter "a" pasa a ser "e". BYTES: 1, RANGO: 0 .. 255.
	
	short b = -15;				//BYTES: 2, RANGO: -128 .. 127.
	
	int c = 1024;				//BYTES: 2, RANGO: -32768 .. 32767.

	unsigned int d = 128;		//Es exactamente igual que un int pero solo puede ser positivo. BYTES: 2, RANGO: 0 .. 65535.
	
	long e = 123456;			//BYTES: 4, RANGO: -2147483648 .. 2147483637.
	
	float f = 15.678;			//BYTES: 4, RANGO: 1.2E-38 to 3.4E+38 y 6 decimales.
	
	double g = 871239.76123;	//BYTES: 8, RANGO: 2.3E-308 to 1.7E+308 y 15 decimales.
	
	printf("El char es %c \n",a);			//El % indica qu� tipo de dato es, al ser un char (pudiendo no ser un n�mero), se escribe %c. A continuaci�n, decimos que imprima el valor "a". \n sirve para crear una l�nea entre este y el siguiente rengl�n.
	
	printf("El short es %i \n",b);			//El % indica qu� tipo de dato es, al ser un short de un n�mero entero, se escribe %i. A continuaci�n, decimos que imprima el valor "b".\n sirve para crear una l�nea entre este y el siguiente rengl�n.
	
	printf("El int es %i \n",c);			//El % indica qu� tipo de dato es, al ser un int, se escribe %i. A continuaci�n, decimos que imprima el valor "c". \n sirve para crear una l�nea entre este y el siguiente rengl�n.
	
	printf("El unsigned int es %i \n",d);	//El % indica qu� tipo de dato es, al ser un int, se escribe %i. A continuaci�n, decimos que imprima el valor "d". \n sirve para crear una l�nea entre este y el siguiente rengl�n.

	printf("El long es %li \n",e);			//En el caso del long int se escribe %li. A continuaci�n, decimos que imprima el valor "e". \n sirve para crear una l�nea entre este y el siguiente rengl�n.
	
	printf("El float es %.2f \n",f);		//Al referirnos a un n�mero real con decimales usamos %f. El ".2" lo hemos a�adido porque no queremos much�simos decimales, con dos nos vale. Los decimales se redondean.
	
	printf("El double es %lf \n",g);		//En este caso usamos %lf, equivalente a long float, dado que es un n�mero con decimales.
	
	printf("%c %i %f",a,b,f);				//As� es como podemos poner en un mismo printf muchas variables seguidas, respetando el tipo de dato y el orden en el que los ponemos.
	
	return 0;			//Gracias a poner return 0; podemos saber que la funci�n ha terminado correctamente, y que nuestro programa no ha fallado en un punto a mitad de ejecuci�n. Es una buena costumbre utilizarlo.
}
