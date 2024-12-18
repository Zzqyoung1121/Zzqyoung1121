#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n,k;
int dp[100005];

int main(){
	cin>>n>>k;
	dp[0]=1;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=k;j++){
			if (i-j<0)	break;
			dp[i]=(dp[i]+dp[i-j])%100003;
		}
	}
	cout<<dp[n];
}

