#include <iostream>
using namespace std;

int n,a[205],ans;
int dp[205],g[205],t[205];

int main(){
	cin>>n;
	for (int i=1;i<=n;i++)	cin>>a[i];
	for (int i=1;i<=n;i++){
		for (int j=1;j<=i-1;j++){
			if (a[j]<a[i]&&dp[i]<dp[j]){
				dp[i]=dp[j];
				g[i]=j;
			}
		} 
		dp[i]++;
		ans=max(ans,dp[i]);
	} 
	cout<<"max="<<ans<<endl;
	for (int i=n;i>=1;i--){
		if (dp[i]==ans){
			t[ans]=a[i];
			int m=i;
			for (int j=ans-1;j>=1;j--){
				t[j]=a[g[m]];
				m=g[m];
			}
			break;
		}
	}
	for (int i=1;i<=ans;i++)	cout<<t[i]<<" "; 
}
