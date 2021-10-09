#include <stdio.h>

int main(int argc, char *argv[]){
    printf("argument count: %i\n\n", argc);
    int i = 0;
    while(i < argc){
        printf("%i %s\n", i, argv[i]);
        i++;      
    }
    return 0;
}
