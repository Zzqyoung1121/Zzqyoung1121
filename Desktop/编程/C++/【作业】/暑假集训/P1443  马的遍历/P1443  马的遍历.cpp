#include <iostream>
#include <queue>
#include <bits/stdc++.h>
using namespace std;

struct ST{
	int x,y,len;
};

queue<ST> Q;

int n,m,x,y,flag;
bool vis[405][405];
int ans[405][405];
int dx[8]={-1,-1,1,1,-2,-2,2,2};
int dy[8]={2,-2,2,-2,1,-1,1,-1};

int main(){
	cin>>n>>m>>x>>y;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			if (ans[i][j]==0){
				flag=0;
				memset(vis,0,sizeof(vis));
				while (Q.size()>0)	Q.pop();
				vis[x][y]=1;
				Q.push({x,y,0});
				while (Q.size()>0){
					ST t=Q.front();Q.pop();
					ans[t.x][t.y]=t.len;
					if (t.x==i&&t.y==j){
						ans[i][j]=t.len;
						flag=1;
						break;
					}
					for (int i=0;i<=7;i++){
						int tx=t.x+dx[i],ty=t.y+dy[i];
						if (tx>=1&&tx<=n&&ty>=1&&ty<=m){
							if (vis[tx][ty]==0){
								vis[tx][ty]=1;
								Q.push({tx,ty,t.len+1});
							}
						}
					}
				}
				if (flag==0)	ans[i][j]=-1;	
			}
		}
	} 
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			cout<<setw(5)<<ans[i][j];
		}
		cout<<endl;
	}
}
