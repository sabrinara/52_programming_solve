#include<stdio.h>

int main()
{
    int t,i,n1,n2,n3,a,b,c,temp;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d %d",&n1,&n2,&n3);
        if(n1>n2)
        {
            temp=n1;
            n1=n2;
            n2=temp;
        }
        if(n1>n3)
        {
            temp=n1;
            n1=n3;
            n3=temp;
        }
        if(n2>n3)
        {
            temp=n2;
            n2=n3;
            n3=temp;
        }
        printf("Case %d: %d %d %d\n",i,n1,n2,n3);
    }
}
