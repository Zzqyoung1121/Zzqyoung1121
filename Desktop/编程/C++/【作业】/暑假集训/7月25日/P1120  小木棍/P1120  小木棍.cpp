#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n,m,a[105],t[105],flag,s=0,tlen,tk;

void dfs(int len,int k,int j){
	if (flag)	return ;
	if (tk==k){
		flag=1;
		return ;
	}
	for (int i=j;i<=n;i++){
		if (t[a[i]]>0&&len+a[i]<=tlen){
			t[a[i]]--;
			if (len+a[i]==tlen){
				dfs(0,k+1,1);
			}
			else {
				dfs(len+a[i],k,i);
			}
			t[a[i]]++;
			if (len==0||len+a[i]==tlen)	return ;
		}
	}
}

int main(){
	cin>>m;
	for (int i=1;i<=m;i++){
		int c;
		cin>>c;
		s+=c;
		if (c<=50){
			t[c]++;
			if (t[c]==1){
				n++;
				a[n]=c;
			}
		}
	}
	sort(a+1,a+n+1,greater<int>() );
	for (int i=a[1];;i++){
		flag=0;
		if (s%i==0){
			tlen=i;tk=s/i;
			dfs(0,0,1);
			if (flag==1){
				cout<<i;
				break;
			}
		}
	}
}
