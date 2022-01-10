#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,t1=0,t2=1,nexterm=t1+t2;
    printf("Enter positive number:");
    scanf("%d",&n);
    printf("\nFibonacci series:%d %d ",t1,t2);
    for(i=3;i<=n;++i)
    {
      printf("%d ",nexterm);
      t1=t2;
      t2=nexterm;
      nexterm=t1+t2;
    }
       int j=2,m,t3=0,t4=1,nexterm1=t3+t4;
    printf("\n\nEnter positive number:");
    scanf("%d",&m);
    printf("\nFibonacci series:%d %d ",t3,t4);
        while(j<=m)
        {
            printf("%d ",nexterm1);
            t3=t4;
            t4=nexterm1;
            nexterm1=t3+t4;
            j++;
        }
        printf("\n");
}
