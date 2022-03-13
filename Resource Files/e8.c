#include <stdio.h>
#include "e8.h"

// Given a five digit integer, print the sum of its digits.

void e8() {

    int n, sum = 0;
    printf("Enter an integer to sum its digits:\n");
    scanf_s("%d", &n);

    while (n) {
        sum += n % 10;
        n = n / 10;
    }

    printf("Sum of the digits: %d", sum);
}