#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <time.h>
#define N 6
int main(){

        srand(time(NULL));
        uint32_t resultados[N] ={0};
        
        for (size_t i = 0; i < 60000000; i++)
        {
                uint32_t tmp =  rand() %6; //version del dado simple, con sesgo. en la docu esta la version mas compleja sin sesgo
                if(tmp<N){
                        resultados[tmp]++;
                }
                
        }
        

        for (size_t i = 0; i < N; i++)
        {
                printf("%i\n",resultados[i]);
        }

        return 0;
}


