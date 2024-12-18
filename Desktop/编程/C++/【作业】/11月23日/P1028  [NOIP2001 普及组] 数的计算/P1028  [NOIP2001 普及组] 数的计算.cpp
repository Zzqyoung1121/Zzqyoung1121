#include <iostream>
using namespace std;

int n,dp[1005];

int main(){
	cin>>n;
	for (int i=1;i<=n;i++){
		dp[i]=1;
		for (int j=1;j<=i/2;j++)	dp[i]+=dp[j];
	}
	cout<<dp[n];
} 
