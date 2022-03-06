#include <stdio.h>
#include "e7.h"

//For each integer n in the interval[a, b](given as input) :
//    • If 1 <= n <= 9, then print the English representation of it in lowercase.That is "one"
//    for I, "two" for 2, and so on.
//    • Else if n > 9 and it is an even number, then print "even".
//    • Else if n > 9 and it is an odd number, then print "odd".


void e7() {
    int a, b;
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
    printf("Enter an interval start and end value, greater than 0:\n");
    scanf_s("%d\n%d", &a, &b);

    for (int i = a; i <= b; i++) {
        if (i > 0 && i < 10) {
            printf("String of value: %s\n", numbers[i - 1]);
        }
        else if (i > 9 && i % 2 == 0) {
            printf("Even\n");
        }
        else if (i > 9 && i % 2 != 0) {
            printf("Odd\n");
        }
    }
}