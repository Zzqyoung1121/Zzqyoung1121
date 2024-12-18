#include <iostream>
#define int long long
using namespace std;

int dp[25][25];
int vis[25][25];
int fx,fy,sx,sy;
int dx[10]={0,-1,-1,-2,-2,1,1,2,2};
int dy[10]={0,-2,2,-1,1,-2,2,-1,1};

signed main(){
	cin>>fx>>fy>>sx>>sy;
	vis[sx][sy]=1;
	for (int i=1;i<=8;i++){
		int tx=sx+dx[i];
		int ty=sy+dy[i];
		if (tx>=0&&tx<=fx&&ty>=0&&ty<=fy)	vis[tx][ty]=1;
	}
	for (int i=0;i<=fx;i++){
		for (int j=0;j<=fy;j++){
			if (i==0&&j==0)	dp[i][j]=1;
			else if (vis[i][j]==1)	dp[i][j]=0;
			else if (i==0)	dp[i][j]=dp[i][j-1];
			else if (j==0)	dp[i][j]=dp[i-1][j];
			else	dp[i][j]=dp[i-1][j]+dp[i][j-1];
		}
	}
	cout<<dp[fx][fy];
} 
