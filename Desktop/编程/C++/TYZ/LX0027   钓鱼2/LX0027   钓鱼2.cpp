#include <iostream>
#include <bits/stdc++.h>
#include <queue>
#define int long long 
using namespace std;

int n,T,ans,las;
int a[100005],b[100005];
priority_queue<int> Q;

signed main(){
	cin>>n>>T;
	for (int i=1;i<=n;i++)	cin>>a[i];
	for (int i=1;i<=n;i++)	cin>>b[i];
	for (int i=1;i<=n;i++){
		T-=2;
		while (a[i]>0){
			Q.push(-a[i]);
			ans+=a[i];
			a[i]-=b[i];
		}
		while (Q.size()>T){
			ans+=Q.top();
			Q.pop();
		}
		las=max(ans,las);
		cout<<las<<" ";
	}
} 
