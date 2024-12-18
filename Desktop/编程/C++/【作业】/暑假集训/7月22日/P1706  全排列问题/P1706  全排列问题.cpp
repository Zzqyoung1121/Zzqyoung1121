#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>
using namespace std;

int n,p[15];
bool a[15];

void dfs(int step){
	if (step==n+1){
		for (int i=1;i<=n;i++)	cout<<setw(5)<<p[i];
		cout<<endl;
		return ;
	}
	for (int i=1;i<=n;i++){
		if (a[i]==0){
			p[step]=i;
			a[i]=1;
			dfs(step+1);
			a[i]=0;
		}
	}
	
}

int main(){
	cin>>n;
	dfs(1);
}
