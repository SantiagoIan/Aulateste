#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	
int main() 
{
    int idade, sub, ano=2024;

    printf ("Digite sua idade:");
    scanf ("%d", &idade);
    
    sub= ano-idade;

    printf ("\nvoce nasceu em: %d", sub);
    
		return 0;
}
