#include <stdio.h>
#include <unistd.h>

int main() {
    int a = 20;
    int iterations = 1000000; 

    int pid = fork();

    if (pid == 0) { 
        for (int i = 0; i < iterations; i++) {
            printf("Soy el proceso hijo a = %d\n", a);
            fork();
            a += 5; 
        
        }
        return 0;
    } else if (pid > 0) {
        for (int i = 0; i < iterations; i++) {
            printf("Soy el proceso padre a = %d\n", a);
            fork();
            a += 10; 
            
        }
        printf("Mi hijo tiene pid = %d\n", pid);
    } 
    return 0;
}
