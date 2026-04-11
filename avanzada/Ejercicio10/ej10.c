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

    /*utilizar en string.h): strcpy, strcat, strlen, strcmp, etc. Para acceder a la
documentaci´on de cada funci´on se puede usar la l´ınea de comando: man strcpy, man
strlen, etc.
Side quest: investigar que significa restrict en la firma de la funci´on strcpy*/
    char frase[] = "estA FRASE esta todo en mayusculas";
    char frasecopia[] = "estA FRASE esta todo en minusculas";
    // strcpy(frase, frasecopia); /*dest tiene que tener la capacidad para poder copiar lo de src*/
    printf("ResultadoFraseCopia: %s\n", frasecopia);
    // todoAMayuscula(frase);
    printf("ResultadoFrase: %s\n", frase);

    // printf("concatenacion: %s\n", strcat(frase, frasecopia)); /*similar a anterior, tener cuidado con la capacidad de destino*/
    printf("ResultadoFrase: %s\n", frase);
    printf("Longitud de frase: %lu\n", strlen(frase));
    printf("Frase y frasecopia son iguales?: %u\n", strcmp(frase, frasecopia));
    printf("Frase y Frase son iguales?: %u\n", strcmp(frase, frase));
    return 0;
}
