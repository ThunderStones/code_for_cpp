#include <iostream>

using namespace std;
class Student              //类声明
{
    public:                   //公用成员函数原型声明
        void display();
        void setValue()
        {
            cout << "input your age: ";
            cin >> num;
            cin.ignore();
            cout << "input your name: ";
            cin.getline(name, 20);
            cout << "input your sex: ";
            cin >> sex;
        }
    private:
        int num;
        char name[20];
        char sex;
};
