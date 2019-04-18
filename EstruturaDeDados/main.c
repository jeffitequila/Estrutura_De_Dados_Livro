#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, f = 1;
    printf("Digite um valor inteiro nao negativo");
    scanf("%d", &n);

    //Calcular fatorial
    i = 1;
    while( i <= n){
        f*= i;
        i++;
}
    printf("Fatorial = %d \n", f);
    return 0;
}
