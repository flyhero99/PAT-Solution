#include<iostream>
#include <vector>
#include<algorithm>
#include <cstdio>

using namespace std;

#define MAX_NUMBERS 100  //��Ŀ����֪ 1 < n <= 100

/* ���һ�����ֽ���м�����,���ݷ��뵽arr�У�
   steps���ؼ���Ĳ��� */
void departNum(int data, int arr[], int& steps)
{
    steps = 0;
    while(data != 1)
    {
        /* ż�� */
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

/* sort�������������� */
bool cmp(int a, int b)
{
    return a > b;
}

int main()
{
    int N = 0, data = 0, steps = 0;
    int i = 0,j = 0, k = 0;
    int num[MAX_NUMBERS] = {0};  //��N������
    int medData[MAX_NUMBERS] = {0}; //�����ʱ���м�����

    //mask[i] = 0�����ǹؼ��֣���� = 1�����ǹؼ���
    //��ʼ����Ϊ0��Ĭ�϶�Ϊ�ؼ���
    int mask[MAX_NUMBERS] = {0};

    vector<int> vecKeyNums; //��Źؼ���

    /* ����N������ */
    cin >> N;

    for(i = 0; i < N; i++)
    {
        cin >> num[i];
    }

    for(i = 0;i < N; i ++)
    {
        /* �ж��Ƿ��ǹؼ��֣�0 �ǹؼ��� */
        if (mask[i] == 0)
        {
            /* ����м����� */
            departNum(num[i],medData,steps);

            /* �ж�ÿһ���м�ֵ���Ƿ��num����������ͬ */
            for(j = 0; j < steps; j++)
            {
                for(k = 0; k < N; k++)
                {
                    /* �������ͬ������Ϊ���ǹؼ��� */
                    if(mask[k] == 0 && medData[j] == num[k])
                    {
                        mask[k] = 1;
                        break;
                    }
                }
            }
        }
    }

    /* �����еĹؼ��ַ��� vecKeyNums�� */
    for(i = 0; i < N; i++)
    {
        if (mask[i] == 0)
        {
            vecKeyNums.push_back(num[i]);
        }
    }

    /* �������� */
    sort(vecKeyNums.begin(),vecKeyNums.end(),cmp);

    /* ������� */
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
