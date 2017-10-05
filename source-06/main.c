#include <stdio.h>

int main(int argc, char **argv)
{
	
	int v[2][5];
	int i,j;
	
	
	for (i = 0; i < 2;i++){
		for (j=0; j < 5; j++){
			printf("Informe o valor da posicao[%d][%d]: ",i,j);
			scanf("%d",&v[i][j]);
		}
	}
	
	printf("\n\nValores\n\n");
	for (i = 0; i < 2;i++){
		for (j=0; j < 5; j++){
			printf(" %d ",v[i][j]);
		}
		printf("\n");
	}
	return 0;
}

