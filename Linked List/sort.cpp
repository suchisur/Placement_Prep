#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node *next;
    node(int data)
    {
        this->data=data;
        next=NULL;
    }
};
class LinkedList
{
    public:
    node *head;
    LinkedList()
    {
        head=NULL;
    }
    void push(int data)
    {
        node *temp=new node(data);
        temp->next=head;
        head=temp;
    }
    void print()
    {
        node *temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;

        }
    }
    node *getHead()
    {
        return head;
    }


};
node* Merge(node *a,node *b)
{
    node *head=NULL;
    node *tail=NULL;
    if(a==NULL) return b;
    if(b==NULL) return a;
    if(a->data<=b->data)
    {
        head=a;
        tail=a;
        a=a->next;
    }
    else
    {
        head=b;
        tail=b;
        b=b->next;
    }
    while(a!=NULL&&b!=NULL)
    {
        if(a->data<=b->data)
        {
            tail->next=a;
            tail=a;
            a=a->next;
        }
        else
        {
            tail->next=b;
            tail=b;
            b=b->next;
        }
        
    }
    if(a==NULL)
    {
        tail->next=b;
    }
    else tail->next=a;

    return head;
    
    
}
void P(node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}

int main()
{
    LinkedList l;
    l.push(25);
    l.push(10);
    l.push(2);
    l.print();
    cout<<endl;
    LinkedList m;
    m.push(35);
    m.push(19);
    m.push(1);
    m.print();
    cout<<endl;
    node *res;
    res=Merge(l.getHead(),m.getHead());
    P(res);

}