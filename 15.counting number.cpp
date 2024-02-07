#include<stdio.h>
#include<string.h>
int main()
{
    int count[26]={0},i,t,j;
    char s[1000];
    scanf("%d",&t);
    for(j=0;j<t;j++)
    {
      scanf(" %[^\n]",s);
int count[26]={0};
    for(i=0;i< strlen(s);i++ )
    {
        if(s[i]>='a' && s[i]<='z')
          count[s[i]-'a']++;
    }
    for(i=0;i<26;i++)
    {
        if(count[i]!=0)
        {
            printf("%c = %d\n",'a'+i,count[i]);

        }
    }printf("\n");

    }
}
