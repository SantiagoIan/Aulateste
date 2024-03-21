#include <stdio.h>
	
int main() 
{
    int base, altura, mult;

    printf ("Digite a base do quadrado:");
    scanf ("%d", &base);

    printf ("\nAgora a altura do quadrado:");
    scanf ("%d", &altura);

    mult= base*altura;
    printf ("\nA Muiltiplicacao de base %d e altura %d e: %dcm",base, altura,mult);
		return 0;
}
