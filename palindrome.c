#include <stdio.h>
#include <string.h>

int main(void)
{
    char ch1[100] = {}, ch2[100] = {};
    printf("Palíndromos\nPalabra: ");
    scanf("%s", ch1);
    for (int i = 0; i < strlen(ch1); i++)
        ch2[i] = ch1[strlen(ch1) - i - 1];
    if (strcmp(ch1, ch2) == 0)
        printf("La palabra %s es un palíndromo\n", ch2);
    else
        printf("La palabra %s no es un palíndromo\n", ch1);
    return 0;
}
