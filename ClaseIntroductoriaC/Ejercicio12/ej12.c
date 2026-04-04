#include <stdio.h>
#include <stdint.h>

int main(){
        
        uint32_t s[] = {1,2,3,4};
        uint32_t sCopia[] = {1,2,3,4};
        size_t sLength = sizeof(s)/sizeof(s[0]);
        
        
        uint8_t rotacion = 2;

        for (size_t i = 0; i < sLength; i++){
                printf("%i\n",s[i]);
        }

        for (size_t i = 0; i < sLength; i++){
                if(i + rotacion < sLength){
                        s[i] = sCopia[i+rotacion];
                }else{
                        s[i] = sCopia[i - sLength + rotacion];
                }              
        }
        

        for (size_t i = 0; i < sLength; i++)
        {
                printf("%i\n",s[i]);
        }

        return 0;
}