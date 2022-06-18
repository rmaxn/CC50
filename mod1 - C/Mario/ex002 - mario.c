#include <cs50.h>
#include <stdio.h>

void create_bricks(int alt, int i);

int main(void)
{
    int alt;
    do
    {
        alt = get_int("Altura: ");
    }
    // Confere se a altura está entre 1 e 8 e em seguida retorna o número para a função principal
    while (alt < 1 || alt > 8);

    // Chama a função de criação dos tijolos em um loop de acordo com a altura informada
    for (int i = 0; i < alt; i++)
    {
        create_bricks(alt, i + 1);
    }
}

void create_bricks(int alt, int i)
{
    // imprime um caractere a cada iteração;
    for (int s = 0; s < alt - i; s++)
    {
        printf(" ");
    }

    for (int p1 = 0; p1 < i ; p1++)
    {
        printf("#");
    }

    // Após imprimir o tijolo acrescenta espaços que separam as pirâmides;
    printf("  ");

    // Inicia nova pirâmide da esquerda pra direita;
    for (int p2 = 0; p2 < i; p2++)
    {
        printf("#");
    }

    // Ao final da função acrescenta quebra de linha para novo loop;
    printf("\n");
}
