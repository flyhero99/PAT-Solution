#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
typedef long long ll;
int main()
{
    int n;
    char c;
    scanf("%d %c",&n,&c);
    int i,j;
    int t = sqrt( (n+1)/2 );
    int rest = n-2*t*t+1;
    for(i = 0;i < t;i++)
    {
        for(j = 0;j < i;j++)
            printf(" ");
        for(j = 0;j < 2*t-2*i-1;j++)
            printf("%c",c);
        printf("\n");
    }
    for(i = t-2;i >= 0;i--)
    {
        for(j = 0;j <i;j++)
            printf(" ");
        for(j = 0;j < 2*t-2*i-1;j++)
            printf("%c",c);
        printf("\n");
    }
    printf("%d\n",rest);
    return 0;
}
