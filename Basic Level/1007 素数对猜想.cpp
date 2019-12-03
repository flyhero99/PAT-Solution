#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define maxn 100001
int a[maxn]={0};
int IsPrime(int n)
{
    register int i,d=sqrt(n);
    for(i = 2;i <= d;i++)
        if(n % i == 0) return 0;
    return 1;
}
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        register int i,j=0,cnt=0;
        for(i = 2;i <= n;i++)
            if(IsPrime(i)) a[j++] = i;
        for(i = 0;i < j-1;i++)
            if((a[i+1]-a[i]) == 2) cnt++;
        printf("%d\n",cnt);
    }
    return 0;
}
