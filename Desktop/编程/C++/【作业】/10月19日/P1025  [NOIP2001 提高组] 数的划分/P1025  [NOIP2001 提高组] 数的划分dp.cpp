#include <iostream>
using namespace std;

int n,k,dp[205][10];

int main(){
	cin>>n>>k;
	for (int i=1;i<=n;i++){
		dp[i][1]=1;
		for (int j=2;j<=k&&j<=i;j++){
			dp[i][j]=dp[i-1][j-1]+dp[i-j][j];
		}
	}
	cout<<dp[n][k];
}
