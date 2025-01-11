#include <stdio.h>

// Складывает два целых числа
int plus(int slagaemoe_1, int slagaemoe_2);

// Считает результат вычитания
int minus(int umenshaemoe, int vichitaemoe);

// Перемножает два целых числа
int mul(int mnozhitel_1, int mnozhitel_2);

// Считает результат деления
int div(int delimoe, int delitel);

// Вычисляет периметр параллелограмма по его сторонам
int parallelogram_perimeter(int a, int b);

// вычисляет площадь прямоугольника
int rectangle_area(int a, int b);

int main() {
    printf("Hello World!\n");
    int a = 234, b = 932, c;

    c = plus(a, b);
    printf("Answer (plus): %d\n", c);
    c = minus(a, b);
    printf("Answer (minus): %d\n", c);
    c = mul(a, b);
    printf("Answer (mul): %d\n", c);
    c = div(a, b);
    printf("Answer (div): %d\n", c);

    // double d = 0.1, e = 0.2;
    // printf("%lf + %lf = %.17lf\n", d, e, d + e); 

    return 0;
}



int parallelogram_perimeter(int a, int b) {
    // (a + b) * 2
    // int result = plus(a, b);
    // result = mul(result, 2);
    // return result;
    return mul(plus(a, b), 2);
}

// void test_plus() {
//     const int COUNT = 1000;
    

//     if (plus(a, b) != a + b) {
//         printf("Test %d failed! | plus(%d, %d) != %d", i, a, b, a + b);
//     }
// }

int plus(int slagaemoe_1, int slagaemoe_2) {
    int result = slagaemoe_1 + slagaemoe_2;
    return result;
}

int minus(int umenshaemoe, int vichitaemoe) {
    int result = umenshaemoe - vichitaemoe;
    return result;
}

int mul(int mnozhitel_1, int mnozhitel_2) {
    int result = mnozhitel_1 * mnozhitel_2;
    return result;
}

int div(int delimoe, int delitel) {
    int result = delimoe / delitel;
    return result;
}

