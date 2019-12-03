#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char a[5];
    while(~scanf("%s",a))
    {
        int len = strlen(a);
        register int i;
        if(len == 1)
        {
            for(i = 1;i <= (a[0]-'0');i++)
                printf("%d",i);
            printf("\n");
        }
        else if(len == 2)
        {
            for(i = 0;i < (a[0]-'0');i++)
                printf("S");
            for(i = 1;i <= (a[1]-'0');i++)
                printf("%d",i);
            printf("\n");
        }
        else if(len == 3)
        {
            for(i = 0;i < (a[0]-'0');i++)
                printf("B");
            for(i = 0;i < (a[1]-'0');i++)
                printf("S");
            for(i = 1;i <= (a[2]-'0');i++)
                printf("%d",i);
            printf("\n");
        }
    }
    return 0;
}
