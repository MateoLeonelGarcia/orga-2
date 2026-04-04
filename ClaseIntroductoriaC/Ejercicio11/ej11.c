#include <stdio.h>
#include <stdint.h>

int main(){
        
        uint32_t s[] = {1,2,3,4};


        for (size_t i = 0; i < 4; i++)
        {
                printf("%i\n",s[i]);
        }

        uint32_t a0 = s[0];
        for (size_t i = 0; i < 3; i++)
        {
                s[i] = s[i+1]; 
        }
        s[3] = a0;
        
        for (size_t i = 0; i < 4; i++)
        {
                printf("%i\n",s[i]);
        }

        return 0;
}