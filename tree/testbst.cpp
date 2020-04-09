#include<bits/stdc++.h>
using namespace std;
struct node{
int data;
node *left;
node *right;
};

bool isBSTUTL(node * root,int minvalue,int maxvalue)
{
    if(root==NULL) return true;
    if (root->data<minvalue &&root->data>maxvalue
        &&isBSTUTL(root->left,minvalue,root->data)
        &&isBSTUTL(root->right,root->data,maxvalue))
        return true;
    else
        return false;


}
isBST(node* root)
{
    return isBSTUTL(root,INT_MIN,INT_MAX);
}
node* getnewnode(int data)
{
    node* newnode = new node();
    newnode->data=data;
    newnode->left= newnode->right=NULL;
    return newnode;
}
node* Insert(node* root,int data)
{

    if (root==NULL)
    {
        ///empty tree
        root=getnewnode(data);

    }
    else if (data<=root->data)
    {
        root->left =Insert(root->left,data);
    }
    else
    {
        root->right=Insert(root->right,data);
    }
    return root;
}
int main()
{
   node* root=NULL;;
    root= Insert (root,7);
    root= Insert (root,4);
    root= Insert (root,1);
    root= Insert (root,6);
    root= Insert (root,9);
    if(isBST(root)==true)
        cout<<"true";
    else
        cout<<"false";

}
