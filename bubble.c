#include <stdio.h>
#include <stdlib.h>
#define size 100
int count;
void bubblesort(int A[size],int n)
{
    int i,j,temp;
    for(i=0;i<=n-2;i++)
    {
        for(j=0;j<=n-2-i;j++)
        {
            count++;
            if(A[j]>A[j+1])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
}
int main()
{
    int i,A[size],n;
    printf("enter the size of the array:\n ");
    scanf("%d",&n);
    printf("\nEnter the elements of the array:\n");
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    bubblesort(A,n);
    printf("Sorted elements are:\n");
    for(i=0;i<n;i++)
        printf("%d\t",A[i]);
    printf("\n Number of Comparisons is : %d ",count);
    return 0;
}
