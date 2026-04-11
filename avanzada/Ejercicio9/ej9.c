#include <stdio.h>
#include <string.h>
#include <stdint.h>

size_t lenght(char *str)
{
    size_t len = 0;
    while (*str != '\0')
    {
        len++;
        str++;
    }
    return len;
}

uint8_t esMinuscula(char c)
{
    return c >= 'a' && c <= 'z';
}

void todoAMayuscula(char frase[])
{
    int diff = 'A' - 'a';
    for (size_t i = 0; i < lenght(frase); i++)
    {
        if (esMinuscula(frase[i]))
        {
            frase[i] = frase[i] + diff;
        }
    }
}

int main()
{
    char frase[] = "estA FRASE esta todo en mayusculas";
    todoAMayuscula(frase);
    printf("Resultado: %s\n", frase);
    return 0;
}
