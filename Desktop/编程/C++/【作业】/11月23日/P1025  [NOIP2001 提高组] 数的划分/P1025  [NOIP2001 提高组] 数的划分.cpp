#include <iostream>
using namespace std;

int n,k;
int dp[205][10]; 

int main(){
	cin>>n>>k;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=k;j++){
			if (i==n&&j==k)	dp[i][j]=dp[i-j][j];
			else if (i>j)	dp[i][j]=dp[i-j][j]+dp[i][j-1];
			else if (i==j)	dp[i][j]=1+dp[i][j-1];
			else 	dp[i][j]=dp[i][i]; 
		}
	}
	cout<<dp[n][k];
}
