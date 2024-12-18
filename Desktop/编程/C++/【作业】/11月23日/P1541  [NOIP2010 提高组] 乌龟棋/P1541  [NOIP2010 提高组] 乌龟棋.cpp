#include <iostream>
using namespace std;

int n,m;
int a[355];
int x,y,z,s;
int dp[125][125][125][125];

int main(){
	cin>>n>>m;
	for (int i=1;i<=n;i++)	cin>>a[i];
	for (int i=1;i<=m;i++){
		int b;
		cin>>b;
		if (b==1)	x++;
		if (b==2)	y++;
		if (b==3)	z++;
		if (b==4)	s++;
	}
	for (int i=0;i<=x;i++){
		for (int j=0;j<=y;j++){
			for (int k=0;k<=z;k++){
				for (int l=0;l<=s;l++){
					if (i!=0)	dp[i][j][k][l]=max(dp[i][j][k][l],dp[i-1][j][k][l]);
					if (j!=0)	dp[i][j][k][l]=max(dp[i][j][k][l],dp[i][j-1][k][l]);
					if (k!=0)	dp[i][j][k][l]=max(dp[i][j][k][l],dp[i][j][k-1][l]);
					if (l!=0)	dp[i][j][k][l]=max(dp[i][j][k][l],dp[i][j][k][l-1]);
					dp[i][j][k][l]+=a[i*1+j*2+k*3+l*4+1];
				}
			}	 
		}
	}
	cout<<dp[x][y][z][s];
}
