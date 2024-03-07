#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
    int soma, r, n1, n2, n3;

    printf ("Digite a primeira nota:");
    scanf("%d", &n1);

    printf ("\nSegunda nota:");
    scanf("%d", &n2);

    printf ("\npor fim, a terceira nota:");
    scanf("%d", &n3);
    
    soma=n1+n2+n3;
    printf("\nA soma de %d+%d+%d e: %d", n1,n2,n3,soma);
    r= soma/3;
    printf("\na media de %d vai ser: %d", soma,r);
	return 0;
}

