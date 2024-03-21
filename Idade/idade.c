#include <stdio.h>
	
int main() 
{
    int idade, sub, ano=2024;

    printf ("Digite sua idade:");
    scanf ("%d", &idade);
    
    sub= ano-idade;

    printf ("\nvoce nasceu em: %d", sub);
		return 0;
}

