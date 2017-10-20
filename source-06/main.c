#include <stdio.h>

int opcao;

void mostrarMenu(){
	int opcao = 0;
	printf("Menu do programa\n1. Cadastrar produtos\n2.Alterar o estoque\n3.Baixar estoque\nSelecione uma das opcoes acima: %d",opcao);
}

int mostrarMenu2(){
	int opcao;
	printf("Menu do programa\n1. Cadastrar produtos\n2.Alterar o estoque\n3.Baixar estoque\n4.Sair\nSelecione uma das opcoes acima: ");
	scanf("%d",&opcao);
	return opcao;
}




int main(int argc, char **argv)
{
	int res; 
	res = mostrarMenu2();	
	
	printf("O retorno foi %d",res);

	scanf("%d",&opcao);
	return 0;
}

