#include<iostream>
#include <vector>
#include<algorithm>
#include <cstdio>

using namespace std;

#define MAX_NUMBERS 100  //题目中已知 1 < n <= 100

/* 求出一个数分解的中间数据,数据放入到arr中，
   steps返回计算的步数 */
void departNum(int data, int arr[], int& steps)
{
    steps = 0;
    while(data != 1)
    {
        /* 偶数 */
        if (data%2 == 0)
        {
            data = data/2;
        }
        else
        {
            data = (3*data + 1)/2;
        }
        arr[steps] = data;
        steps++;
    }
}

/* sort函数，降序排列 */
bool cmp(int a, int b)
{
    return a > b;
}

int main()
{
    int N = 0, data = 0, steps = 0;
    int i = 0,j = 0, k = 0;
    int num[MAX_NUMBERS] = {0};  //放N个数据
    int medData[MAX_NUMBERS] = {0}; //存放临时的中间数据

    //mask[i] = 0代表是关键字，如果 = 1代表不是关键字
    //初始化都为0，默认都为关键字
    int mask[MAX_NUMBERS] = {0};

    vector<int> vecKeyNums; //存放关键字

    /* 输入N个数据 */
    cin >> N;

    for(i = 0; i < N; i++)
    {
        cin >> num[i];
    }

    for(i = 0;i < N; i ++)
    {
        /* 判断是否是关键字，0 是关键字 */
        if (mask[i] == 0)
        {
            /* 求出中间数据 */
            departNum(num[i],medData,steps);

            /* 判断每一个中间值，是否和num数组中有相同 */
            for(j = 0; j < steps; j++)
            {
                for(k = 0; k < N; k++)
                {
                    /* 如果有相同，则标记为不是关键字 */
                    if(mask[k] == 0 && medData[j] == num[k])
                    {
                        mask[k] = 1;
                        break;
                    }
                }
            }
        }
    }

    /* 把所有的关键字放入 vecKeyNums中 */
    for(i = 0; i < N; i++)
    {
        if (mask[i] == 0)
        {
            vecKeyNums.push_back(num[i]);
        }
    }

    /* 降序排序 */
    sort(vecKeyNums.begin(),vecKeyNums.end(),cmp);

    /* 输出数据 */
    for(i = 0; i < vecKeyNums.size(); i++)
    {
        if (i == 0)
        {
           cout << vecKeyNums[i];
        }
        else
        {
            cout << " " << vecKeyNums[i];
        }
    }
    cout << endl;
}
