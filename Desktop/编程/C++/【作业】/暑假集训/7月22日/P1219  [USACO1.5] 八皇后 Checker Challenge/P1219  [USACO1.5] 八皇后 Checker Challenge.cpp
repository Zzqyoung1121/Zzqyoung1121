#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n,ans;
int p[50],vis1[50],vis2[50],vis3[50];

void dfs(int step){
	if (step==n+1){
		if (ans<3){
			for (int i=1;i<=n;i++)	cout<<p[i]<<" ";
			cout<<endl;
		} 
		ans++;
	}
	for (int j=1;j<=n;j++){
		if (!vis1[j] && !vis2[step-j+n] && !vis3[step+j]){
			p[step]=j;
			vis1[j]=1;vis2[step-j+n]=1;vis3[step+j]=1;
			dfs(step+1);
			vis1[j]=0;vis2[step-j+n]=0;vis3[step+j]=0;
		}
	}
}

int main(){
	cin>>n;
	dfs(1);
	cout<<ans;
}
