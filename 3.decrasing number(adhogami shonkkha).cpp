#include<stdio.h>
int main()
{
    for(int i=1000;i>=1; )
        {
            printf("%d\t",i);
            i--;
         if(i%5==0)
         {
             printf("\n");
         }
         }
 return 0;
}
