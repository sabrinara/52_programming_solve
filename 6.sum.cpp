#include<stdio.h>
int main()
{
    int t,n,i,r,l,m;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        l=n%10;

        for(i=1;i<=5;i++)
          {
            r=n%10;
            n=n/10;
            m=r;
            if(n==0)
            {
                break;
            }
          }
            printf("Sum = %d\n",m+l);
    }
}
