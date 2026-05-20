/*
Realizar una multiplicacion entre dos numeros con un ciclo while.
*/

#include <stdio.h>
#include <stdlib.h>



int main()
{
	int a,b,acumulador=0,contador=0;
	
	printf("Ingrese un numero: ");
	scanf("%d",&a);
	printf("Ingrese otro numero: ");
	scanf("%d",&b);
	
	while(contador<b)
	{
		acumulador=acumulador+a;
		contador=contador+1;
	}
	
	printf("La multiplicacion: %d\n\n",acumulador);
	
	return 0;
}