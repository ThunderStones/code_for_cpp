#include "cuboid.h"
#include <iostream>
using namespace std;

// Cuboid::Cuboid(int a, int b, int c)
// {
// 	length = a;
// 	width = b;
// 	height = c;
// }

void Cuboid::setValue()
{
	cout << "input length:";
	cin >> length;
	cout << "input width:";
	cin >> width;
	cout << "input height";
	cin >> height;
}

int Cuboid::getVolume()
{
	return height * width * length;
}
