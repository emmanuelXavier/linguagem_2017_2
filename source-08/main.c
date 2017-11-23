#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv){
	FILE * arquivo,* fbusca, *escrita;
	char nome[50],busca[50], telefone[10];
	_Bool encontrado = 0;
	
	fbusca = fopen("dados.db","r");
	if (fbusca == NULL)
	   printf("Falha ao abrir o arquivo");
	   
	printf("\n\nMINHA AGENDA\n\n");
	printf("Informe o contato que está procurando: ");
	scanf("%s",busca);
	while (1){
		if (fscanf(fbusca,"%s %s",nome, telefone) != 2){
			break;
		}
		if (strcmp(nome,busca) == 0){
			printf("Registro encontrado: %s %s\n",nome,telefone);
			encontrado = 1;
		}
	}
	
	if (encontrado == 0)
		printf("Registro nao encontrado.\n\n");
	
	arquivo = fopen("dados.db","r");
	if (arquivo == NULL)
	   printf("Falha ao abrir o arquivo");
	printf("\n\nTODOS OS REGISTROS\n\n");

	while (1){
		if (fscanf(arquivo,"%s %s",nome, telefone) != 2){
			break;
		}
		printf("%s %s\n\n",nome, telefone);	
	}
	
	escrita = fopen("dados.db","a");
	printf("Informe o nome e telefone: ");
	scanf("%s %s",nome,telefone);
	fprintf(escrita,"%s %s\n",nome,telefone);
	fclose(arquivo);	
	fclose(escrita);
	fclose(fbusca);	
}

