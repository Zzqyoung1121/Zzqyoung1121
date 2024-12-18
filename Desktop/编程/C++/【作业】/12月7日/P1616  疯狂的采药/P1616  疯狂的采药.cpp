#include <iostream>
#define int long long
using namespace std;

int n,m,w[10005],v[10005];
int dp[10000005];

signed main(){
	cin>>m>>n;
	for (int i=1;i<=n;i++)	cin>>v[i]>>w[i];
	for (int i=1;i<=n;i++){
		for (int j=v[i];j<=m;j++){
			dp[j]=max(dp[j],dp[j-v[i]]+w[i]);
		}
	}
	cout<<dp[m];
} 
