#include <iostream>
using namespace std;
#include <unordered_set>

int main()
{
    unordered_set<int> set1;
    set1.insert(5);
    set1.insert(1);
    unordered_set<int> set2 = set1;
    set1.erase(1);
    cout << set2.size();
}