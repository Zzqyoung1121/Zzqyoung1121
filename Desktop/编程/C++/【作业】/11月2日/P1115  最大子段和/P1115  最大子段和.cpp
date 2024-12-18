#include <iostream>
using namespace std;

int n,a[200005],dp[200005];
int ans=-2e9;

int main(){
	cin>>n;
	for (int i=1;i<=n;i++)	cin>>a[i];
	for (int i=1;i<=n;i++){
		if (i==1)	dp[i]=a[i];
		else	dp[i]=max(dp[i-1]+a[i],a[i]);
		ans=max(ans,dp[i]);
	}
	cout<<ans;
}
