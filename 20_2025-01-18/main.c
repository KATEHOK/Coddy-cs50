#include <stdio.h>

// Рекурсивно вычисляет произведение двух целых
int mul(int first, int second);

// Тестирует функцию mul
void test_mul();

// Рекурсивно вычисляет факториал целого
int factor(int n);

// Рекурсивно вычисляет неотрицательную целую степень целого числа
int my_pow(int n, int m);

// Вывод все натуральные числа от 1 до n.
void naturals(int n);





int main() {

    // test_mul();

    // printf("0 ^ 0 = %d\n", my_pow(0, 0));
    // printf("0 ^ 897 = %d\n", my_pow(0, 897));
    // printf("34 ^ 0 = %d\n", my_pow(34, 0));
    // printf("1 ^ 1 = %d\n", my_pow(1, 1));
    // printf("2 ^ 5 = %d\n", my_pow(2, 5));
    // printf("3 ^ 4 = %d\n", my_pow(3, 4));

    return 0;
}





void naturals(int n) {
    if (n <= 0) return;
    if (n == 1) printf("1\n");
    else {
        naturals(n - 1);
        printf("%d\n", n);
    }
}

// n ^ m
int my_pow(int n, int m) {
    // n ^ -687 -> 0
    // 0 ^ 0 -> 0
    if ( (m < 0) || (n == 0 && m == 0) ) return 0;
    // 0 ^ m -> 0
    if (n == 0) return 0;
    // n ^ 0 = 1
    if (m == 0) return 1;
    // n ^ m -> ( n ^ (m - 1) ) * n
    // 2 ^ 2 -> (2 ^ 1) * 2
    return my_pow(n, m - 1) * n;
}

void test_mul() {
    // цикл for (с счетчиком)
    for (int i = -10; i <= 10; ++i) {
        for (int j = i; j <= 10; ++j) {

            int res1 = mul(i, j), res2 = mul(j, i), exp = i * j;
            if (res1 != exp || res2 != exp) {
                printf(
                    "Incorrect value:\n\
                    mul(%d, %d) -> %d\n\
                    mul(%d, %d) -> %d\n\
                    %d * %d -> %d\n",
                    i, j, res1,
                    j, i, res2,
                    i, j, exp
                );
            }
        }
    }
}

int factor(int n) {
    if (n < 0) return 0;
    else if (n == 0) return 1;
    return n * factor(n - 1);
}

int mul(int first, int second) {
    // -5 * -3 -> -(-5 * -(-3) ) = -(-5 * 3) = -( 0 + -5 + -5 + -5 )
    // -5 * 3 -> -5 * 2 + -5 = 0 + -5 + -5 + -5
    // -5 * 2 -> -5 * 1 + -5 = 0 + -5 + -5
    // -5 * 1 -> -5 * 0 + -5 = 0 + -5
    // -5 * 0 -> 0
    // ----------------------------------------
    // x * 0 = 0
    // x * y = -(x * -y)            | для y < 0
    // x * y = [x * (y - 1)] + x    | для y >= 0
    if (second == 0) return 0;
    if (second < 0) return -mul(first, -second);
    return mul(first, second - 1) + first;
}

// ФАКТОРИАЛ ЧИСЛА
// x - целое, неотрицательное
// 0! = 1
// x! = (x - 1)!
// 5! = 5 * 4 * 3 * 2 * 1

// СТЕПЕНЬ ЧИСЛА
// y - целое, неотрицательное
// x ^ 0 = 1
// x ^ y = [x ^ (y - 1)] * x
// 5 ^ 3 = [5 ^ (3 - 1)] * 5 = ... = 5 * 5 * 5
