#include <bits/stdc++.h>
using namespace std;
//高精度除高进度  模拟除法原理 在除的过程做减法
string ans1,ans2;//商  余数

bool is_t(string a,string b){//a是否大于b
	if(a.size()>b.size()){
		return true;
	}else if(a.size()==b.size()){
		if(a>b){
			return true;
		}
	}
	return false;
}

void f(string a,string b){
//a/b
	for(int i=0;i<s.size();i++){
		ans2+=a[i];
		if(is_t(ans2,b)){//ans2可以减b
			int cnt=0;
			while(is_t(ans2,b)){
				ans2=//ans2-b;
				cnt++;
			}
			ans1+=char(cnt+'0');
		}else{
			ans1+='0';
		}
	}
}

int main(){
	string a,b;
	cin>>a>>b;
	
}



