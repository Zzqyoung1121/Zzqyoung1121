#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n,a[30],vis[30],s=0,flag,t;

void dfs(int len,int k){
	if (flag)	return ;
	if (k==4){
		flag=1;
		return ;
	}
	for (int i=1;i<=n;i++){
		if (vis[i]==0){
			if (len+a[i]<=s){
				vis[i]=1;
				if (len+a[i]==s){
					dfs(0,k+1);
				}
				else {
					dfs(len+a[i],k);
				}
			}
		}
	}
}

int main(){
	cin>>t;
	while (t--){
		flag=0;s=0;
		memset(vis,0,sizeof(vis));
		cin>>n;
		for (int i=1;i<=n;i++){
			cin>>a[i];
			s+=a[i];
		}
		if (s%4==0){
			s/=4;
			dfs(0,0);
			if (flag)	cout<<"yes"<<endl;
			else	cout<<"no"<<endl;
		}
		else	cout<<"no"<<endl;
	}
}
