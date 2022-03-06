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
    return;
}

int max_of_four(int a, int b, int c, int d) {
    int numbers[4] = {a, b, c, d }, max = 0;
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

    return;
}

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

    return;
}

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

    return;
}

void e7(){
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

    return;
}

int main()
{
    int selection;

    printf("Select an exercise to run. (1 to 7)\n");
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
    case 5:
        printf("Running exercise %d\n", selection);
        e5();
        break;
    case 6:
        printf("Running exercise %d\n", selection);
        e6();
        break;
    case 7:
        printf("Running exercise %d\n", selection);
        e7();
        break;
    default:
        printf("Selected exercise %d not found", selection);
        break;
    }

    return 0;
}