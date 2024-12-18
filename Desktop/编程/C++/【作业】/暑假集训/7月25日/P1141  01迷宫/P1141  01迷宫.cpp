#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n,m,fx,fy,cnt;
int ans[1000005];
int vis[1005][1005];
char mp[1005][1005];
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};
int color;

void dfs(int x,int y){
	ans[color]++;
	for (int i=0;i<=3;i++){
		int tx=x+dx[i],ty=y+dy[i];
		if (tx>=1&&tx<=n&&ty>=1&&ty<=n){
			if (mp[tx][ty]!=mp[x][y]&&vis[tx][ty]==0){
				vis[tx][ty]=color;
				dfs(tx,ty);
			}
		}
	}
}

int main(){
	cin>>n>>m;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n;j++){
			cin>>mp[i][j];
		}
	}
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n;j++){
			if (vis[i][j]==0){
				color++;
				vis[i][j]=color; 
				dfs(i,j);
			}
		}
	}
	for (int i=1;i<=m;i++){
		cin>>fx>>fy;
		cout<<ans[vis[fx][fy]]<<endl;
	}
}
