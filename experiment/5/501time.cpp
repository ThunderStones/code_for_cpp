#include <iostream>
using namespace std;
// class Time // ����Time��
// {
//     public: // ���ݳ�ԱΪ���õ�
//         int hour;
//         int minute;
//         int sec;
// };
// int main()
// {
//     Time t1;        //����t1ΪTime�����
//     cin >> t1.hour; //�����趨��ʱ��
//     cin >> t1.minute;
//     cin >> t1.sec;
//     cout << t1.hour << ';' << t1.minute << '��' << t1.sec << endl;
//     return 0;
// }

class Time // ����Time��
{
    private: // ���ݳ�ԱΪ���õ�
        int hour;
        int minute;
        int sec;
    public:
        void input()
        {
            cin >> hour >> minute >> sec; 
        }
        void output()
        {
            cout << hour << ':' << minute << ':' << sec << endl;
        }

};

int main()
{
    Time t1;
    t1.input();
    t1.output();
}