#include <iostream>
class A
{
public:
    int a;
};

class B : public A
{
public:
    int a;
    void func() {
        std::cout << A::a << B::a;
    }
};