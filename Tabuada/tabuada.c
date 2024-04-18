#include <stdio.h>

int main()
{
    int number,r;
    printf("Digite um número:");
    scanf ("%d", &number);
    for (int i = 0; i <=10; i++){
        r = number*i;
        printf ("%d x %d = %d\n", number, i, r);
    }

    return 0;
}
