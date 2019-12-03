#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define maxn 1001
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        register int i;
        for(i = 1;i <= n;i++)
        {
            long long a,b,c;
            scanf("%lld %lld %lld",&a,&b,&c);
            if(a+b <= c)
                printf("Case #%d: false\n",i);
            else
                printf("Case #%d: true\n",i);
        }
    }
    return 0;
}
