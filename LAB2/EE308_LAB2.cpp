#include <iostream>
#include <fstream>
#include <stack>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

const set<string> keywords = {"auto", "break", "case", "char", "const",
							  "continue", "default", "do", "double", "else",
							  "enum", "extern", "float", "for", "goto", "if",
							  "int", "long", "register", "return", "short",
							  "signed", "sizeof", "static", "struct", "switch",
							  "typedef", "union", "unsigned", "void",
							  "volatile", "while"};

bool isNotLetter(char x)
{
	return !((x >= 65) && (x <= 90) || (x >= 97) && (x <= 122));
}

/* 
Return the total num of keywords in a code file
the path directed to.
*/
int countKeywords(vector<string> &code)
{
	int total_num = 0;
	for (int i = 0; i < code.size(); i++)
	{
		if (keywords.find(code[i]) != keywords.end())
		{
			total_num++;
		}
	}
	return total_num;
}

/*
Print the number of "switch case" structures, and output 
the number of "case" corresponding to each group
*/
void countSwitchAndCase(vector<string> &code)
{
}

void read(string &path, int &level)
{
	// cout << "Please type in the path if code file: ";
	// cin >> path;
	cout << "Please select the level of completion: ";
	cin >> level;
	if (level <= 0 || level > 4)
	{
		throw "Unexpected level number!";
	}
}

void readFile(string &path, vector<string> &code)
{
	ifstream file(path);
	string temp;
	while (file >> temp)
	{
		code.push_back(temp);
	}
	// for (int i = 0; i < code.size(); i++)
	// {
	// 	cout << code[i] << endl;
	// }
	//cout << code << endl;
}

void preprocess(vector<string> &code)
{
	for (int i = 0; i < code.size(); i++)
	{
		string temp = code[i];
		temp.erase(std::remove_if(temp.begin(), temp.end(), isNotLetter),
				   temp.end());
		code[i] = temp;
	}
}

void solve(vector<string> &code, int &level)
{
	switch (level)
	{
	case 1:
		cout << "Case 1: Count keywords" << endl;
		cout << "total num: " << countKeywords(code) << endl;
		break;
	case 2:
		cout << "Case 2" << endl;
		countSwitchAndCase(code);
		break;
	case 3:
		cout << "Case 3" << endl;
		break;
	case 4:
		cout << "Case 4" << endl;
		break;
	default:
		break;
	}
}

int main()
{
	string path = "D:\\Study\\third_year\\software_engineering\\local_repo\\software-engineering-labs\\LAB2\\C_test_file.txt";
	vector<string> code;
	int level;
	read(path, level);
	readFile(path, code);
	preprocess(code);
	// for (int i = 0; i < code.size(); i++)
	// {
	// 	cout << code[i] << endl;
	// }
	solve(code, level);
	system("pause");
	return 0;
}
