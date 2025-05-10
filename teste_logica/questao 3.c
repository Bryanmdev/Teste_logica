#include <stdio.h>

#define DIAS 7

// Função para calcular a média dos valores não nulos
float calcularMedia(float faturamento[], int tamanho)
{
    float soma = 0.0;
    int diasValidos = 0;

    for (int i = 0; i < tamanho; i++)
    {
        if (faturamento[i] > 0.0)
        {
            soma += faturamento[i];
            diasValidos++;
        }
    }

    return (diasValidos > 0) ? (soma / diasValidos) : 0.0;
}

// Função para encontrar o menor valor (desconsiderando zeros)
float encontrarMenor(float faturamento[], int tamanho)
{
    float menor = -1.0;

    for (int i = 0; i < tamanho; i++)
    {
        if (faturamento[i] > 0.0 && (menor == -1.0 || faturamento[i] < menor))
        {
            menor = faturamento[i];
        }
    }

    return menor;
}

// Função para encontrar o maior valor
float encontrarMaior(float faturamento[], int tamanho)
{
    float maior = 0.0;

    for (int i = 0; i < tamanho; i++)
    {
        if (faturamento[i] > maior)
        {
            maior = faturamento[i];
        }
    }

    return maior;
}

// Função para contar dias com faturamento acima da média
int contar_acima_da_media(float faturamento[], int tamanho, float media)
{
    int contador = 0;

    for (int i = 0; i < tamanho; i++)
    {
        if (faturamento[i] > media)
        {
            contador++;
        }
    }

    return contador;
}

int main()
{
    float faturamento[DIAS] = {22174.16, 24537.66, 0.0, 26139.61, 0.0, 26742.66, 0.0};

    float media = calcularMedia(faturamento, DIAS);
    float menor = encontrarMenor(faturamento, DIAS);
    float maior = encontrarMaior(faturamento, DIAS);
    int acima_media = contar_acima_da_media(faturamento, DIAS, media);

    printf("Menor faturamento (desconsiderando zeros): R$%.2f\n", menor);
    printf("Maior faturamento: R$%.2f\n", maior);
    printf("Dias com faturamento acima da média mensal: %d\n", acima_media);

    return 0;
}
