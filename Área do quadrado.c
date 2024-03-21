#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	
int main() 
{
    int base, altura, mult;

    printf ("Digite a base do quadrado:");
    scanf ("%d", &base);

    printf ("\nAgora a altura do quadrado:");
    scanf ("%d", &altura);

    mult= base*altura;
    printf ("\nA Muiltiplicacao de base %d e altura %d e: %d",base, altura,mult);
		return 0;
}
