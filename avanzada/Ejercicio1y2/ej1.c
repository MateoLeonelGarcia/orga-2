#include <stdint.h>
#include <stdio.h>

typedef struct {
    char* nombre;
    uint32_t vida;
    double ataque;
    double defensa;
} monstruo_t;

void print_monstruo(monstruo_t);
monstruo_t evolution(monstruo_t);

int main(){

    monstruo_t monstruos[] = {
        {"Mayhem",34,0,0},
        {"Pandora",25,1,3},
        {"Loki",36,50,20},
        {"Gerd",84,1,3},
    };
    for (int i = 0; i < 4; i++)
    {
        print_monstruo(monstruos[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        monstruos[i] = evolution(monstruos[i]);
        print_monstruo(monstruos[i]);
    }
    
    return 0;
}

void print_monstruo(monstruo_t monster){
    printf("Nombre: %s\n",monster.nombre);
    printf("Vida: %u\n",monster.vida);
    printf("Ataque: %f\n",monster.ataque);
    printf("Defensa: %f\n",monster.defensa);
}

//ej 2

monstruo_t evolution(monstruo_t monster){
    printf("Evolucionando a %s\n",monster.nombre);
    monstruo_t res = {
        monster.nombre,
        monster.vida,
        monster.ataque + 10,
        monster.defensa +10,
    };
    return res;
}