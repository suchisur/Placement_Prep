#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node *right;
    node *left;
};
node* newNode(int data)
{
    node *Node=new node();
    Node->data=data;
    Node->right=NULL;
    Node->left=NULL;
    return Node;
}

int sumpath(node *root,int val)
{
    if(root==NULL) return 0;
    val=val+ root->data;
    if(root->left==NULL&&root->right==NULL) return val;

    return sumpath(root->left,val)+sumpath(root->right,val);


}
int main()
{
    node *root=newNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
    root->left->left=newNode(4);
    root->left->right=newNode(5);
    cout<<sumpath(root,0)<<" ";
}