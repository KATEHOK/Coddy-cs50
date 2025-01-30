#include <stdio.h>

unsigned long long factor(int n) {
    if (n < 0) {
        return 0;
    } else if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factor(n - 1);
    }
}

int main() {
    int num;
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    unsigned long long result = factor(num);
    if (result == 0 && num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d is: %llu\n", num, result);
    }

    return 0;
}


int my_pow(int base, int exponent) {
    if (exponent == 0) {
        return 1;
    } else {
        return base * my_pow(base, exponent - 1); 
    }
}

int main() {
    int base, exponent;
    printf("Введите основание: ");
    scanf("%d", &base);
    printf("Введите степень (неотрицательное целое число): ");
    scanf("%d", &exponent);

    if (exponent < 0) {
        printf("Степень должна быть неотрицательной!\n");
    } else {
        printf("%d в степени %d равно %d\n", base, exponent, my_pow(base, exponent));
    }

    return 0;
}
#include <stdio.h>
#include <math.h>

double my_pow(double n, double m);

void test_my_pow() {
    double test_values[][2] = {
        {2.0, 3.0},
        {3.0, 2.0},
        {5.0, 0.0},
        {0.0, 2.0},
        {2.0, -2.0}
    };
    int num_tests = sizeof(test_values) / sizeof(test_values[0]);
    
    for (int i = 0; i < num_tests; i++) {
        double n = test_values[i][0];
        double m = test_values[i][1];
        double my_result = my_pow(n, m);
        double std_result = pow(n, m);
        
        if (fabs(my_result - std_result) > 1e-6) { 
            printf("Тест не пройден: n = %.2f, m = %.2f, my_pow(n, m) = %.6f, pow(n, m) = %.6f\n",
                   n, m, my_result, std_result);
        }
    }
    
    printf("Все тесты пройдены!\n");
}

double my_pow(double n, double m) {
    double result = 1.0;
    for (int i = 0; i < (int)m; i++) {
        result *= n;
    }
    if (m < 0) {
        return 1.0 / result;
    }
    return result;
}

int main() {
    test_my_pow();
    return 0;
}