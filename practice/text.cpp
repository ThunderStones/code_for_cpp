#include <iostream>
using namespace std;
struct Node
{
    char name[20];
    int score;
    Node *pnext;
};

int main(int argc, char const *argv[])
{
    Node * a, b;
    a = new Node;
    cin >> b.score >> a->score;
    cout << a->score << endl << b.score;
    return 0;
}
