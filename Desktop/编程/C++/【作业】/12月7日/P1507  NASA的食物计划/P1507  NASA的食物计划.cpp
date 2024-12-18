#include <iostream>
using namespace std;

int H,T,n;
int h[55],t[55],k[55];
int dp[55][405][405];

int main(){
	cin>>H>>T>>n;
	for (int i=1;i<=n;i++)	cin>>h[i]>>t[i]>>k[i];
	for (int i=1;i<=n;i++){
		for (int j=1;j<=H;j++){
			for (int l=1;l<=T;l++){
				if(j>=h[i]&&l>=t[i]){
					dp[i][j][l]=max(dp[i-1][j][l],k[i]+dp[i-1][j-h[i]][l-t[i]]);	
				}
				else{
					dp[i][j][l]=dp[i-1][j][l];
				}
			}
		}
	}
	cout<<dp[n][H][T];
}
