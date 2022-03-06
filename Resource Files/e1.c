#include <stdio.h>
#include "e1.h"

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
