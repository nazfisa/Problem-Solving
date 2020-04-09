/*Program to Insertion Sort*/
#include<stdio.h>
#include<math.h>

void InsertHeap(int k);
void DelHeap();

int a[200]= {0,20,10,2,1,40,45,100,21,23,18,15,300},m;
int n=m=12;
int item;

int main()
{
    int i,j;
    for(i=1; i<=n; i++)
        InsertHeap(i);
    printf("After Building a Max Heap\n");
    for(i=1; i<=n; i++)
        printf(" %d ",a[i]);

    while(n>1)
    {
        DelHeap();
        a[n+1]=item;
    }
    printf("\nAfter sorting\n");
    for(i=1; i<=m; i++)
        printf(" %d ",a[i]);
    return 0;
}

void InsertHeap(int k)
{
    int p,par,q,r;
    k=k+1;
    p=k;
    item=a[k];
    while(p>1)
    {
        par=floor(p/2);
        if (item<=a[par])
        {
            a[p]=item;
            return;
        }
        a[p]=a[par];
        p=par;
    }
    a[1]=item;
}

void DelHeap()
{
    int ptr,left,right,last;
    item=a[1];
    last=a[n];
    n=n-1;
    ptr=1;
    left=2;
    right=3;
    while(right<=n)
    {
        if((last>=a[left])&& (last>=a[right]))
        {
            a[ptr]=last;
            return;
        }
        if(a[right]<=a[left])
        {
            a[ptr]=a[left];
            ptr=left;
        }
        else
        {
            a[ptr]=a[right];
            ptr=right;
        }
        left=2*ptr;
        right=left+1;
    }
    if(left==n && last<a[left])
        ptr=left;
    a[ptr]=last;
}
