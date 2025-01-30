#include <stdio.h>

int main() {
    int a;

    // while - цикл с предусловием
    // a = 0;
    // while (a >= 0) {
    //     printf("Enter negative to stop: ");
    //     scanf("%d", &a);
    //     printf("Entered: %d\n\n", a);
    // }
    // printf("Cicle has finished\n");

    // do-while цикл с постусловием
    // do {
    //     printf("Enter negative to stop: ");
    //     scanf("%d", &a);
    //     printf("Entered: %d\n\n", a);
    // } while (a >= 0);
    // printf("Cicle has finished\n");

    // бесконечный цикл
    // while (1 == 1) {
    //     printf("Cicle is running\n");
    // }

    // буссмысленный цикл
    // while (0 == 1) {
    //     printf("Cicle is not running\n");
    // }

    // одноразовый цикл
    // do {
    //     printf("Cicle is running\n");
    // } while (0 == 1);

    // принудительное завершение цикла
    // while (1) {
    //     printf("Enter negative to stop: ");
    //     scanf("%d", &a);
    //     printf("Entered: %d\n\n", a);
    //     if (a < 0) break;
    // }
    // printf("Cicle has finished\n");

    // принудительное продолжение
    // while (1) {
    //     printf("Enter negative to stop: ");
    //     scanf("%d", &a);
    //     printf("Entered: %d\n\n", a);
    //     if (a >= 0) continue;
    //     break;
    // }
    // printf("Cicle has finished\n");

    // for - со счетчиком
    // for (int i = 0; i < 10; ++i) {
    //     // тело цикла
    //     if (i == 10) break; // прерывает цикл
    //     if (i % 2 == 0) continue; // прерывает текущую итерацию
    //     printf("%d\n", i);
    // }

    int c = 84 - 3 * 10;
    for (int i = 84; i > c; i -= 3) {
        printf("%d\n", i);
    }

    int a = 84;
    for (int i = 0; i >10; ++i) {
        printf("%d\n", a);
        a -= 3;
    }

    int i = 10;
    for (int a = 84; 1; a -= 3) {
        printf("%d\n", a);
        --i;
    }


    return 0;
}