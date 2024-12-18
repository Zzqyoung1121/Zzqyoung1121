#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int dp[205][205];
string a,b;

int main(){
	while (cin>>a>>b){
		memset(dp,0,sizeof(dp));
		int x=a.size(),y=b.size();
		for (int i=0;i<=x;i++){
			for (int j=0;j<=y;j++){
				if (i==0||j==0)	dp[i][j]=0;
				else if (a[i-1]==b[j-1])	dp[i][j]=dp[i-1][j-1]+1;
				else	dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
			}
		}
		cout<<dp[x][y]<<endl;
	}
}
