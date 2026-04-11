#include <stdio.h>
#include <string.h>

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

int main()
{
    char *str1 = "Hola";
    char str2[] = "Hola";
    size_t l1 = lenght(str1);
    size_t l2 = lenght(str2);
    printf("%s\n", str1);
    printf("%zu\n", l1);
    printf("%s\n", str2);
    printf("%zu\n", l2);
    return 0;
}
