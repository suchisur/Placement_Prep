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
node* makeTree(node *root,int arr[],int i,int j)
{
    if(i<j)
    {
        node *temp=newNode(arr[i]);
        root=temp;
        root->right=makeTree(root->right,arr,(2*i)+2,j);
        root->left=makeTree(root->left,arr,(2*i)+1,j);
        
    }
    return root;
}
node* makeBST(node *root,int n)
{
    if(root==NULL) return newNode(n);
    if(n>root->data) root->right=makeBST(root->right,n);
    if(n<root->data) root->left= makeBST(root->left,n);

    return root;

}
void inorder(node *root)
{
    if(root==NULL) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main()
{
    int arr[]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(arr[0]);
    node *root=new node;
    root=makeTree(root,arr,0,n);
    inorder(root);
    cout<<endl;
    node *newroot=new node;
    for(int i=0;i<n;i++)
    newroot=makeBST(newroot,arr[i]);

    inorder(newroot);
}