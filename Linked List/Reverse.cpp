#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
    node(int data)
    {
        this->data=data;
        next=NULL;
    }
};
struct LinkedList
{
    node *head;
    LinkedList()
    {
        head=NULL;
    }
    void push(int data)
    {
        struct node *temp=new node(data);
        temp->next=head;
        head=temp;
    }
    void print()
    {
        struct node *temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }

    void reverse(){
        struct node *next,*prev,*curr;
        curr=head;
        prev=NULL;
        next=NULL;
        while(curr!=NULL)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;

        }
        head=prev;
        
    }
};
int main()
{
    LinkedList l;
    l.push(2);
    l.push(3);
    l.push(1);
    l.push(7);
    l.print();
    l.reverse();
    l.print();
}