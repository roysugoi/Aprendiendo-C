//Con este ejercicio vamos a calcular la factura de la luz seg�n el gasto de corriente el�ctrica. Para un gasto menor de 1.000Kwh la tarifa es 1.2, entre 1.OOO y 1.850Kwh es 1.0 y mayor de 1.85OKwh 0.9.

#include <stdio.h>			//Existen muchos tipos de librer�as, las cuales nos otorgan la capacidad de realizar funciones, y se a�aden precedidas por #include. "stdio" significa "standard input output" y ".h" significa "header". Nos sirve para poder poner cosas en pantalla y guardar datos.

#define tarifa1 1.2			//Mediante #define, declaramos las macros, que son variables globales que podemos usar con su valor en cualquier momento. Esto permite hacer cambios en el futuro en todas las operaciones que involucren a estos valores de una manera centralizada.
#define tarifa2	1.0			//Mediante #define, declaramos las macros, que son variables globales que podemos usar con su valor en cualquier momento. Esto permite hacer cambios en el futuro en todas las operaciones que involucren a estos valores de una manera centralizada.
#define tarifa3	0.9			//Mediante #define, declaramos las macros, que son variables globales que podemos usar con su valor en cualquier momento. Esto permite hacer cambios en el futuro en todas las operaciones que involucren a estos valores de una manera centralizada.
#define preciokwh 0.1		//Mediante #define, declaramos las macros, que son variables globales que podemos usar con su valor en cualquier momento. Esto permite hacer cambios en el futuro en todas las operaciones que involucren a estos valores de una manera centralizada.

int main(){					//Esta es la funci�n principal (main) que vamos a crear. "Int" quiere decir que es un n�mero entero.
	
	int kwh;							//Esta es la funci�n principal (main) que vamos a crear. "Int" quiere decir que es un n�mero entero.
	
	float tarifa,factura;				//Declaramos nuestras variables locales, que van a ser números reales.
	
	printf("kWh consumidos: ");			//Parte textual en la que preguntamos los kWh consumidos por el cliente.
	
	scanf("%i",&kwh);					//Mediante scanf pedimos al usuario un n�mero entero (%i) y lo guardamos como kwh (&kwh).
	
	if (kwh < 1000){					//Mediante el condicional IF, establecemos la regla de que si kwh es menor a 1000, se aplique la tarifa expresada a continuaci�n.
		
		tarifa = kwh * tarifa1;			//Mediante esta f�rmula, y utilizando el valor de la macro, calculamos el coste por kWh en funci�n de la tarifa aplicada.
	}
	
	if (kwh >= 1000 && kwh < 1850){		//Mediante el condicional IF, establecemos la regla de que si kwh es mayor o igual que 1000, o tambi�n (&&) menor a 1850, se aplique la tarifa expresada a continuaci�n.
		
		tarifa = kwh * tarifa2;			//Mediante esta f�rmula, y utilizando el valor de la macro, calculamos el coste por kWh en funci�n de la tarifa aplicada.
	}
	
	if (kwh >= 1850){					//Mediante el condicional IF, establecemos la regla de que si kwh es mayor o igual que 1850, se aplique la tarifa expresada a continuaci�n.
		
		tarifa = kwh * tarifa3;			//Mediante esta f�rmula, y utilizando el valor de la macro, calculamos el coste por kWh en funci�n de la tarifa aplicada.
	}

	factura = tarifa * preciokwh;		//Una vez nuestro programa elija el rango tarifario, calculamos el importe final de la factura multiplicando por el precio por kWh.

	printf("El total a pagar es %.2f euros",factura);		//Parte textual en la que mostramos al usuario el importe final a pagar.

	return 0;							//Gracias a poner return 0; podemos saber que la funci�n ha terminado correctamente, y que nuestro programa no ha fallado en un punto a mitad de ejecuci�n. Es una buena costumbre utilizarlo.

}
