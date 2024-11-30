#include <stdio.h>

// Выводит сообщение и запрашивает ввод целого числа
int input_int();                    // объявление функции

// Решает задачу "Простой цикл"
void simple_cicle();                // объявление функции

// Решает задачу "Диапазон нечетных чисел"
void range_of_odd_numbers();        // объявление функции

// Решает задачу "Циклический ввод и суммирование"
void cicle_input_and_summation();   // объявление функции

int main() {
    int choice;
    printf("Hello World!\nEnter 0 - to exit or smth else - to continue: ");
    scanf("%d", &choice);

    while (choice != 0) {
        // вызов функции, решающей задачу
        int number;
        number = input_int();
        printf("Entered: %d\n", number);

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
    int a = 0;
    a = input_int();
    // код
}

// Определение (реализация) функции для третьей задачи
void range_of_odd_numbers() {
    // код
}

// Определение (реализация) функции для четвертой задачи
void cicle_input_and_summation() {
    // код
}
