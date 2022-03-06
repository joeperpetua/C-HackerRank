#include <stdio.h>
#include "e3.h"

//Your task is to take two numbers of int data type, two numbers of float data type as
//input and output their sum :
//1. Declare 4 variables : two of type intand two of type float.
//2. Read 2 lines of input from stdin(according to the sequence given in the 'Input
//    Format' section below) and initialize your 4 variables.
//3. Use the + and — operator to perform the following operations :
//o Print the sum and difference of two int variable on a new line.
//o Print the sum and difference of two float variable rounded to one decimal place
//on a new line.


void e3() {
    // Var declaration
    int numA, numB;
    float numC, numD;

    // scan values
    printf("\nInsert 2 int values\n");
    scanf_s("%d %d", &numA, &numB);

    printf("\nInsert 2 float values\n");
    scanf_s("%f %f", &numC, &numD);


    // print sum and diff of int
    printf("\nint values:\nSum: %d\nDifference: %d\n", numA + numB, numA - numB);

    // print sum and diff diff of float
    printf("\nfloat values:\nSum: %.1f\nDifference: %.1f\n", (double)numC + (double)numD, (double)numC - (double)numD);
}