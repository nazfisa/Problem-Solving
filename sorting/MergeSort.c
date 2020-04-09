//Program to sort n-numbers using Insertion sort
#include <stdio.h>
# include<math.h>
void MergeSort(int low, int high);
void Merge(int low, int mid, int high);

int A[11]= {0, 20,10,2,30,40,15,35,25,55,60},n=10,loc,M;
int b[11];
void main()
{
    int l,k,temp,ptr;
    int low=0,high=n;
    for(k=0; k<=n-2; k++)
    {
        MIN(k);
        temp=A[k];
        A[k]=A[loc];
        A[loc]=temp;
    }

    for(l=0; l<n; l++)
        printf(" %d ",A[l]);
}               //end of main

void MergeSort(low,high)
{
    int j,mid;

    if(low<high)
    {
        mid=floor((low+high)/2);
        MergeSort(low,mid);
        MergeSort(mid+1,high);
        Merge(low,mid,high);
    }

}

void Merge(low,mid,high)
{
    int h=low,i=low,j=mid+1,k;
    while((h<=mid)&&(j<=high))
    {
        if(A[h<=a[j])
        {
            b[i]=a[h];
            h=h+1;
        }
        else
        {
            b[i]=a[j];
            j=j+1;
        }
        i=i+1;
    }
    if(h>mid)
    {
        for (k=j; k<=high; k++)
        {
            b[i]=a[k];
            i=i+1;
        }
        else
        {
            for (k=h; k<=mid; k++)

                b[i]=a[k];
            i=i+1;
        }
    }
    for(k=low;k<=high;k++)
    a[k]=b[k];
}
