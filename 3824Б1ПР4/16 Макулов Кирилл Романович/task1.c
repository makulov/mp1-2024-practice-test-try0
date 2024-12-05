#include <stdio.h>
#include "sum.h"

int sum_of_two_numbers(int a, int b) {
    if (a > 0 && b > 0 && a > INT_MAX - b) {
        return INT_MAX; // Переполнение при сложении положительных чисел
    }
    if (a < 0 && b < 0 && a < INT_MIN - b) {
        return INT_MIN; // Переполнение при сложении отрицательных чисел
    }
    return a + b; // Возврат суммы в остальных случаях
}

int main() {
    int a = 2147483647; // INT_MAX
    int b = 1;
    
    int result = sum_of_two_numbers(a, b);
    
    printf("Сумма %d и %d равна: %d\n", a, b, result);
    
    return 0;
}
