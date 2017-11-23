#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{	
int nota, piorNota,k = 1;
char nome[50], piorNome[50];

while (1){
	scanf("%d",&qtdAlunos);
	for (i =1; i <= qtdAlunos; i++){

		scanf("%s %d",&nome, &nota);
		if (i == 1){
			piorNota = nota;
			strcpy(piorNome, nome);
			continue;
		}
		if (nota < piorNota){
			piorNota = nota;
			strcpy(piorNome, nome);
		}else if(nota == piorNota) && (strcmp(nome, piorNome) == -1){
			piorNota = nota;
			strcpy(piorNome, nome);
		}
	}
	printf("Instancia %d\n",k);
	printf("%s\n",piorNome);
}

		return 0;
}

