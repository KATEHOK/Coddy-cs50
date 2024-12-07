#include <stdio.h>

// Выводит сообщение и запрашивает ввод целого числа
int input_int();                    // объявление (прототип) функции

// Выводит n раз число k
void simple_cicle();                // объявление (прототип) функции

int main() {
    int choice;
    printf("Hello World!\nEnter 0 - to exit or smth else - to continue: ");
    scanf("%d", &choice);

    while (choice != 0) {
        // вызов функции, решающей задачу
        // int number;
        // number = input_int();
        // printf("Entered: %d\n", number);

        simple_cicle();

        printf("\nEnter 0 - to exit or smth else - to continue: ");
        scanf("%d", &choice);
    }
    printf("\nExiting...\n");
    return 0;
}

// Определение (реализация) функции для первой задачи
int input_int() {
    int num;
    printf("Enter integer number: ");
    scanf("%d", &num);
    return num;
}

// Определение (реализация) функции для второй задачи
void simple_cicle() {
    int k = input_int(), n = input_int();
    if (n >= 0) for (; n > 0; --n) printf("n: %2d; k = %d\n", n, k);
    else printf("Number 'n' must not be negative!\n");
}
