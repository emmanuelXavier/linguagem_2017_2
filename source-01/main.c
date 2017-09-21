#include <stdio.h> 

//Tipo NomeVariável;
int a;
char sexo;

/*tipos primitivos
int          %i ou %d
char         %c
float        %f
char[]		 %s
long         %l
double       %lf
pointer (não é um tipo)    %p
_Bool        %d 
 */

                 
                                      
int main(){             
	a = 10; 
	sexo = 'M'; 
	scanf("%d",&a);   
	printf("Numero: %d pessoas do sexo %c olhando %d para o professor.",a,sexo,50);        
	             
	return 0;
}

