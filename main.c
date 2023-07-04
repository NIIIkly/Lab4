#include <stdio.h>

int countEqualDivisors(int n) {
    int count = 0;
    int i;

    for (i = 1; i <= n; i++) {
        if (n % i == n / i) {
            count++;
        }
    }

    return count;
}

int main() {
    int n;

    // Ввід числа n
    printf("Введіть натуральне число n: ");
    scanf("%d", &n);

    // Підрахунок кількості рівних дільників
    int result = countEqualDivisors(n);

    // Виведення результату
    printf("Кількість рівних дільників: %d\n", result);

    return 0;
}
