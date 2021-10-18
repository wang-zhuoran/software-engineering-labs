#include <iostream>
#include <algorithm>
#include <string>
#include <set>

const set<string> sign = {"+", "-", "*", "/"};

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

int main()
{
    int num_questions;
    string grade;

    read(grade, num_questions);

    return 0;
}
