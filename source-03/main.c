
#include <stdio.h>

#define TRUE 1
#define FALSE 0

int main(int argc, char **argv)
{
	/*int n, m ,r;
	char c;
	* 
	Exemplo de entrada formato
	scanf("%d %c %d",&n,&c,&m);
	r = n * 2;
	printf("Resultado: %d %c %d",n,c,m);*/
	
	/*Sintaxe dos Desvios condicionais
	 * 
	 * if (condicao) {
	 * 		BLOCO DE INSTRUCOES
	 * }
	 * 
	 * 
	 */ 
	/*
	int idade;
	while (TRUE){
		scanf("%d",&idade);
		if (idade >= 18){
			printf("Maior de idade\n");	
		}else{
			printf("Menor \nde \nidade");		
		}
	}*/
	
	
	/*Operadores de incrementação
	 * pós incremento  i++  
	 * pré incremento ++i
	 * pós decremento n--
	 * pré decremento --n*/
	int n = 10;
	//printf("%d\n",--n);
	//printf("%d\n",n);	
	
	n *= 5;
	n /= 5;
	n += 2;
	n -=2;
	n %=2; 
	printf("%d\n",n);
	

	return 0;
}

