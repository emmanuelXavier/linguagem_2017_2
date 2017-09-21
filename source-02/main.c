
#include <stdio.h>

int main(int argc, char **argv)
{
	
	int mes;
	scanf("%d",&mes);
	switch (mes){
		case 1 : printf("Jan"); break;
		case 2 : printf("Fev"); break;
		case 3 : printf("Mar"); break;
		case 4 : printf("Abr"); break;
		case 5 : printf("Mai"); break;
		case 6 : printf("Jun"); break;
		case 7 : printf("Jul"); break;
		default : printf("desconhecido");
	}
	
	return 0;
}

