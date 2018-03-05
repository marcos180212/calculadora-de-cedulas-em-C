#include <stdio.h>

int main()
{
	int cedulas[7] = {100,50,20,10,5,2,1}; // vetor com todos os tipos de cedulas;
	int i, n, count = 0;
	
	scanf("%d", &n); // entrada do valor;
	
	i = 0;
	while(n > 0) // loop até o valor se igualar a zero;
	{
		if(n < cedulas[i]){ // verifica se o valor e menor que o tipo de cedula;
			i++;
			count = 0;
		}else
		{
			n -= cedulas[i]; // decrementa de n o valor do tipo de cedula atual;
			count++;
			if(n < cedulas[i])
			{
				printf("%d nota(s) de R$ %d,00\n", count, cedulas[i]);
				
			}
		}
	}
	return 0;
}