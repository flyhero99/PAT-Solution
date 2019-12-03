#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        int cnt = 0;
        while(n != 1)
        {
            if(n % 2 == 0)
            {
                n /= 2;
                cnt++;
            }
            else
                n = 3*n + 1;
        }
        printf("%d\n",cnt);
    }
}
