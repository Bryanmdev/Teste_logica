#include <stdio.h>

int main()
{
    int indice = 13, soma = 0, k = 0;

    while (k < indice)
    {
        k++;
        soma = soma + k;
    }

    printf("Valor final de soma: %d\n", soma);
    return 0;
}
