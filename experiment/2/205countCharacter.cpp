#include <iostream>
using namespace std;

int main()
{
	char a;
	int charCount(0), numCount(0), otherCount(0), spaceCount(0);
	cin.get(a);
	while(a != '\n')
	{
		if (a >= 'a' && a <= 'z' || a >='A' && a <= 'Z')
		{
			charCount += 1;
			//cout << charCount << endl;
		}
		else if(a == ' ')
		{
			spaceCount += 1;
			//cout << spaceCount << endl;
		}
		else if(a >= '1' && a <='9')
		{
			numCount += 1;
			//cout << numCount << endl;
		}
		else
		{
			otherCount += 1;
			//cout << otherCount << endl;
		}
		cin.get(a);
	}
	cout << "char :" << charCount << endl
		<< "number :" << numCount << endl  
		<< "space :" << spaceCount << endl 
		<< "other :" << otherCount << endl;
}
