#include <iostream>
using namespace std;
// class Time // 定义Time类
// {
//     public: // 数据成员为公用的
//         int hour;
//         int minute;
//         int sec;
// };
// int main()
// {
//     Time t1;        //定义t1为Time类对象
//     cin >> t1.hour; //输入设定的时间
//     cin >> t1.minute;
//     cin >> t1.sec;
//     cout << t1.hour << ';' << t1.minute << '：' << t1.sec << endl;
//     return 0;
// }

class Time // 定义Time类
{
    private: // 数据成员为公用的
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