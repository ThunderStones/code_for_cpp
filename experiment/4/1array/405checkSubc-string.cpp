#include <iostream>
#include <cstring>
using namespace std;

int indexOf(const char s1[], const char s2[])
{
	int index(-1), indexNow(0);
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	bool flag = true;
	for (int i = 0; i <= len2 - len1; i++)
	{
		indexNow = i;
		flag = true; 
		for (int j = 0; j < len1; j++)
		{
			if (s1[j] != s2[i + j])
			{
				flag = false;
				break;
			}
		}
		if (flag)
		{
			index = indexNow;
			break;
		}
	}
	return index;
}
int main()
{
    char fs[100], ss[100];
    cin.getline(fs, 100);
    cin.getline(ss, 100);
	cout << "indexOf(\""<< fs << "e\", \"" << ss <<"\") is " 
	<< indexOf(fs, ss);
}
