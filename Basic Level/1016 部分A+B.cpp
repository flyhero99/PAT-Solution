#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
int main()
{
    char a[10],b[10];
    int da,db;
    while(~scanf("%s %d %s %d",a,&da,b,&db))
    {
        int i,cnt1=0,cnt2=0,s1=0,s2=0;
        for(i = 0;i < strlen(a);i++)
        {
            if(a[i]-'0' == da)
            {
                cnt1++;
                s1 = 10*s1 + da;
            }
        }
        for(i = 0;i < strlen(b);i++)
        {
            if(b[i]-'0' == db)
            {
                cnt2++;
                s2 = 10*s2 + db;
            }
        }
        printf("%d\n",s1+s2);
    }
    return 0;
}
