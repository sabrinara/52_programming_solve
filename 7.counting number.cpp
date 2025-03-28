#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t;
    char line[10000];
    char *p, *e;
    long input;
    int count =0;
    scanf("%d", &t);
    while(t--)
    {
    count =0;
    scanf(" %[^\n]",line);
    p= line;

    for(p=line; ;p=e)

    {
        input = strtol(p,&e,10);
        if(p==e)
        {
            break;
        }
        count ++;
    }
    printf("%d\n",count);}

    return 0;
}
