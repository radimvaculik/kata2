#include <stdio.h>
#include <stdbool.h>

_Bool matchDigit(int number, int digit)
{
    while (number != 0)
    {
        while (number % 10 == digit) {
            return true;
        }
        number /= 10;
    }

    return false;
}

_Bool matchNumber(int number1, int number2) {
    while (number1 != 0) {
        while (!matchDigit(number2, number1 % 10)) {
            return false;
        }
        number1 /= 10;
    }

    return true;
}

int main() {

    for (int i = 100000; i < 1000000; i++) {
        matchNumber(i * 2, i) && matchNumber(i * 3, i) && matchNumber(i * 4, i) && matchNumber(i * 5, i) && matchNumber(i * 6, i)
        ? printf("%d\n", i)
        : printf("");
    }

    return 0;
}
