#include <stdio.h>

int main() {
    int choice;
    printf("Hello World!\nEnter 0 - to exit or smth else - to continue: ");
    scanf("%d", &choice);

    while (choice != 0) {
        printf("Iteration!\n");
        
        printf("\nEnter 0 - to exit or smth else - to continue: ");
        scanf("%d", &choice);
    }
    printf("\nExiting...\n");
    return 0;
}