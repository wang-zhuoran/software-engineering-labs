#include <iostream>
#include <algorithm>
#include <string>
#include <set>
#include <limits.h>
#include <stdlib.h>


int extractGrade(string &grade)
{
    string str1=grade.substr(grade.length()-1);
    int num = stoi(str1);
    return num;
}

int generateEquation(int grade)
{
    int ans;
    if(grade == 1 || grade == 2)
    {

    }else if(grade == 3 || grade == 4)
    {

    }else
    {

    }
    return ans;
}



void read(string &grade, int &num_questions)
{

}

void solve(string &garde, int &num_questions)
{
    int grade_num = extractGrade(grade);
    int num_correct = 0;
    int ans;
    for (int i = 0; i < num_questions; i++)
    {
        ans = generateEquation(grade_num);
        int input;
        cin >> input;
        if (ans == input)
        {
            num_correct++;
        }
    }
    if (num_correct == num_questions)
    {
        cout << "end! All right, that's great! Your score is 100." << endl;
    }
    else
    {
        cout << "end! Wrong question, your score is " << (num_correct * 0.1 / num_question) * 100 << endl;
    }
}

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
}


int main()
{
    int num_questions;
    string grade;

    read(grade, num_questions);

    return 0;
}
