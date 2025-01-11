#include <stdio.h>

// выводит пирамидку высоты height
void piramide(int height);

// выводит пирамидку высоты height
void piramide2(int height);

void romb(int height);

// рекурсивное вычисление степени числа
int pow(int num, int pow);

int main() {
    // повторять ... {
    //     тело цикла
    // }

    // while (...) {
    //     ...
    // }

    // do {
    //     ...
    // } while (...);

    // int i, l = 5;
    // for (i = 0; i < l; ++i) {
    //     printf("%d\t%d\n", i, l);
    // }

    // int i = 1;
    // for (; i < 5;) {

    // }

    // for (int i = 0; i < 5; ++i) {
    //     // if (i % 2 != 0) continue;
    //     if (i == 3) break;

    //     printf("%d\n", i);
    // }

    // h = ...

    // #
    // ##
    // ###
    // ...
    // ###...#

    //        #
    //       ##
    //      ###
    // ...
    // ###....#


    // int i = 5, j = 5;
    // printf("%d, %d\n", ++i, j++);
    // printf("%d, %d\n", i, j);

    // romb(10);

    for (int i = 1; i <= 10; ++i)
        for (int j = 0; j < 4; ++j)
            printf("pow(%d, %d) = %d\n\n", i, j, pow(i, j));

    return 0;
}

int pow(int num, int p) {
    printf("%d, %d\n", num, p);
    // a ^ b = a ^ (b - 1) * a
    // a ^ (b - 1) = a ^ (b - 1 - 1) * a = a ^ (b - 2) * a
    // ...
    // a ^ (1) = a ^ (1 - 1) * a = a ^ 0 * a = 1 * a

    // a ^ b = a ^ (b - 1) * a = a ^ (b - 2) * a * a = ... = 1 * a * a ... * a
    if (p == 0) return 1;
    return pow(num, p - 1) * num;
}

void piramide(int height) {
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j <= i; ++j) printf("#");
        printf("\n");
    }
}

void piramide2(int height) {
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < height; ++j) {
            if (j + i < height - 1) printf(" ");
            else printf("#");
        }
        printf("\n");
    }
}

void romb(int height) {
    int h = height / 2;
    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < h; ++j) {
            if (j + i < h - 1) printf(" ");
            else printf("#");
        }
        for (int j = 0; j <= i; ++j) printf("#");
        printf("\n");
    }
}

// ++num
// int prev_plus(int num) {
//     num = num + 1;
//     return num;
// }

// num++
// int post_plus(int num) {
//     int copy = num;
//     num = num + 1;
//     return copy;
// }


