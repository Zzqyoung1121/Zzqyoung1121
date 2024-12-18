#include <iostream>
using namespace std;

int n,m;
int dp[35][35];

int main(){
	cin>>n>>m;
	for (int i=0;i<=m;i++){
		for (int j=1;j<=n;j++){
			if (i==0&&j==1)	dp[i][j]=1;
			else if (i==0)	dp[i][j]=0;
			else if (j==1)	dp[i][j]=dp[i-1][n]+dp[i-1][j+1];
			else if (j==n)	dp[i][j]=dp[i-1][1]+dp[i-1][j-1];
			else	dp[i][j]=dp[i-1][j-1]+dp[i-1][j+1];
		}
	}
	cout<<dp[m][1];
} 
