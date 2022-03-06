#include <stdio.h>
#include <stdlib.h>
#include "e1.h"

// This challenge requires you to print Hello, World!on a single line, and then print the
// already provided input string to stdout.If you are not familiar with C, you may want to
// read about the printf() command.


void e1()
{
    char s[100];
    printf("Enter a character to print:\n");
    scanf_s("\n");
    scanf_s("%[^\n]%*c", &s, (unsigned)_countof(s));

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    printf("Hello, World!\n");
    printf("%s", s);
}
