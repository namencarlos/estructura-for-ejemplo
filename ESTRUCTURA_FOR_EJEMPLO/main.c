/*
El programa entrega en pantalla una tabla de multiplicar a partir de un número ingresado.
*/
#include <stdio.h>


int main()//main() o main(void) 
{
	int i,resultado,numero;
	
	printf("Por favor, ingrese un numero: ");
	scanf("%d", &numero);
	for(i = 1; i <= 10; i++)
	{
		resultado = numero * i;
		printf("\n%d X %d = %d",numero ,	i, resultado);	
	}
	
	return 0;
}