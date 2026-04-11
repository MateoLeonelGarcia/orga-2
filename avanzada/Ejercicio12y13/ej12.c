#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdlib.h>
#define NAME_LEN 50

typedef struct
{
    char nombre[NAME_LEN + 1];
    uint8_t edad;
} persona_t;

persona_t *crearPersona(char nombre[], uint8_t edad);
void eliminarPersona(persona_t *persona);

int main()
{
    persona_t *mateo = crearPersona("Mateo", 28);
    printf("Nombre de la persona: %s\n", mateo->nombre);
    printf("Edad de la persona: %u\n", mateo->edad);
    eliminarPersona(mateo);
    return 0;
}

persona_t *crearPersona(char nombre[], uint8_t edad)
{
    persona_t *persona = malloc(sizeof(persona_t));
    if (persona == NULL)
    {
        return NULL;
    }
    strncpy(persona->nombre, nombre, NAME_LEN);
    persona->edad = edad;
    return persona;
}

void eliminarPersona(persona_t *persona)
{
    free(persona);
}