#include <iostream>

using namespace std;
class Student              //������
{
    public:                   //���ó�Ա����ԭ������
        void display();
        void setValue()
        {
            cout << "input your age: ";
            cin >> num;
            cin.ignore();
            cout << "input your name: ";
            cin.getline(name, 20);
            cout << "input your sex: (m for man ,w for woman)";
            cin >> sex;
        }
    private:
        int num;
        char name[20];
        char sex;
};
