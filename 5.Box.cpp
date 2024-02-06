#include<stdio.h>
int main()
{
    int t,i,j,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                printf("*");
            }
            printf("\n");
        }
        if(t==0)
            break;
        else
            printf("\n");
    }
}
