#include <stdio.h>
#include "e9.h"

/*

You will be given an integer n, and a threshold k.

For each number i from 1 through n, find the maximumn value of the logical AND, OR and XOR when compared against all integers through n that are greater than i.

Consider a value only if the comparison retuns are result less than k.

Print the results of the and, or and exclusive or comparisons on separate lines, in that order.


*/

void calculate_the_maximum(int n, int k) {
    // create dynamic array
    int* array;
    array = calloc(n, sizeof(int));
    int array_length = 0;

    // get integers in n
    for (int i = 0; i < n; i++) {
        *(array + i) = i + 1;
        array_length++;
    }

    int max[3] = { 0, 0, 0 };

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < array_length; j++) {
            if (array[j] > i + 1) {
                int tempAND = (i + 1) & array[j];
                int tempOR = (i + 1) | array[j];
                int tempXOR = (i + 1) ^ array[j];

                // Comparing AND
                if (tempAND > max[0] && tempAND < k) {
                    max[0] = tempAND;
                }

                // Comparing OR
                if (tempOR > max[1] && tempOR < k) {
                    max[1] = tempOR;
                }

                // Comparing XOR                
                if (tempXOR > max[2] && tempXOR < k) {
                    max[2] = tempXOR;
                }
            }
        }
    }
    printf("Max value of AND comparison: %d\nMax value of OR comparison: %d\nMax value of XOR comparison: %d", max[0], max[1], max[2]);
}

void e9() {
    int n, k;
    printf("Insert integer N and threshold K:\n");
    scanf_s("%d %d", &n, &k);
    calculate_the_maximum(n, k);
}