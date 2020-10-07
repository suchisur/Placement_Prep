#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node *left;
    node *right;
};

node* newNode(int data)
{
    node *Node=new node();
    Node->data=data;
    Node->left=Node->right=NULL;
    return Node;
}
node* insert(node* root,int key)
{
    if(root==NULL) return newNode(key);

    if(key<root->data)
    {
        root->left=insert(root->left,key);
    }
    if(key>root->data)
    {
        root->right=insert(root->right,key);
    }

    return root;
}

void inorder(node *root)
{
    if(root==NULL) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
node *findMin(node *root)
{
    node *c=root;
    while(c&&c->left!=NULL)
    {
        c=c->left;
    }
    return c;
}
node* deleteNode(node *root,int key)
{
    if(root==NULL) return root; // base case
    if(root->data>key)
    {
        root->left=deleteNode(root->left,key);
    }
    if(root->data<key)
    {
        root->right=deleteNode(root->right,key);
    }
    if(root->data==key)
    {
        if(root->left==NULL)
        {
            node *temp=root->right;
            free(root);
            return temp;

        }
        else if(root->right==NULL)
        {
            node *temp=root->left;
            free(root);
            return temp;

        }

        node *temp=findMin(root->right);
        root->data=temp->data;
        root->right=deleteNode(root->right,temp->data);


    }
     


    return root;

}
void search(node *root,int n)
{
    if(root==NULL) cout<<"Not found";
    if(root->data>n) search(root->left,n);
    if(root->data<n) search(root->right,n);
    if(root->data==n)
    {
        cout<<"Element found"<<endl;
    }
}
int main()
{
      /* Let us create following BST 
            50 
        /     \ 
        30     70 
        / \ / \ 
    20 40 60 80 */
     node *root = NULL; 
    root = insert(root, 50); 
    root = insert(root, 30); 
    root = insert(root, 20); 
    root = insert(root, 40); 
    root = insert(root, 70); 
    root = insert(root, 60); 
    root = insert(root, 80);

    
    cout<<"Inorder :";
    inorder(root);

    cout<<"\nDelete 20\n"; 
    root = deleteNode(root, 20); 
    cout<<"Inorder traversal of the modified tree \n"; 
    inorder(root); 
  
    cout<<"\nDelete 30\n"; 
    root = deleteNode(root, 30); 
    cout<<"Inorder traversal of the modified tree \n"; 
    inorder(root); 
  
    cout<<"\nDelete 50\n"; 
    root = deleteNode(root, 50); 
    cout<<"Inorder traversal of the modified tree \n"; 
    inorder(root); 

    search(root,30);
  
}