#include <bits/stdc++.h>
#include <queue>
using namespace std;

int fx,fy,sx,sy,ff;
int n,m;
int mp[100][100];
bool vis[100][100][4];
char c;
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};

struct ST{
	int x,y,f,ti;
};

queue<ST>Q;

int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>mp[i][j];
			if(mp[i][j]==1){
				mp[i][j]=mp[i-1][j]=mp[i][j-1]=mp[i-1][j-1]=1;
			}
		}
	}
	cin>>fx>>fy>>sx>>sy>>c;
	
	if(c=='E') ff=0;
	if(c=='S') ff=1; 
	if(c=='W') ff=2;
	if(c=='N') ff=3;
	
	vis[fx][fy][ff]=1;
	Q.push({fx,fy,ff,0});
	while(Q.size()>0){
		ST t=Q.front();Q.pop();
		if (t.x==sx&&t.y==sy){
			cout<<t.ti;
			return 0;
		}
		if (vis[t.x][t.y][(t.f+3)%4]==0){
			vis[t.x][t.y][(t.f+3)%4]=1;
			Q.push({t.x,t.y,(t.f+3)%4,t.ti+1});
		} 
		if (vis[t.x][t.y][(t.f+1)%4]==0){
			vis[t.x][t.y][(t.f+1)%4]=1;
			Q.push({t.x,t.y,(t.f+1)%4,t.ti+1});
		}
		for (int i=1;i<=3;i++){
			int tx=t.x+i*dx[t.f];
			int ty=t.y+i*dy[t.f];
			if (tx>0&&tx<n&&ty>0&&ty<m&&mp[tx][ty]==0){
				if (vis[tx][ty][t.f]==0){
					vis[tx][ty][t.f]=1;
					Q.push({tx,ty,t.f,t.ti+1});
				}
			}
			else {
				break;
			}	
		}	
	}
	cout<<-1;
}

