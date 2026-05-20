/*
Realizar una multiplicacion entre dos numeros con un ciclo while.
*/

#include <stdio.h>


int main()
{
	int numero1, numero2;
	int acumulador = 0;
	int contador = 0;
	
	printf("Ingrese un numero: ");
	scanf("%d", &numero1);
	
	printf("Ingrese otro numero: ");
	scanf("%d", &numero2);
	
	while(contador < numero2)
	{
		acumulador = acumulador + numero1;
		contador = contador + 1;
	}
	
	printf("\n%d x %d = %d\n\n", 
			numero1, 
			numero2, 
			acumulador);
	
	return 0;
}