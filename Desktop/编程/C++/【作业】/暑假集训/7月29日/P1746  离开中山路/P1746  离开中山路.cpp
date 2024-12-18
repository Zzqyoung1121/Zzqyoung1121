#include <iostream>
#include <queue>
#include <bits/stdc++.h>
using namespace std;

int mp[1005][1005];
int vis[1005][1005];
int fx,fy,sx,sy,n;
int dx[4]={-1,1,0,0},dy[4]={0,0,-1,1};

struct ST{
	int x,y;
	int len;
};

queue<ST>Q;

int main(){
	cin>>n;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n;j++){
			char a;
			cin>>a;
			mp[i][j]=(a-'0');
		}
	}
	cin>>fx>>fy>>sx>>sy;
	Q.push({fx,fy,0});
	vis[fx][fy]=1;
	while (Q.size()>0){
		ST t=Q.front();
		Q.pop();
		if (t.x==sx&&t.y==sy){
			cout<<t.len;
			break;
		}
		for (int i=0;i<=3;i++){
			int tx=t.x+dx[i],ty=t.y+dy[i];
			if (tx>=1&&tx<=n&&ty>=1&&ty<=n){
				if (mp[tx][ty]==0&&vis[tx][ty]==0){
					vis[tx][ty]=1;
					Q.push({tx,ty,t.len+1});
				}
			}
		}
	}
}
