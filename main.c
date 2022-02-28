#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void e1()
{
    char s[100];
    printf("Enter a character to print:\n");
    scanf_s("\n");
    scanf_s("%[^\n]%*c", &s, (unsigned)_countof(s));

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    printf("Hello, World!\n");
    printf("%s", s);
    return;
}

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


    return;
}

void e3() {

    return;
}

void e4() {

    return;
}

int main()
{
    int selection;

    printf("Select an exercise to run. (1 to 4)\n");
    scanf_s("\n");
    scanf_s("%d", &selection);

    switch (selection)
    {
    case 1:
        printf("Running exercise %d\n", selection);
        e1();
        break;
    case 2:
        printf("Running exercise %d\n", selection);
        e2();
        break;
    case 3:
        printf("Running exercise %d\n", selection);
        e3();
        break;
    case 4:
        printf("Running exercise %d\n", selection);
        e4();
        break;
    default:
        printf("Selected exercise %d not found", selection);
        break;
    }

    return 0;
}