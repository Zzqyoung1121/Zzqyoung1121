#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int mp[20][20],vis[20][20];
int a,b,n,x,y,ans;
int dx[2]={0,1};
int dy[2]={1,0};

void dfs(int x,int y){
	if (x==a&&y==b){
		ans++;
		return ;
	}
	for (int i=0;i<=1;i++){
		int tx=x+dx[i],ty=y+dy[i];
//		cout<<tx<<" "<<ty<<endl;
		if (tx>=1&&tx<=a&&ty>=1&&ty<=b){
			if (mp[tx][ty]==0&&vis[tx][ty]==0){
				vis[tx][ty]=1;
				dfs(tx,ty);
				vis[tx][ty]=0;
			}
		}
	}
}

int main(){
	cin>>a>>b;
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>x>>y;
		mp[x][y]=1;
	}
	vis[1][1]=1;
	dfs(1,1);
	cout<<ans;
} 
