#include <iostream>
using namespace std;

int n,m,v[25],p[25];
int dp[25][30005];

int main(){
	cin>>m>>n;
	for (int i=1;i<=n;i++)	cin>>v[i]>>p[i];
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			if (j>=v[i]){
				dp[i][j]=max(dp[i-1][j],dp[i-1][j-v[i]]+v[i]*p[i]);
			}
			else {
				dp[i][j]=dp[i-1][j];
			}
		}
	}
	cout<<dp[n][m];
}
