#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node *left;
    node *right;
};
void printLevel(node *root,int level)
{
    if(root==NULL) return;
    if(level==1) cout<<root->data;
    else if(level>1)
    {
        printLevel(root->left,level-1);
        printLevel(root->right,level-1);
    }
}
int height(node *root)
{
    if(root==NULL) return 0;
    int lheight=height(root->left);
    int rheight=height(root->right);
    if(lheight>rheight) return lheight+1;
    else if(rheight>=lheight) return rheight+1;
}

void BfS(node *root)
{
    int h=height(root);
    cout<<"height is :"<<h<<endl;
    for(int i=1;i<=h;i++)
    {
        printLevel(root,i);
    }
}
node* newnode(int data)
{
    node* Node=new node();
    Node->data=data;
    Node->right=NULL;
    Node->left=NULL;
    return (Node);
}
int main()
{
    node *root=newnode(1);
    root->right=newnode(2);
    root->left=newnode(3);
    root->left->left=newnode(4);
    BfS(root);

}