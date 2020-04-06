#include <iostream>
#include <string.h> // string spelling
using namespace std;
int getLIndex(char[], char); // added prototype
int getFIndex(char[], char);
int main()
{
	char str[100];
	char ch;
	int Lindex, Findex;
	cin >> str; // semi colon
	cin >> ch;
	Lindex = getLIndex(str, ch);
	Findex = getFIndex(str, ch);
	if (Lindex != -1)
		cout << Findex << endl
			 << Lindex;
	else
		cout << "NOT FOUND" << endl;
	return 0;
}
int getFIndex(char string[], char c) // square brackets and spelling changed
{
	int size = strlen(string); // strlen function
	int i = 0;
	while (i < size)
	{
		if (string[i] == c)
		{
			return i;
			break;
		}
		i++;
	}
}
int getLIndex(char string[], char c) // square brackets and spelling changed
{
	{
		int size = strlen(string); // strlen function
		int i = size;
		while (i >= 0) // removed semicolon
		{
			if (string[i] == c)
			{
				return i;
				break;
			}
			i--;
		}
	}
}