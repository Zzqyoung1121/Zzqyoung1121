#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

int m,n;
int w[35],c[35];
int dp[35][205];

int main(){
	cin>>m>>n;
	for (int i=1;i<=n;i++)	cin>>w[i]>>c[i];
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			if (j>=w[i])	dp[i][j]=max(c[i]+dp[i-1][j-w[i]],dp[i-1][j]);
			else	dp[i][j]=dp[i-1][j];
		}
	}
	cout<<dp[n][m];
}
