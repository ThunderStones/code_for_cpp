#include <iostream>
#include <cstring>
using namespace std;

void count(const char s[], int counts[])
{
	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			counts[s[i] - 65]++;
		if (s[i] >= 'a' && s[i] <= 'z')
			counts[s[i] - 97]++;
	}
	for (int i = 0; i < 26; i++)
	{
		if (counts[i])
		{
			cout << static_cast<char>(i + 97) << ":" << counts[i] << "times" << endl;
		}
	}
}
int main()
{
	int alp[26] = {0};
	char s1[100];
	cin.getline(s1, 100);
	count(s1, alp);
}
