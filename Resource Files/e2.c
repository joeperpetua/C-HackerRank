#include <stdio.h>
#include <stdlib.h>
#include "e2.h"

// You have to print the character, ch, in the first line. 
// Then print s in next line. In the last line print the sentence, sen.



void e2()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char ch, s[100], sen[100];

    printf("Enter a character to print:\n");
    scanf_s("\n");
    scanf_s("%c", &ch, 1);

    printf("Enter a word to print:\n");
    scanf_s("\n");
    scanf_s("%s", s, (unsigned)_countof(s));

    printf("Enter a sentence to print:\n");
    scanf_s("\n");
    scanf_s("%[^\n]%*c", sen, (unsigned)_countof(sen));

    printf("%c\n%s\n%s", ch, s, sen);
}