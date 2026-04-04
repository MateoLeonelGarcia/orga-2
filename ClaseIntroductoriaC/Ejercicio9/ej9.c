#include <stdio.h>
#include <stdint.h>

int main(){
        
        uint32_t a = 0x0FFFFFFF;
        uint32_t b = 0xEACD0258 ;

        uint32_t aMask = 0xE0000000;
        uint32_t bMask = 0x00000007;

        uint32_t aMasked = a & aMask;
        uint32_t bMasked = b & bMask;

        uint32_t res = (aMasked >> 29) == bMasked;

        printf("A vale: %x\n", a);
        printf("B vale: %x\n", b);
        printf("Los 3 bits mas altos de a son iguales que los 3 mas bajos de b?:  %i\n", res);                
        return 0;
}