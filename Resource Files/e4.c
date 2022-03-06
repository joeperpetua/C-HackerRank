#include <stdio.h>
#include "e4.h"

// Write a function int max_of_four(int a, int b, int c, int d) 
// which reads four arguments and returns the greatest of them.

int max_of_four(int a, int b, int c, int d) {
    int numbers[4] = { a, b, c, d }, max = 0;
    int numbers_length = (sizeof(numbers) / sizeof(numbers[0]));

    for (int i = 0; i < numbers_length; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }

    return max;
}

void e4() {
    int a, b, c, d;

    printf("\nInsert 4 int values\n");
    scanf_s("%d %d %d %d", &a, &b, &c, &d);

    int ans = max_of_four(a, b, c, d);
    printf("The highest value is %d", ans);
}