/*
Realizar una multiplicacion entre dos numeros con un ciclo while.
*/

#include <stdio.h>
#include <stdlib.h>



int main()
{
	int numero,contador=1,multiplicacion;
	
	printf("Ingrese un numero: ");
	scanf("%d",&numero);
	
	
	while(contador<9)
	{
		multiplicacion=numero*contador;
		printf("\n%d X %d = %d",numero,contador,multiplicacion);
		contador=contador+1;
	}
	
	return 0;
}