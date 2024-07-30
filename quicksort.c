#include <stdio.h>
#include <stdlib.h>
#define size 100
int partition(int A[size],int l,int r)
{
    int i,j,pivot,temp;
    pivot=A[l];

    i=l+1;
    j=r;
    while(1)
    {
        while(pivot>=A[i] && i<=r)
            i++;
        while(pivot < A[j])
            j--;
        if(i<j)
        {
            temp=A[i];
            A[i]=A[j];
            A[j]=temp;
        }
        else
        {

            temp=A[j];
            A[j]=A[l];
            A[l]=temp;
        }
        return j;
    }

}
void quicksort(int A[size],int l,int r)
{
    int s;
    if(l<r)
    {
        s=partition(A,l,r);
        quicksort(A,l,s-1);
        quicksort(A,s+1,r);
    }
}
int main()
{
    int A[size],n;
    printf("\n enter the no of elements:\n");
    scanf("%d",&n);
    printf("enter the number of elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    int l=0,r=n-1;
    quicksort(A,l,r);
    printf("elements are:\n");
    for(int i=0;i<n;i++)
        printf("%d\t",A[i]);
    return 0;
}
