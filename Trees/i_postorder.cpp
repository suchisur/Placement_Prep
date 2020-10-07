#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node *right;
    node* left;
};
node* newNode(int data)
{
    node* Node=new node;
    Node->data=data;
    Node->left=Node->right=NULL;
    return Node;
}
void postorder(node* root)
{
    stack <node*> s;
    node* curr=root;
    while(curr!=NULL&&s.empty()==false)
    {
        while(curr!=NULL)
        {
            s.push(root);
            s.push(root);
            root=root->left;
        }
        if(s.empty()) return;
        root=s.top();
        s.pop();
        if(!s.empty()&&s.top()==root)
        {
            root=root->right;
        }
        else cout<<root->data<<" "; return;
        
    }

}
int main()
{
    node* root;
    root=newNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
    root->left->left=newNode(4);
    root->left->right=newNode(5);
    postorder(root);

}