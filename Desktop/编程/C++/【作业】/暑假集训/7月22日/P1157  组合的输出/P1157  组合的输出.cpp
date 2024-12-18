#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>
using namespace std;

int n,r,p[25];

void dfs(int step,int now){
	if (step==r+1){
		for (int i=1;i<=r;i++)	cout<<setw(3)<<p[i];
		cout<<endl; 
		return ;
	}
	for (int i=now;i<=n;i++){
		p[step]=i;
		dfs(step+1,i+1);
	}
}

int main(){
	cin>>n>>r;
//	for (int i=1;i<=n;i++)	a[i]=i;
	dfs(1,1);
}
