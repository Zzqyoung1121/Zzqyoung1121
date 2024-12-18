#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n,Min=2e9;
int s[15],k[15],ans[15];

void f(int cnt,int ss,int sk,int j){
	for (int i=j+1;i<=n;i++){
		ans[cnt]=i;
		ss*=s[i];
		sk+=k[i];
		Min=min(Min,abs(ss-sk));
		f(cnt+1,ss,sk,i);
		ss/=s[i];
		sk-=k[i];
	}
}

int main(){
	cin>>n;
	for (int i=1;i<=n;i++)	cin>>s[i]>>k[i];
	f(1,1,0,0);
	cout<<Min;
}

