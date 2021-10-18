#include <iostream>
#include <limits.h>
#include <stdlib.h>

using namespace std;


double generateEquation(int grade)
{
    double ans = 0;
    int num1;
    int num2;
    int randomOperationIndex;
    string opChar[4] = { "+", "-", "*", "/" };
    if (grade == 1 || grade == 2)
    {
        num1 = rand() % 100 + 1;
        num2 = rand() % 100 + 1;

        randomOperationIndex = (rand() % 2);
        switch (randomOperationIndex) {
        case 0:
            printf("%d + %d = ?", num1, num2);
            ans = num1 + num2;
            break;
        case 1:
            printf("%d - %d = ?", num1, num2);
            ans = num1 - num2;
            break;
        }
    }
    else if (grade == 3 || grade == 4)
    {
        num1 = rand();
        num2 = rand();
        randomOperationIndex = (rand() % 4);
        switch (randomOperationIndex) {
        case 0:
            printf("%d+%d = ?", num1, num2);
            ans = num1 + num2;
            break;
        case 1:
            printf("%d-%d = ?", num1, num2);
            ans = num1 - num2;
            break;
        case 2:
            printf("%d*%d = ?", num1, num2);
            ans = num1 * num2;
            break;
        case 3:
            printf("%d/%d = ?", num1, num2);
            ans = num1 / num2;
            break;
        }
    }
    else
    {
        double num1 = (double)(rand()) / RAND_MAX * INT_MAX;
        double num2 = (double)(rand()) / RAND_MAX * INT_MAX;
        randomOperationIndex = (rand() % 4);
        switch (randomOperationIndex) {
        case 0:
            printf("%lf+%lf = ?", num1, num2);
            ans = num1 + num2;
            break;
        case 1:
            printf("%lf-%lf = ?", num1, num2);
            ans = num1 - num2;
            break;
        case 2:
            printf("%lf*%lf = ?", num1, num2);
            ans = num1 * num2;
            break;
        case 3:
            printf("%lf/%lf = ?", num1, num2);
            ans = num1 / num2;
            break;
        }
    }
    return ans;