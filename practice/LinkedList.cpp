#include <iostream>
using namespace std;
struct Node
{
    char name[20];
    int score;
    struct Node *pnext;
};
class LinkedList
{
private:
    Node *phead;
    int count;

public:
    void sort(bool);          //创建链表，true正序，false倒序
    int size();               //计算链表长度
    void removeall();         //清空链表
    void insertNode(int pos); //插入节点（在pos后，若pos为0，则插在头指针）
    void deleteNode(int pos); //删除节点（全部节点从1开始计数）
    Node *locate(int pos);    //查找节点内容
    void out();               //输出链表
    void invert();            //链表反向
};
void LinkedList::sort(bool flag)
{
    struct Node *phead = NULL;
    struct Node *pend, *pnew; //pnew接收新数据，pend将数据接到链表
    count = 0;
    pend = pnew = new struct Node; //给未赋值结构体指针分配空间
    cout << "成绩" << endl;
    cin >> pnew->score;
    if (flag)
    {
        while (pnew->score != EOF)
        {
            cout << "名字" << endl;
            cin >> pnew->name;
            count++;
            if (count == 1)
            {
                pnew->pnext = phead;
                pend = pnew;
                phead = pnew;
            }
            else
            {
                pnew->pnext = NULL;
                pend->pnext = pnew;
                pend = pnew;
            }
            pnew = new struct Node;
            cout << "成绩" << endl;
            cin >> pnew->score;
        }
    }
    else
    {
        while (pnew->score != EOF)
        {
            cout << "名字" << endl;
            cin >> pnew->name;
            count++;
            if (count == 1)
            {
                pnew->pnext = NULL;
                pend = pnew;
            }
            else
            {
                pnew->pnext = pend;
                pend = pnew;
            }
            pnew = new struct Node;
            cout << "成绩" << endl;
            cin >> pnew->score;
        }
        phead = pend;
    }
    delete (pnew); //释放最后无用的pnew空间
}
int LinkedList::size()
{
    return count;
}
void LinkedList::removeall()
{
    struct Node *temp1;
    struct Node *temp2;
    temp1 = phead;
    temp2 = temp1->pnext;
    while (temp2 != NULL)
    {
        delete (temp1);
        temp1 = temp2;
        temp2 = temp1->pnext;
    }
    delete (temp1);
    count = 0;
}
void LinkedList::insertNode(int pos)
{
    struct Node *ptemp1, *pnew;
    struct Node *ptemp = phead;
    pnew = new (struct Node);
    int i;
    cout << "成绩" << endl;
    cin >> pnew->score;
    cout << "名字" << endl;
    cin >> pnew->name;
    if (pos == 0)
    {
        pnew->pnext = phead;
        phead = pnew;
    }
    else if (pos == count)
    {
        for (i = 2; i <= pos; i++)
        {
            ptemp = ptemp->pnext;
        }
        ptemp->pnext = pnew;
        pnew->pnext = NULL;
    }
    else
    {
        for (i = 2; i <= pos; i++)
        {
            ptemp = ptemp->pnext;
        }
        ptemp1 = ptemp->pnext;
        ptemp->pnext = pnew;
        pnew->pnext = ptemp1;
        ;
    }
    count++;
}
void LinkedList::deleteNode(int pos)
{
    struct Node *ptemp = phead;
    struct Node *ptemp1;
    int i;
    if ((pos > count) || (pos <= 0))
        cout << "链表总长度为%d" << count << endl;
    if (pos == 1)
    {
        phead = ptemp->pnext;
        delete (ptemp);
    }
    else if (pos == count)
    {
        for (i = 2; i < count; i++)
        {
            ptemp = ptemp->pnext;
        }
        ptemp1 = ptemp->pnext;
        ptemp->pnext = NULL;
        delete (ptemp1);
    }
    else
    {
        for (i = 2; i < pos; i++)
        {
            ptemp = ptemp->pnext;
        }
        ptemp1 = ptemp->pnext;
        ptemp->pnext = ptemp1->pnext;
        delete (ptemp1);
    }
    count--;
}
Node *LinkedList::locate(int pos)
{
    struct Node *ptemp = phead;
    int i;
    for (i = 1; i <= pos; i++)
    {
        ptemp = ptemp->pnext;
    }
    cout << "链表的第%d个节点的内容为：" << pos << endl;
    cout << "name" << ptemp->name << endl;
    cout << "score" << ptemp->score << endl;
    return ptemp;
}
void LinkedList::out()
{
    struct Node *ptemp = phead;
    int i;
    for (i = 1; i < count; i++)
    {
        cout << "name" << ptemp->name << endl;
        cout << "score" << ptemp->score << endl;
        ptemp = ptemp->pnext;
    }
    cout << "name" << ptemp->name << endl;
    cout << "score" << ptemp->score << endl;
}
void LinkedList::invert()
{
    struct Node *ptemp1 = phead;
    struct Node *ptemp2;
    struct Node *ptemp3;
    int i = 0;
    if (count == 2)
    {
        ptemp1 = phead->pnext;
        ptemp1->pnext = phead;
        phead = ptemp1;
    }
    else if (count > 2)
    {
        ptemp3 = ptemp1;
        ptemp1 = ptemp1->pnext;
        ptemp2 = ptemp1;
        ptemp1 = ptemp1->pnext;
        ptemp2->pnext = ptemp3;
        ptemp3->pnext = NULL;
        while (ptemp1->pnext != NULL)
        {
            ptemp3 = ptemp2;
            ptemp2 = ptemp1;
            ptemp1 = ptemp1->pnext;
            ptemp2->pnext = ptemp3;
        }
        ptemp1->pnext = ptemp2;
        phead = ptemp1;
    }
}
int main()
{
    cout << "说明：输入c  创建链表，s  计算长度，r  清空链表，i  插入节点，d  删除节点，l  查找节点内容，o  输出链表，f  链表反向" << endl;
    cout << "请输入需求" << endl;
    char n;
    bool flag;
    int pos;
    LinkedList L;
    while (cin >> n)
    {
        switch (n)
        {
        case 'c':
        {
            cout << "请输入正序或倒序（正序true，倒序false）" << endl;
            cin >> flag;
            L.sort(flag);
            continue;
        }
        case 's':
        {
            cout << L.size() << endl;
            continue;
        }
        case 'r':
        {
            L.removeall();
            continue;
        }
        case 'i':
        {
            cout << "请输入插入位置（为相应节点后面，插于头指针前则输入‘0‘）" << endl;
            cin >> pos;
            if (pos > L.size())
            {
                cout << "数字大于链表长度，链表长度为%d" << L.size() << endl;
                continue;
            }
            L.insertNode(pos);
            continue;
        }
        case 'd':
        {
            cout << "请输入删除位置" << endl;
            cin >> pos;
            if (pos > L.size())
            {
                cout << "数字大于链表长度，链表长度为%d" << L.size() << endl;
                continue;
            }
            L.deleteNode(pos);
            continue;
        }
        case 'l':
        {
            cout << "请输入节点位置" << endl;
            cin >> pos;
            if (pos > L.size())
            {
                cout << "数字大于链表长度，链表长度为%d" << L.size() << endl;
                continue;
            }
            cout << "节点地址为" << L.locate(pos) << endl;
            continue;
        }
        case 'o':
        {
            L.out();
            continue;
        }
        case 'f':
        {
            L.invert();
            continue;
        }
        }
    }
}