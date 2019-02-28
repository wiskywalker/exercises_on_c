#include <stdio.h>
#include <limits.h>

int main () {
    printf("char = %d\n", sizeof(char));
    printf("int = %d\n", sizeof(int));
    printf("Min int = %d\n", INT_MIN);
    printf("Max int = %d\n", INT_MAX);
    printf("float = %d\n", sizeof(float));
    printf("unsigned int = %d\n", sizeof(short));
    printf("1.156e32 = %d\n", sizeof(1.156e32));
    printf("g = %d\n", sizeof("g"));
    printf("¡Hola, mundo! = %d\n", sizeof("¡Hola, mundo!"));
    return 0;
} 
