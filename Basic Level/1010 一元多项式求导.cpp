#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define maxn 1001
int main()
{
    int a[maxn],b[maxn];
    register int i,j;
    for(i = 0;i < maxn;i++)
    {
        scanf("%d %d",&a[i],&b[i]);
        if(b[i] == 0)
            break;
    }
    for(j = 0;j <= i;j++)
    {
        if(a[j] == 0 || b[j] == 0)
        {
            printf("0 0\n");
        }
        else
        {
            printf("%d %d",a[j]*b[j],b[j]-1);
            if(j == i-1)
            {
                printf("\n");
                break;
            }
            else
                printf(" ");
        }
    }
    return 0;
}
