#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
typedef struct
{
    char name[11];
    char num[11];
    int score;
}info;
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        info a[n];
        register int i;
        for(i = 0;i < n;i++)
            scanf("%s %s %d",a[i].name,a[i].num,&a[i].score);
        int max=a[0].score,indexmax=0,min=a[0].score,indexmin=0;
        for(i = 0;i < n;i++)
        {
            if(max < a[i].score)
            {
                max = a[i].score;
                indexmax = i;
            }
            if(min > a[i].score)
            {
                min = a[i].score;
                indexmin = i;
            }
        }
        printf("%s %s\n%s %s\n",a[indexmax].name,a[indexmax].num,a[indexmin].name,a[indexmin].num);
    }
    return 0;
}
