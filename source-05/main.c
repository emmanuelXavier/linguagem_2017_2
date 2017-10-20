#include <stdio.h>

int main(int argc, char **argv)
{
	
	char nomes[10][50];
	float medias[10];
    float n1, n2;
	int i;
	
	for (i = 0; i < 3; i++){
		printf("\nInforme o nome do aluno: ");
		scanf("%s",&nomes[i]);
		printf("\nInforme a nota 01 do aluno: ");
		scanf("%f",&n1);
		printf("\nInforme a nota 02 do aluno: ");
		scanf("%f",&n2);
		medias[i] = (n1+n2)/2;
	}
	
	printf("\n\nResultados\n\n");
	for (i = 0; i < 3; i++){
		
		if (medias[i] >= 7){
			printf("%s - media: %f - APROVADO",nomes[i], medias[i]);
		}
		else{
			printf("%s - media: %f - REPROVADO",nomes[i], medias[i]);		
		}
	}
		
	

	return 0;
}

