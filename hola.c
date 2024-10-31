#include <stdio.h>



int main(int arg, char **argv){
    for(int i=1;i<arg;i++){
        printf("hola %s\n", argv[i]);
    }
    return 0;
}