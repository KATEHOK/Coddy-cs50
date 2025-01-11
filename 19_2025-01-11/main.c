#include <stdio.h>

// Рекурсивно вычисляет произведение двух целых
int mul(int first, int second);

// Тестирует функцию mul
void test_mul();

int main() {

    test_mul();

    return 0;
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
