#include <stdio.h>
#include <stdlib.h>
int n, obs[50];
int mmc(int n, int *obs) {
	
	int divisivel, i,j, k=0, mmcr[50];
	int divisores[10] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};

	for (j=0; j<10; j++){
		divisivel = 0;
		for (i=0;i<n;i++){
			if	((obs[i] % divisores[j]) == 0){
				obs[i] = obs[i] / divisores[j];
				divisivel = 1;
			}
		}
		if(divisivel == 1){
			mmcr[k++] = divisores[j];
			j--;
		}
	}
		
	int valor = 1;
	for(i = 0; i < k; i++){
		valor *= mmcr[i]; 
	}
	
	return valor;
}


int main(int argc, char **argv){
	int i,resp;
	printf("Obstaculos");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Frequencia");
		scanf("%d",&obs[i]);
	}
	printf("%d", mmc(n,&obs));
	
	return 0;
}
