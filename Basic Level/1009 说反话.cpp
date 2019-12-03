#include<bits/stdc++.h>
using namespace std;

int main() {
    char s[90], temp[90][20];
    gets(s);
    int length = strlen(s), flag = 1, cnt = 1, j = 0, k = 0;
    for(int i = 0; i < length; i++) {
        if(s[i] == ' ' && flag == 1) {
            temp[j][k] = '\0';
            j++;
            k = 0;
            flag = 0;
            cnt++;
        }
        if(s[i] != ' ') {
            temp[j][k++] = s[i];
            flag = 1;
        }
    }
    temp[j][k] = '\0';
    for(int i = cnt-1; i > 0; i--)
        cout << temp[i] << " ";
    cout << temp[0];
    return 0;
}
