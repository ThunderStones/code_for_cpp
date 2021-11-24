#include <iostream>

using namespace std;
struct Node
{
    char name[20];
    int score;
    Node *pnext;
};
class LinkedList
{
private:
    Node *phead;
    int count;

public:
    LinkedList();
    void sort(bool);          //创建链表，true正序，false倒序
    int size();               //计算链表长度
    void removeall();         //清空链表
    void insertNode(Node& node,int pos); //插入节点（在pos后，若pos为0，则插在头指针）
    void deleteNode(int pos); //删除节点（全部节点从1开始计数）
    Node *locate(int pos);    //查找节点内容
    void out();               //输出链表
    void invert();            //链表反向
};
LinkedList::LinkedList() {
    count = 0;
    Node node = {"phead", -1, nullptr};
    phead = &node;
    
}
void LinkedList::sort(bool flag)
{
    Node * temp = phead;
    int f = flag ? 1 : -1;
    if (phead->pnext == nullptr)
        return;
    for (int i = 1; i < count; i++, temp = temp->pnext)
    {
        
        while (temp->pnext->pnext != nullptr)
        {
            if ((temp->score * f > temp->pnext->score * f))
            {
                Node * tempNode = temp->pnext;
                temp->pnext = tempNode->pnext;
                tempNode->pnext = tempNode->pnext->pnext;
                temp->pnext->pnext = tempNode;
            }
            
        }
    
    }
}
int LinkedList::size()
{
    return count;
}
void LinkedList::removeall()
{
    if (count == 0)
        return;
    
    phead = phead->pnext;
    while (phead != nullptr)
    {
        Node * temp = phead;
        phead = phead->pnext;
        delete(temp);
    }
    count = 0;
}
void LinkedList::insertNode(Node& node, int pos)
{
    pos = pos > count ? count : pos;
    pos = pos < 0 ? 0 : pos;
    Node * p = nullptr;
    for (int i = 0; i < pos; i++)
    {
        p = p->pnext;
    }
    node.pnext = p->pnext;
    p->pnext = &node;
    count++;
}
void LinkedList::deleteNode(int pos)
{
    if (pos > count || pos < 1)
        return;
    

    Node *ptemp = phead;
    
    for (int i = 0; i < pos - 1; i++)
    {
        ptemp = ptemp->pnext;
    }
    Node * temp = ptemp->pnext;
    ptemp->pnext = ptemp->pnext->pnext;
    delete(temp);
    count--;
}
Node *LinkedList::locate(int pos)
{
    if (pos < 1 || pos > count)
    {
        return nullptr;
    }
    
    Node *ptemp = phead;    
    for (int i = 1; i <= pos; i++)
    {
        ptemp = ptemp->pnext;
    }
    return ptemp;
}
void LinkedList::out()
{
    Node *ptemp = phead->pnext;
    while(ptemp != nullptr)
    {
        ptemp = ptemp->pnext;
        cout << "name  " << ptemp->name << endl;
        cout << "score " << ptemp->score << endl;
    }
}
void LinkedList::invert()
{
    // struct Node *ptemp1 = phead;
    // struct Node *ptemp2;
    // struct Node *ptemp3;
    // int i = 0;
    // if (count == 2)
    // {
    //     ptemp1 = phead->pnext;
    //     ptemp1->pnext = phead;
    //     phead = ptemp1;
    // }
    // else if (count > 2)
    // {
    //     ptemp3 = ptemp1;
    //     ptemp1 = ptemp1->pnext;
    //     ptemp2 = ptemp1;
    //     ptemp1 = ptemp1->pnext;
    //     ptemp2->pnext = ptemp3;
    //     ptemp3->pnext = NULL;
    //     while (ptemp1->pnext != NULL)
    //     {
    //         ptemp3 = ptemp2;
    //         ptemp2 = ptemp1;
    //         ptemp1 = ptemp1->pnext;
    //         ptemp2->pnext = ptemp3;
    //     }
    //     ptemp1->pnext = ptemp2;
    //     phead = ptemp1;
    // }
}

int main(int argc, char const *argv[])
{
    LinkedList* l = new LinkedList();
    Node node1 = {"a", 1, nullptr};
    l->insertNode(node1, 0);
    Node node2 = {"b", 2, nullptr};
    l->insertNode(node2, 0);
    Node node3 = {"c", 3, nullptr};
    l->insertNode(node3, 0);
    
    l->out();
    l->sort(1);
    l->out();
    return 0;
}
