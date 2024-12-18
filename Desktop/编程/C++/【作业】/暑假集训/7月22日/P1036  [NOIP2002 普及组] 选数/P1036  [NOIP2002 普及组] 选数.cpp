#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

int n,k;
int x[30],ans;

bool prime(int n){
	if (n==1||n==0)	return 0;
	for (int i=2;i*i<=n;i++){
		if (n%i==0)	return 0;
	}
	return 1;
}

void dfs(int step,int sum,int now){
	if (step==k+1){
		if (prime(sum)){
			ans++;
		}
		return ;
	}
	for (int i=now;i<=n;i++){
		dfs(step+1,sum+x[i],i+1);
	}
}

int main(){
	cin>>n>>k;
	for (int i=1;i<=n;i++)	cin>>x[i];
	sort(x+1,x+n+1);
	dfs(1,0,1);
	cout<<ans;
} 
