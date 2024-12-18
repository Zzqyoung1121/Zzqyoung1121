#include <iostream>
#define int long long 
using namespace std;

int n,m,a[1005][1005],dp[1005][1005][2];

signed main(){
	cin>>n>>m;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	for (int j=1;j<=m;j++){
		if (j==1){
			for (int i=1;i<=n;i++){
				if (i==1)	dp[i][j][0]=dp[i][j][1]=a[i][j];
				else	dp[i][j][1]=dp[i-1][j][1]+a[i][j];
			}
		}
		else if (j==2){
			for (int i=n;i>=1;i--){
				if (i==n)	dp[i][j][0]=dp[i][j-1][1]+a[i][j];
				else	dp[i][j][0]=max(dp[i+1][j][0],dp[i][j-1][1])+a[i][j];
			}
			for (int i=1;i<=n;i++){
				if (i==1)	dp[i][j][1]=dp[i][j-1][1]+a[i][j];
				else	dp[i][j][1]=max(dp[i-1][j][1],dp[i][j-1][1])+a[i][j];
			}
		}
		else {
			for (int i=n;i>=1;i--){
				if (i==n)	dp[i][j][0]=max(dp[i][j-1][0],dp[i][j-1][1])+a[i][j];
				else	dp[i][j][0]=max(dp[i+1][j][0],max(dp[i][j-1][0],dp[i][j-1][1]))+a[i][j];
			}
			for (int i=1;i<=n;i++){
				if (i==1)	dp[i][j][1]=max(dp[i][j-1][0],dp[i][j-1][1])+a[i][j];
				else	dp[i][j][1]=max(dp[i-1][j][1],max(dp[i][j-1][0],dp[i][j-1][1]))+a[i][j];
			}
		}
	}
	/*
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			cout<<dp[i][j][0]<<" ";
		}
		cout<<endl;
	} 
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			cout<<dp[i][j][1]<<" ";
		}
		cout<<endl;
	} 
	*/
	cout<<max(dp[n][m][0],dp[n][m][1]);
} 

/*
5 5
-644 757 859 741 -778
-35 -842 -106 -942 -648
-805 729 350 -101 -548
623 954 -840 376 -308
-439 -323 -538 -82 541

2574
*/
