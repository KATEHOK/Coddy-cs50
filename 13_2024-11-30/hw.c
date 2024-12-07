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
        
        // int number;
        // number = input_int();
        // printf("Entered: %d\n", number);

        // simple_cicle();
        // range_of_odd_numbers();
        cicle_input_and_summation();

        printf("\nEnter 0 - to exit or smth else - to continue: ");
        scanf("%d", &choice);
    }
    printf("\nExiting...\n");
    return 0;
}

// Определение (реализация) функции для первой задачи
int input_int() {
    // Данная функция должна внутри себя выводить сообщение -
    // приглашение ввода целого числа: `"Enter integer number: "`.
    // После чего считывать ввод целого числа и возвращать считанное число.
    int num;
    printf("Enter integer number: ");
    scanf("%d", &num);
    return num;
}

// Определение (реализация) функции для второй задачи
void simple_cicle() {
    // С помощью вызова функции из предыдущего задания
    // необходимо считать 2 целых числа: `k` и `n`
    // (не забудьте проверить, чтобы `n` было неотрицательным, то есть, `n >= 0`).
    // Далее необходимо вывести `n` раз число `k`.
    int k = input_int(), n = input_int();
    while (n < 0) {
        printf("The number 'n' mustn't be negative. Try again!\n");
        n = input_int();
    }
    for (int i = 0; i < n; ++i) printf("%3d) %d\n", i, k);
}

// Определение (реализация) функции для третьей задачи
void range_of_odd_numbers() {
    // Вводятся два целых числа `a` и `b` (`a > b` - необходимо проверить).
    // Выведите все нечётные числа от `a` до `b` включительно, в порядке убывания.
    // Ввод всех чисел должен осуществляться с помощью функции из первого задания.
    int a = input_int(), b = input_int();
    while (a <= b) {
        printf("The number 'a' mustn't be greater then 'b'. Try again!\n");
        a = input_int();
        b = input_int();
    }
    for (a = a % 2 == 0 ? a - 1 : a; a > b; a -= 2) printf("%d\n", a);
}

// Определение (реализация) функции для четвертой задачи
void cicle_input_and_summation() {
    // Дано несколько чисел. Вычислите и выведете их сумму.
    // Сначала вводится количество чисел - `n`
    // (не забудьте проверить, чтобы `n` было неотрицательным, то есть, `n >= 0`),
    // затем вводится ровно `n` целых чисел.
    // Ввод всех чисел должен осуществляться с помощью функции из первого задания.
    int n = input_int(), num, sum = 0;
    while (n < 0) {
        printf("The number 'n' mustn't be negative. Try again!\n");
        n = input_int();
    }
    printf("Enter %d numbers please.\n", n);
    for (n; n > 0; --n) {
        num = input_int();
        sum += num;
    }
    printf("Sum of your numbers: %d\n", sum);
}
