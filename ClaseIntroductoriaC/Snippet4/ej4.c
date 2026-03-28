#include <stdio.h>
#include <stdint.h>

int main() {
        int8_t a = 127;
        int16_t b = 32669;
        int32_t c = -1651646123;
        int64_t d= 1221651651651122126;
        uint8_t aNeg = 255;
        uint16_t bNeg = 15;
        uint32_t cNeg = 165;
        uint64_t dNeg = 12216516516511221261;


        printf("int8_t(%lu): %d \n", sizeof(a),a);
        printf("int16_t(%lu): %d \n", sizeof(b),b);
        printf("int32_t(%lu): %d \n", sizeof(c),c);
        printf("int64_t(%lu): %ld \n", sizeof(d),d);
        printf("uint8_t(%lu): %d \n", sizeof(aNeg),aNeg);
        printf("uint16_t(%lu): %d \n", sizeof(bNeg),bNeg);
        printf("uint32_t(%lu): %d \n", sizeof(cNeg),cNeg);
        printf("uint64_t(%lu): %ld \n", sizeof(dNeg),dNeg);
        
        return 0;
}