#include <stdio.h>

int main()
{
    int num, a = 0, b = 1, temp; // temp é uma variável auxiliar usada para guardar temporariamente o valor da soma dos dois números anteriores da sequência de Fiboncci.

    printf("Digite um número: ");
    scanf("%d", &num);

    if (num == 0)
    {
        printf("O número %d pertence à sequência de Fibonacci.\n", num);
        return 0;
    }

    while (b < num)
    {
        temp = a + b;
        a = b;
        b = temp;
    }

    if (b == num)
    {
        printf("O número %d pertence à sequência de Fibonacci.\n", num);
    }
    else
    {
        printf("O número %d NÃO pertence à sequência.\n", num);
    }

    return 0;
}