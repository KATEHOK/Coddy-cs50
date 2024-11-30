#include <stdio.h>

// Объявление функции
void print_sizeof_data_types();

void stdio_funcs() {
    // putchar();   // int putchar(int ch);                 // вывод в stdout данных размером char
    // printf();    // int printf(const char* format, ...); // форматированный вывод в stdout
    // perror();
    // getchar();   // int getchar(void);                   // ввод из stdin данных размером char (или код ошибки - отрицательные числа)
    // scanf();     // int scanf(const char* format, ...);  // форматированный вввод из stdin
}

int main() {

    // Вызов функции
    print_sizeof_data_types();
    printf("-------------------------\n");
    
    stdio_funcs();
    printf("-------------------------\n");

    return 0;
}

// Определение функции
void print_sizeof_data_types() {
    printf("Data types in C\n");
    printf("Size of 'char': %d\n", sizeof(char));
    printf("Size of 'short': %d\n", sizeof(short));
    printf("Size of 'int': %d\n", sizeof(int));
    printf("Size of 'long': %d\n", sizeof(long));
    printf("Size of 'long long': %d\n", sizeof(long long));
    printf("Size of 'float': %d\n", sizeof(float));
    printf("Size of 'double': %d\n", sizeof(double));
    printf("Size of 'long double': %d\n", sizeof(long double));
}
