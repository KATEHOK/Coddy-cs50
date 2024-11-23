#include <stdio.h>
// #include <stdlib.h>

// Вычисляет модуль целого числа
int abs(int num) {
    // |num| = num, if num >= 0
    // |num| = -num, if num < 0

    if (num < 0) num = -num;
    return num;
}

// sign: int -> int (0, -1 or 1)
// sign(num) == 0, if num == 0
// sign(num) == -1, if num < 0
// sign(num) == 1, if num > 0

int sign(int num) {
    int res;

    if (num == 0) res = 0;
    else if (num < 0) res = -1;
    else res = 1;

    return res;

    // if (num == 0) return 0;
    // else if (num < 0) return -1;
    // else return 1;
}

// Дано целое число N (> 0).
// Если оно является степенью числа 3,
// то вывести True, если не является — вывести False.
// is_pow: int -> int
int is_pow(int n) {
    if (n == 1) return 1;
    while (n > 3) {
        if (n % 3 == 0) n /= 3;
        else break;
    }
    return n == 3;
}

// основная задача
// Диалоговая функция проверки, является ли число степенью 3
void do_task() {
    int choice;
    printf("Enter integer: ");
    scanf("%d", &choice);
    if (is_pow(choice)) printf("Number %d is pow of 3.\n", choice);
    else printf("Number %d isn't pow of 3.\n", choice);
}

int main() {
    int choice;
    printf("Hello World!\nEnter 0 - to exit or smth else - to continue: ");
    scanf("%d", &choice);

    while (choice != 0) {
        // основная задача программы
        do_task();
        
        printf("\nEnter 0 - to exit or smth else - to continue: ");
        scanf("%d", &choice);
    }
    printf("\nExiting...\n");
    return 0;
}