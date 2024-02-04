#include <stdio.h>
#include <string.h>

int main()
{
    int T, i, j,k,p;
    char n[101];
    scanf("%d", &T);

    for (i=1; i<=T; i++)
    {
         scanf("%s", n);
         k = strlen(n);
         p = n[k-1];

         if (p % 2 == 0)
         {
             printf("even\n");
         }

         else
         {
             printf("odd\n");
         }
     }

     return 0;
}
