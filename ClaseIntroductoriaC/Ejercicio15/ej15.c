#include <stdio.h>
#include <stdint.h>

uint64_t factorial(uint64_t n);

int main(){

        int n;
        printf("Por favor, ingrese un numero");
        scanf("%i",&n);

        uint64_t res = factorial(n);
        printf("El factorial de %i es: %lu\n",n,res);
        return 0;
}

uint64_t factorial(uint64_t n){
        uint64_t res = 1;
        if (n){
                res = n * factorial(n-1);
        }
        return res;
}

