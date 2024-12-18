#include <iostream>
using namespace std;

int m,n;
int a[55][55];
int dp[55][55][55][55];

int main(){
	cin>>m>>n;
	for (int i=1;i<=m;i++){
		for (int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	for (int x=1;x<=m;x++){
		for (int y=1;y<=n;y++){
			for (int p=1;p<=m;p++){
				for (int q=1;q<=n;q++){
					//max(dp[x][y-1][p][q-1],dp[x-1][y][p-1][q])
					//max(dp[x][y-1][p-1][q],dp[x-1][y][p][q-1])
					dp[x][y][p][q]=max(max(dp[x][y-1][p][q-1],dp[x-1][y][p-1][q]),max(dp[x][y-1][p-1][q],dp[x-1][y][p][q-1]));
					if (x==p&&y==q)	dp[x][y][p][q]+=a[x][y];
					else	dp[x][y][p][q]+=(a[x][y]+a[p][q]);
				}
			}
		}
	}
	cout<<dp[m][n][m][n];
}
