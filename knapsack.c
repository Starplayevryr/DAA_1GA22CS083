#include <stdio.h>
#include <stdlib.h>

int max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}
int main()
{
    int n,w[10],v[10],V[10][10],W,i,j,x[10]={0};
    printf("\n Read number of objects:\n ");
    scanf("%d",&n);

    printf("\n Read weights of the objects:\n");
    for(i=1;i<=n;i++)
        scanf("%d",&w[i]);

    printf("\n Read profits of the objects:\n");
    for(i=1;i<=n;i++)
        scanf("%d",&v[i]);

    printf("\n Read Knapsack capacity:\n");
      scanf("%d",&W);

    for(i=0;i<=n;i++)
    {
        for(j=0;j<=W;j++)
        {
            if(i==0 || j==0)
                V[i][j]=0;
            else if(j<w[i])
               V[i][j]=V[i-1][j];
            else
                V[i][j]=max(V[i-1][j],V[i-1][j-w[i]]+v[i]);
            printf("%d\t",V[i][j]);
        }
        printf("\n");
    }

   printf("\n The max profit is: %d",V[n][W]);
   i=n;
   j=W;
   while(i!=0 && j!=0)
   {
       if(V[i][j] != V[i-1][j])
       {
           x[i]=1;
           j=j-w[i];
       }
       i=i-1;
   }
   printf("\n Objects included are:\n");
   for(i=1;i<=n;i++)
   {
       if(x[i] == 1)
          printf("\n %d object is included ",i);
   }
    return 0;
}