#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define MySwap(a,b) a=a+b;b=a-b;a=a-b
int IsPrime(int n)
{
    register int i,d=sqrt(n);
    for(i = 2;i <= d;i++)
        if(n % i == 0) return 0;
    return 1;
}
int main()
{
    int n,num;
    while(~scanf("%d %d",&n,&num))
    {
        int a[n];
        if(num > n)
            num %= n;
        register int i,j;
        for(i = 0;i < n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i = 0;i < num;i++)
        {
            for(j = 0;j < n-num;j++)
            {
                MySwap(a[j+i],a[n-num+i]);
            }
        }
        for(i = 0;i < n-1;i++)
        {
            printf("%d ",a[i]);
        }
        printf("%d\n",a[n-1]);
    }
    return 0;
}
