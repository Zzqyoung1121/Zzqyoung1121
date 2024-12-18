#include <iostream>
#include <queue>
#include <bits/stdc++.h>
using namespace std;

struct ST{
	int fx,fy,len;
};

int n,x,y,ans; 
int mp[105][105],vis[105][105];
int dx[4]={-1,1,0,0},dy[4]={0,0,-1,1};
queue<ST> Q;

int main(){
	cin>>n>>x>>y;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n;j++){
			cin>>mp[i][j];
		}
	}
	vis[1][1]=1;
	Q.push({1,1,0});
	while (Q.size()>0){
		ST t=Q.front();Q.pop();
		if (t.fx==x&&t.fy==y){
			cout<<t.len;
			return 0;
		}
		for (int i=0;i<=3;i++){
			int tx=t.fx+dx[i]*mp[t.fx][t.fy],ty=t.fy+dy[i]*mp[t.fx][t.fy];
			if (tx>=1&&tx<=n&&ty>=1&&ty<=n){
				if (vis[tx][ty]==0){
					vis[tx][ty]=1;
					Q.push({tx,ty,t.len+1});
				}
			}
		}
	}
	cout<<-1;
}
