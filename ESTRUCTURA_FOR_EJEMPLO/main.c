/*
Realice la suma de los 100 primeros números. Utilizar el ciclo for
*/
#include <stdio.h>
#include <stdlib.h>



int main()//main() o main(void) 
{
	int i,multiplicacion,numero;
	
	printf("Por favor, ingrese un numero: ");
	scanf("%d",&numero);
	for(i=1;i<=9;i++)
	{
		multiplicacion=numero*i;
		printf("\n%d X %d = %d",numero,i,multiplicacion);	
	}
	
	return 0;
}