#include <stdio.h>
#include "e6.h"

//Given a positive integer denoting n, do the following :
//• If 1 <= n <= 9, print the lowercase English word corresponding to the number(e.g.,
//    one for 1, two for 2, etc.).
//• If n > 9, print Greater than 9.


void e6() {
    int num;
    char numbers[9][6] = {
        "one",
        "two",
        "three",
        "four",
        "five",
        "six",
        "seven",
        "eight",
        "nine"
    };

    printf("Enter a number greater than 0:\n");
    scanf_s("%d", &num);

    if (num > 0 && num < 10) {
        printf("String of value: %s", numbers[num - 1]);
    }
    else if (num > 9) {
        printf("Greater than 9");
    }
}