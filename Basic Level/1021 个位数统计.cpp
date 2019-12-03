#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char a[1005];
    while(~scanf("%s",a))
    {
        int i,cnt[10]={0};
        for(i = 0;i < strlen(a);i++)
        {
            if(a[i] == '0')
                cnt[0]++;
            else if(a[i] == '1')
                cnt[1]++;
            else if(a[i] == '2')
                cnt[2]++;
            else if(a[i] == '3')
                cnt[3]++;
            else if(a[i] == '4')
                cnt[4]++;
            else if(a[i] == '5')
                cnt[5]++;
            else if(a[i] == '6')
                cnt[6]++;
            else if(a[i] == '7')
                cnt[7]++;
            else if(a[i] == '8')
                cnt[8]++;
            else
                cnt[9]++;
        }
        for(i = 0;i < 10;i++)
        {
            if(cnt[i] != 0)
                printf("%d:%d\n",i,cnt[i]);
        }
    }
    return 0;
}
