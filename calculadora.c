#include <stdio.h>

int main(void){
	int input = 0, //ENTRADA
		aux = 0, //VARIÁVEL AUXILIAR
		x = 0, y = 0, z = 0, a = 0, b = 0, c = 0, d = 0, //CONTADOR DE CEDULAS
		um 	= 1, //MOEDAS
		dois = 2, cinco = 5, dez = 10, vinte = 20, cinquenta = 50, cem = 100, //CÉDULAS
		*pX	= 0, *pY; //PONTEIROS

	scanf("%d", &input);

	if(input > 0){
		while(input > 0){
			if (input >= cem){
				pX = &cem;
				pY = &x;
			}else if(input >= cinquenta){
				pX = &cinquenta;
				pY = &y;
			}else if(input >= vinte){
				pX = &vinte;
				pY = &z;
			}else if(input >= dez){
				pX = &dez;
				pY = &a;
			}else if(input >= cinco){
				pX = &cinco;
				pY = &b;
			}else if(input >= dois){
				pX = &dois;
				pY = &c;
			}else if(input >= um){
				pX = &um;
				pY = &d;
			}

			while(input >= *pX){
				input -= *pX;
				aux++;
				*pY = aux;

			}
			aux = 0;

		}
		printf("Sao necessarias \n%d de (R$100.00), \n%d de (R$50.00), \n%d de (R$20.00), \n%d de (R$10.00), \n%d de (R$5.00), \n%d de (R$2.00)  \n%d de (R$1.00)\n", x, y, z, a, b, c, d);
	}else{
		printf("%s\n", "ERRO, valor invalido!!!");
		return 0;
	}
}