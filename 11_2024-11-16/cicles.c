#include <stdio.h> 

int main() {
    // Циклы

    // Цикл for - с предусловием
    for (int i = 0; i < 10; i += 2) {
        printf("%d\n", i);
    }

    printf("\n\n");

    int j = 0;
    // Цикл while - с предусловием
    while (j > -10) {
        printf("%d\n", j);
        j -= 2;
    }

    printf("\n\n");

    int k = 0;
    // Цикл do-while - с постусловием
    do {
        printf("%d\n", k);
        k -= 2;
    } while (k > -10);

    printf("\n\n");

    // break
    // continue

    int a = 18;
    while (a <= 100) {
        ++a;

        if (a == 27) {
            continue;
        }

        if (a % 9 == 0) {
            break;
        }
        printf("%d\n", a);
    }

    // Инкремент
    // i++
    // ++i

    // Декремент
    // i--
    // --i

    // Быстрая арифметика
    // i = i + 5
    // i += 5
    // i -= 5
    // i *= 5
    // i /= 5
    // i %= 5

    return 0;
}