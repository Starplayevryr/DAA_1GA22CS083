#include <stdio.h>
#include <stdlib.h>
int w[10],x[10],d;

void Sum_ofSubset(int s,int k,int r)
{
    int i;
    static int b=1;
    x[k]=1;
    if(w[k]+s == d)
    {
        printf("\n Solution %d=",b++);
        for(int i=1;i<=k;i++)
        {
            if(x[i]==1)
                printf("%d\t",w[i]);
        }
        printf("\n");
    }
    else
        if(s+w[k]+w[k+1]<=d)
           Sum_ofSubset(s,k+1,r-w[k]);
    if(s+r-w[k]>=0 && s+w[k+1]<=d)
    {
        x[k]=0;
        Sum_ofSubset(s,k+1,r-w[k]);
    }
    if (b==1)
    {
        printf("\n No solution");
        exit(0);
    }
}
int main()
{
    int i,n,sum=0;
    printf("\n Read no of Elements:");
    scanf("%d",&n);
    printf("\n Read elements in increasing order:\n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&w[i]);
        sum=sum+w[i];
    }
    printf()
    return 0;
}
