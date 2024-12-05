#include <limits.h> // Для UINT_MAX

unsigned int product_of_two_numbers(unsigned int a, unsigned int b) {
    // Проверяем, не произойдет ли переполнение
    if (a == 0 || b == 0) {
        return 0; // Если одно из чисел 0, возвращаем 0
    }
    
    // Проверка на переполнение
    if (a > UINT_MAX / b) {
        return UINT_MAX; // Если a * b > UINT_MAX, возвращаем UINT_MAX
    }
    
    return a * b; // Возвращаем произведение
}
