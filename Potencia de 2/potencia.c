#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int i, xmult;
	for (i=0; i <20; i++){
	printf("*");
	}
	
	printf("\n");
	printf("10 Potencia de 2\n");
	 for (i=0; i<11; i++){
	 	xmult = xmult * 2;
	 	printf("2 elevado a %d: %d.\n",i,xmult);
	 }
	 
	 for (i=0;i<20;i++){
	 	printf("*");
	 }
	
	
	return 0;
}
