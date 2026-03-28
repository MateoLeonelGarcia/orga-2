#include <stdio.h>
#include <string.h>

int main() {
        float i = 0.1123;
        printf("float: %f \n",i);
        double j = 0.651;
        printf("doubleCasteado: %f \n",j);
        int iCasteadoAInt = (int) i;
        printf("i casteado a int: %d \n",iCasteadoAInt);
        int jCasteadoAInt = (int) j;
        printf("j casteado a int: %d \n",jCasteadoAInt);

        return 0;
}