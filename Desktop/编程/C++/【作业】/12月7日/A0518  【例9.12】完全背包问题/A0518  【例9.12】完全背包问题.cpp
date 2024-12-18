#include <iostream>
using namespace std;

int n,m,w[35],v[35];
int dp[205];

int main(){
	cin>>m>>n;
	for (int i=1;i<=n;i++)	cin>>v[i]>>w[i];
	for (int i=1;i<=n;i++){
		for (int j=v[i];j<=m;j++){
			dp[j]=max(dp[j],dp[j-v[i]]+w[i]);
		}
	}
	cout<<"max="<<dp[m];
} 
