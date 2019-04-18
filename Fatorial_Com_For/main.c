#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n , f = 1;

    do{
        printf("Digite um valor inteiro nao negativo\n");
        scanf("%d", &n );

    }while (n<0);

    for (i = 1; i <= n; i++)
    f *= i;
    printf("Fatorial = %d\n", f);
    return 0;
}
