#include<bits/stdc++.h>
using namespace std;
struct  bstnode
{
    int data;
    bstnode* left;
    bstnode* right;
};
bstnode* getnewnode(int data)
{
    bstnode* newnode = new bstnode();
    newnode->data=data;
    newnode->left= newnode->right=NULL;
    return newnode;
}
bstnode* Insert(bstnode* root,int data)
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
bool Search (bstnode* root, int data)
{
    if (root==NULL) return false;
    else if (root->data==data) return true;
    else if(data<=root->data) return Search(root->left, data);
    else return Search (root->right,data);
}
int FindMIn(bstnode* root)
{
    if(root==NULL)
    {
        cout<<"ERORR\n";
        return -1;
    }
    while(root->left!=NULL)
    {
        root=root->left;
    }
    return root->data;
}
int FindHeight(bstnode* root)
{
    if(root==NULL)
    {
        return -1;
    }
    return max(FindHeight(root->left),FindHeight(root->right))+1;
}
levelOrder(bstnode* root)
{
    if(root==NULL)
        return NULL;

    queue <bstnode*> Q;
    Q.push(root);
    while(!Q.empty())
    {
        bstnode* current =Q.front();
        cout<<current->data<<" ";
        if(current->left !=NULL) Q.push(current->left);
        if(current->right !=NULL) Q.push(current->right);
        Q.pop();
    }
}
preorder(bstnode* root)
{
    if(root==NULL)
        return NULL;
    printf("%d",root->data);
    cout<<" ";
    preorder(root->left);
    preorder(root->right);
}
Inorder(bstnode* root)
{
    if(root==NULL)
        return NULL;
    Inorder(root->left);
    printf("%d",root->data);
    cout<<" ";
    Inorder(root->right);
}
postorder(bstnode* root)
{
    if(root==NULL)
        return NULL;
    postorder(root->left);
    postorder(root->right);
    printf("%d",root->data);
    cout<<" ";

}
int main()
{
    bstnode* root=NULL;;
    root= Insert (root,15);
    root= Insert (root,10);
    root= Insert (root,20);
    root= Insert (root,25);
    int number;
    cin>>number;
    if(Search(root,number)==true) cout<<"Found\n";
    else cout<<"Not Found\n";
    cout<<"minimum number is:\n";
    cout<<FindMIn(root);
    cout<<"\nHight of tree\n";
    cout<<FindHeight(root);
    cout<<"\nlevel order traversal\n";
    cout<<levelOrder(root);
    cout<<"\npreorder \n";
    cout<<preorder(root);
    cout<<"\nInorder \n";
    cout<<Inorder(root);
    cout<<"\nPostorder \n";
    cout<<postorder(root);
}
