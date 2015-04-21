/*Tabla de conversión de Celsius-Fahrenheit
 * Alex Nicolás Falcon Rodríguez
 * Lunes 21/04/2015
 */

#include <stdio.h>
const int ls = 300;	/*Limite Superiro*/
const int a = 20;	/*Aumento*/
const int li = 0;	/*Limite Inferior*/
int cels;
float fahr;

float getcelsius(int cels){
	fahr = ((cels) * (9. / 5. )) + ( 32. );
	return (fahr);
}

int main(void) {

	for (cels = li; cels <= ls; cels = cels + a) {

		printf ("Celsius 		 Fahrenheit\n");
		printf ("%d °			 %3.f F°\n", cels, (getcelsius(cels)));
	}

	return 0;
}