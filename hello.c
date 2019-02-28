#include <stdio.h>
/* comment on the way 
 * to compile and execute:
 *  gcc -o hello hello.c
 *  ./hello
 * */

int main()
{
    printf("\033[31m \nHello, \n \033[34m world\n!");
    printf(" // ºº--.._\n");
    printf("|| \033[31m (_)  _\033[34mº-._\n");
    printf("|| \033[31m  _  (_) \033[34m  º-..\n");
    printf("|| \033[31m (_) \033[34m__..-º\n");
    printf(" \\__..--ºº\n");
    printf("George R. R. Martin es el autor de:\t\"Juego de tronos\"\n");
    
    printf(" // ºº--.._\n|| \033[31m (_)  _\033[34mº-._\n|| \033[31m  _  (_) \033[34m  º-..\n|| \033[31m (_) \033[34m__..-º\n\\__..--ºº\n\033[0m");


    return 0;
}
