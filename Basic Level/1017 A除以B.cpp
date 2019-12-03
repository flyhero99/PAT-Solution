#include<bits/stdc++.h>
using namespace std;


int main() {
	string a, q_res;
	string str;
	int b, r, q;
	cin >> a >> b;
	int len = a.size();
	int curr = a[0]-'0';
	if(curr >= b)
		q_res.push_back(curr/b+'0');
	for(int i = 1;i < len;i++) {
		q = curr%b;
		curr = q*10+a[i]-'0';
		q_res.push_back(curr/b+'0');
	}
	q = curr%b;
	r = q;
	if(len == 1 && a[0]-'0'<b)//如果a只有一位，而且比b还小，则q=0,r=a;
		cout << "0" << " " << a[0]-'0';
	else
		cout << q_res << " " << r;
	return 0;
}
