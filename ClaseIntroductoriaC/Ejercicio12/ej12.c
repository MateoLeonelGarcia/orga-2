#include <stdio.h>
#include <stdint.h>

int main(){
        
        uint32_t s[] = {1,2,3,4};
        uint32_t sCopia[] = {1,2,3,4};

        // for (size_t i = 0; i < 4; i++)
        // {
        //         sCopia[i] = s[i];
        // }
        
        uint8_t rotacion = 2;

        for (size_t i = 0; i < 4; i++){
                printf("%i\n",s[i]);
        }

        for (int32_t i = 0; i < 4; i++){
                if ((i-rotacion) < 0){  
                        s[i] = sCopia[4-rotacion+i];
                } else {
                        s[i] = sCopia[i-rotacion]; 
                }                
        }
        

        for (size_t i = 0; i < 4; i++)
        {
                printf("%i\n",s[i]);
        }

        return 0;
}