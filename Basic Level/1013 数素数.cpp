#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#define maxn 110000
int prime[maxn];
int a[10001];
int main()
{
    int m,n;
    while(~scanf("%d %d",&m,&n))
    {
        int i,j,cnt=0;
        memset(prime,1,sizeof(prime));
        prime[0] = prime[1] = 0;
        for(i = 2;i < maxn/2;i++)
        {
            if(prime[i])
            {
                for(j = i+i;j < maxn;j += i)
                    prime[j] = 0;
            }
        }
        j = 1;
        for(i = 0;i < maxn;i++)
        {
            if(prime[i] != 0)
                a[j++] = i;
        }
        for(i = m;i < n;i++)
        {
            printf("%d",a[i]);
            cnt++;
            if(cnt != 10)
                printf(" ");
            if(cnt == 10)
            {
                printf("\n");
                cnt = 0;
            }
        }
        printf("%d\n",a[n]);
    }
    return 0;
}
