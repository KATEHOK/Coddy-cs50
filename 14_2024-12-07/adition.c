#include <stdio.h>

// Ищет сумму двух целых
int sum(int first, int second) {
    return first + second;
}

// #
// ##
// ###
// ####
// ......
// ##########

int main() {
    int ogurets = 9, kukuruza = 36;
    int result = sum(ogurets, kukuruza);
    printf("%d\n", result);
    printf("%d\n", sum(567, kukuruza));
    printf("%d\n\n", sum(ogurets, 78));

    // while | do-while | for
    // 10 раз вывести счетчик
    for (int schetchik = 1; schetchik < 10; ++schetchik) {
        printf("%d\n", schetchik);
    }

    return 0;
}
