#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int caunt(string D);
string letter(string A);

int main(void)
{
    string A = get_string("Player 1: ");
    string B = get_string("Player 2: ");
    A = letter(A);
    B = letter(B);
    int word1 = caunt(A);
    int word2 = caunt(B);
    // verifica o ganhador
    if (word1 > word2)
    {
        printf("Player 1 wins!\n");
        return 0;
    }
    if (word2 > word1)
    {
        printf("Player 2 wins!\n");
        return 0;
    }
    else
    {
        printf("Tie!\n");
        return 0;
    }
}
// soma os pontos
int caunt(string c)
{
    int point[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    int fim = 0;
    for (int i = 0, m = strlen(c); i < m; i++)
    {
        if (islower(c[i]))
        {
            fim += point[c[i] - 'a'];
        }
    }
    printf("%i\n", fim);
    return fim;
}
// transforma em minusculo
string letter(string C)
{

    for (int i = 0, n = strlen(C); i < n; i++)
    {
        C[i] = tolower(C[i]);
    }
    return C;
}
