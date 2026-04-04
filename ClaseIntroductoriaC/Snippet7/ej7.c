#include <stdio.h>
#include <stdint.h>

int main(){
        
        uint8_t a = 5;
        uint8_t b = 3; 
        uint8_t c = 2;
        uint8_t d = 1;

        // printf("El resultado esperado de a + b  * c / d es 16, y es %i \n",a + b * c / d);
        // // hizo a + (b*c)/d

        // printf("El resultado esperado de a mod b es 2, y es %i \n",a % b);

        // printf("El resultado esperado de a == b, a != b es 0 y 1, y es %i y %i \n",a==b,a!=b);
        
        // printf("El resultado esperado de a & b, a | b es 1 y 7, y es %X y %X \n",a&b, a|b);
        
        // printf("El resultado esperado de '∼'a es 2, y es %X \n", ~a);
        // // para el print, el uint de 8 paso a int de 32 bits. el resultado fue FFFFFFA que seria el el complemento de 00000005

        // printf("El resultado esperado de a && b, a || b es , y es %X y %X \n",a&&b, a||b);
        // // 1 y 1 pues a != 0 y b !=0 entonces a nivel logico si un entero tiene un numero distinto a 0 cuenta como verdadero.

        // printf("El resultado esperado de a << 1 es 0000000A osea A, y es %X \n",a << 1);
        // // el print transforma el uint8 en int de 32 bits

        // printf("El resultado esperado de a >> 1 es 00000002 osea 2, y es %X \n",a >> 1);
        // // el print transforma el uint8 en int de 32 bits
        
        printf("El resultado esperado de a += b, a -= b, a *= b es 8 y 5 y 15, y es %i, %i, %i \n",
                a += b, a -= b, a *= b);
        // printf("El resultado esperado de a += b, a -= b, a *= b, a /= b, a mod= b es 0 y 1, y es %i, %i \n",
        //         a /= b, a %= b);
        //no funciona correctamente porque estos de asignacion tienen el mismo variable y dentro del printf se puede ejecutar en orden indefinido por lo tanto el valor de a cambia y puede ser cualquier cosa.
        //btw es lo que dice el warning al compilar
                 
        return 0;
}