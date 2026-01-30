#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t pid = fork();

    if (pid < 0) {
        // Fork failed
        perror("fork failed");
        return 1;
    } else if (pid == 0) {
        // Child process
        printf("I am the child\n");
    } else {
        // Parent process
        printf("I am the parent\n");
        wait(NULL); 
    }

    return 0;
}
