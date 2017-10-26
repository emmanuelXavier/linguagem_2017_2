#include <stdio.h>
#include <stdlib.h>


#define SAIR_SUCESSO 0
#define SAIR_FALHA 1

float calcularJuros(float parcela, int qtdDias, float juros){
	if ((juros < 0) || (parcela <= 0) || (qtdDias < 0))
		return -1;
		
	float valorJuros = parcela * (qtdDias * juros)/100;
	return valorJuros;
}

int main(int argc, char **argv)
{	
	
	float j = calcularJuros(1400,4,20);
	if (j == -1)
		printf("Dados invalidos");
	else
		printf("Juros da parcela: %.2f",j);


	return SAIR_SUCESSO;
}

