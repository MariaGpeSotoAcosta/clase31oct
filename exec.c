#include <stdio.h>
#include <unistd.h>

int main(){
    int pid = fork();
    if(pid ==0){
        printf("soy el hijo\n");
        execl("./hola","hola","pedro","luis","mary",(char *)NULL);
        printf("no se ejecuta");
    }
     printf("soy el proceso padre\n");
     return 0;


}