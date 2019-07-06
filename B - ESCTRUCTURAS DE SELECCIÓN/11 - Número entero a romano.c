//Vamos a ver cómo convertir un número entero a romano.

#include <stdio.h>    //Existen muchos tipos de librerías, las cuales nos otorgan la capacidad de realizar funciones, y se añaden precedidas por #include. "stdio" significa "standard input output" y ".h" significa "header". Nos sirve para poder poner cosas en pantalla y guardar datos.

int main (){          //Esta es la función principal (main) que vamos a crear. "Int" quiere decir que es un número entero.

  int n1, unidades, decenas, centenas, millares; //Declaramos nuestras variables a usar, en este caso números enteros (int) que usaremos para las sentencias Switch.

  printf("Introduce el número: ");  //Parte textual en la que pedimos al usuario que introduzca el número a convertir.
  scanf("%i",&n1);    //Mediante scanf permitimos que el usuario introduzca dicho número.

  unidades = n1%10; n1 = n1/10;   //Si cogemos n1, y lo dividimos entre 10, la expresión n1%10 lo que hace es coger el resto y aplicarlo al case dentro del switch. Posteriormente, coge n1 lo divide entre 10, para pasar n1 a la siguiente función.
  decenas = n1%10; n1 = n1/10;    //Si cogemos n1, y lo dividimos entre 10, la expresión n1%10 lo que hace es coger el resto y aplicarlo al case dentro del switch. Posteriormente, coge n1 lo divide entre 10, para pasar n1 a la siguiente función.
  centenas = n1%10; n1 = n1/10;   //Si cogemos n1, y lo dividimos entre 10, la expresión n1%10 lo que hace es coger el resto y aplicarlo al case dentro del switch. Posteriormente, coge n1 lo divide entre 10, para pasar n1 a la siguiente función.
  millares = n1%10; n1 = n1/10;   //Si cogemos n1, y lo dividimos entre 10, la expresión n1%10 lo que hace es coger el resto y aplicarlo al case dentro del switch.

  switch(millares){               //Establecemos las reglas mediante la sentencia switch para mostrar los millares.
		case 1: printf("M");break;    //En caso de que el resultado sea int = 1, se imprimirá M, representando el valor 1000.
		case 2: printf("MM");break;   //En caso de que el resultado sea int = 2, se imprimirá MM, representando el valor 2000.
		case 3: printf("MMM");break;  //En caso de que el resultado sea int = 2, se imprimirá MMM, representando el valor 3000.
  	}

	switch(centenas){               //Establecemos las reglas mediante la sentencia switch para mostrar las centenas.
		case 1: printf("C");break;    //En caso de que el resultado sea int = 1, se imprimirá C, representando el valor 100.
		case 2: printf("CC");break;   //En caso de que el resultado sea int = 1, se imprimirá CC, representando el valor 200.
		case 3: printf("CCC");break;  //En caso de que el resultado sea int = 1, se imprimirá CCC, representando el valor 300.
		case 4: printf("CD");break;   //En caso de que el resultado sea int = 1, se imprimirá CD, representando el valor 400.
		case 5: printf("D");break;    //En caso de que el resultado sea int = 1, se imprimirá D, representando el valor 500.
		case 6: printf("DC");break;   //En caso de que el resultado sea int = 1, se imprimirá DC, representando el valor 600.
		case 7: printf("DCC");break;  //En caso de que el resultado sea int = 1, se imprimirá DCC, representando el valor 700.
		case 8: printf("DCCC");break; //En caso de que el resultado sea int = 1, se imprimirá DCCC, representando el valor 800.
		case 9: printf("CM");break;   //En caso de que el resultado sea int = 1, se imprimirá CM, representando el valor 900.
	  }

	switch(decenas){                //Establecemos las reglas mediante la sentencia switch para mostrar las decenas.
		case 1: printf("X");break;    //En caso de que el resultado sea int = 1, se imprimirá X, representando el valor 10.
		case 2: printf("XX");break;   //En caso de que el resultado sea int = 1, se imprimirá XX, representando el valor 20.
		case 3: printf("XXX");break;  //En caso de que el resultado sea int = 1, se imprimirá XXX, representando el valor 30.
		case 4: printf("XL");break;   //En caso de que el resultado sea int = 1, se imprimirá XL, representando el valor 40.
		case 5: printf("L");break;    //En caso de que el resultado sea int = 1, se imprimirá L, representando el valor 50.
		case 6: printf("LX");break;   //En caso de que el resultado sea int = 1, se imprimirá LX, representando el valor 60.
		case 7: printf("LXX");break;  //En caso de que el resultado sea int = 1, se imprimirá LXX, representando el valor 70.
		case 8: printf("LXXX");break; //En caso de que el resultado sea int = 1, se imprimirá LXXX, representando el valor 80.
		case 9:	printf("XC");break;   //En caso de que el resultado sea int = 1, se imprimirá XC, representando el valor 90.
	  }

	switch(unidades){               //Establecemos las reglas mediante la sentencia switch para mostrar las unidades.
		case 1: printf("I");break;    //En caso de que el resultado sea int = 1, se imprimirá I, representando el valor 1.
		case 2: printf("II");break;   //En caso de que el resultado sea int = 1, se imprimirá II, representando el valor 2.
		case 3: printf("III");break;  //En caso de que el resultado sea int = 1, se imprimirá III, representando el valor 3.
		case 4: printf("IV");break;   //En caso de que el resultado sea int = 1, se imprimirá IV, representando el valor 4.
		case 5: printf("V");break;    //En caso de que el resultado sea int = 1, se imprimirá V, representando el valor 5.
		case 6: printf("VI");break;   //En caso de que el resultado sea int = 1, se imprimirá VI, representando el valor 6.
		case 7: printf("VII");break;  //En caso de que el resultado sea int = 1, se imprimirá VII, representando el valor 7.
		case 8: printf("VIII");break; //En caso de que el resultado sea int = 1, se imprimirá VIII, representando el valor 8.
		case 9:	printf("IX");break;   //En caso de que el resultado sea int = 1, se imprimirá IX, representando el valor 9.
	  }

  return 0; 	//Gracias a poner return 0; podemos saber que la función ha terminado correctamente, y que nuestro programa no ha fallado en un punto a mitad de ejecución. Es una buena costumbre utilizarlo.
}
