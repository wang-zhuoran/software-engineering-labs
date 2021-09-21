#include <iostream>
#include <fstream>
#include <stack>
using namespace std;

/* 
Return the total num of keywords in a code file
the path directed to.
*/
int countKeywords(string &path)
{
	return 1;
}

void read(string &path, int &level)
{
	cout << "Please type in the path if code file: ";
	cin >> path;
	cout << "Please select the level of completion: ";
	cin >> level;
	if (level <= 0 || level > 4)
	{
		throw "Unexpected level number!";
	}
}

void readFile(string &path, string code)
{
	fstream in_file;
	in_file.open(path);
	in_file >> code;
	//cout << code << endl;
}

void solve(string &path, int &level)
{
	switch (level)
	{
	case 1:
		cout << "Case 1: Count keywords" << endl;
		cout << "total num: " << countKeywords(path) << endl;
		break;
	case 2:
		cout << "Case 2" << endl;
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
	string path;
	string code;
	int level;
	read(path, level);
	readFile(path, code);
	cout << code << endl;
	//cout << path << " " << level << endl;
	solve(path, level);
	system("pause");
	return 0;
}