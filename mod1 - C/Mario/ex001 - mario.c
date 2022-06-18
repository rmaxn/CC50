#include <cs50.h>
#include <stdio.h>

int get_heigth(void);

int main(void)
{
    // Recupera a altura armazenada para formatação da pirâmide;
    int altura = get_heigth();
    for (int i = 0; i < altura; i++)
    {
        // A cada rodada do loop abaixo ele imprime um caractere; ao terminar quebra a linha e reinicia o loop com um novo index;
        for (int j = 0; j < altura; j++)
        {
            if (i + j < altura - 1)
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
    }
}

// Função auxiliar para solicitar altura
int get_heigth(void)
{
    int n;
    do
    {
        n = get_int("Altura: ");
    }
    // Confere se a altura está entre 1 e 8 e em seguida retorna o número para a função principal
    while (n < 1 || n > 8);
    return n;
}
