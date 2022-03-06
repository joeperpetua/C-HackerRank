#include <stdio.h>
#include "e5.h"

// Complete the function void update(int* a, int* b). It receives two integer
// pointers, int* aand int* b. Set the value of a to their sum, and b to their absolute
// difference.There is no return value, and no return statement is needed.


void update(int* a, int* b) {
    int temp_values[2];

    temp_values[0] = *a + *b;
    temp_values[1] = *a - *b;

    // if the diff is a negative value, turn into positive to get the abs value.
    if (temp_values[1] < 0) {
        temp_values[1] = temp_values[1] * (-1);
    }

    *a = temp_values[0];
    *b = temp_values[1];
}

void e5() {
    int a, b;
    int* pa = &a, * pb = &b;

    printf("Insert 2 int values to get their sum and their absolute difference:\n");
    scanf_s("%d %d", &a, &b);

    update(pa, pb);

    printf("Sum: %d\nAbsolute diff: %d", a, b);
}
