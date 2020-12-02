//#include<iostream>
//using namespace std;
//int *f()
//{
// int list[]={1,2,3,4};
//   return list;
//}
//int main()
//{
//int *p=f();
//  cout<<p[0]<<endl;
//  cout<<p[1]<<endl;
//}
#include <iostream>
using namespace std;
int *f()
{
//  int* p = new int[4]{1, 2, 3, 4}; //[Warning] extended initializer lists only available with -std=c++11 or -std=gnu++11
  int* p = new int[4];
  *p = 1;
  *(p + 1)= 2;
  *(p + 2) = 3;
  *(p + 3) = 4;
  //在函数内部定义的变量在函数return后会被释放
  //返回的list会变成野指针
  //输出的结果未知
  return p;
}
int main()
{
  int *p = f();
  cout << p[0] << endl;
  cout << p[1] << endl;
  delete []p;
}
