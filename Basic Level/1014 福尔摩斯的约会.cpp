#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>
using namespace std;

int main()
{
	string ss[4],s1="",s2="";
	int count=0;
	int mark=0;
	string xinqi[7]={"MON","TUE","WED","THU","FRI","SAT","SUN"};

	cin>>ss[0]>>ss[1]>>ss[2]>>ss[3];
	s1=ss[0];
	s2=ss[1];
	for(int z=0;z<s1.length(),z<s2.length();z++){
			if(s1[z]==s2[z]){

				if((s1[z]>='A' && s1[z]<='G')){
					int bb = (s1[z]-'A');
					cout<<xinqi[bb]<<" ";  //日期
					mark=z;
					break;
				}

			}


	}
	for(int h =mark+1;h<s1.length(),h<s2.length();h++){
		if(s1[h]==s2[h] && (s1[h]>='A'&& s1[h]<='N' || s1[h]>='0'&&s1[h]<='9')){
				if(s1[h]>='0'&&s1[h]<='9'){
					cout<<"0"<<s1[h]-'0'<<":";

				}else{
					cout<<s1[h]-'A'+10<<":"; //时
					count=2;
				}
				break;
			}

	}
	for(int n=0;n<ss[2].length();n++){
		if((ss[2][n]>='a'&&ss[2][n]<='z')||(ss[2][n]>='A'&&ss[2][n]<='Z')){
			if(ss[2][n]==ss[3][n]){
				if(n<10){
					cout<<"0"<<n;   //分
				}else{
					cout<<n;
				}
				break;
			}
		}
	}
	return 0;
}
