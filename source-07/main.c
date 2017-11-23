#include <stdio.h>
#include <stdlib.h>
void calcularJuros(float * parcela, int qtdDias, float juros){		
	float valorJuros = (*parcela) * (qtdDias * juros)/100;
	*parcela = (*parcela) + valorJuros;
	
}
int main(int argc, char **argv)
{		
	float quibe = 200;
	//scanf("%f",&quibe);
	
	calcularJuros(&quibe,3,10);
	printf("%f",quibe);	
	return 0;
}

