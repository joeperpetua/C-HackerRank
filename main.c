#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include "e1.h"
#include "e2.h"
#include "e3.h"
#include "e4.h"
#include "e5.h"
#include "e6.h"
#include "e7.h"


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