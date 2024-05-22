#include <stdio.h>
#include <stdlib.h>

int xmult;

void linha(){
	int i;
	for (i=1;i<20;i++){
		printf("*");
	}
}

void multiplos(){
	printf("\nO ultimo multiplo calculado foi: %d\n", xmult);
}

int main() {

	int i;
	linha();
	printf("10 potencia de 2\n");
	linha();
	
	xmult=1;
	for (i=1;i<11;i++){
		xmult= xmult*2;
		printf("2 elevado a %d: %d\n",i,xmult);
	}	
	linha();
	multiplos();
	
	return 0;
}
