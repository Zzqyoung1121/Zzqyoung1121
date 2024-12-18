#include <iostream>
using namespace std;

int n,m,t,ans;
int sx,sy,fx,fy,x,y;
int mp[10][10],vis[10][10];
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};

void dsf(int x,int y){
	if (x==fx&&y==fy){
		ans++;
		return ;
	}
	for (int i=0;i<=3;i++){
		int tx=x+dx[i],ty=y+dy[i];
		if (tx>=1&&tx<=n&&ty>=1&&ty<=m){
			if (vis[tx][ty]==0){
				if (mp[tx][ty]==0){
					vis[tx][ty]=1;
					dsf(tx,ty);
					vis[tx][ty]=0;
				}
			}
		} 
	}
}

int main(){
	cin>>n>>m>>t;
	cin>>sx>>sy>>fx>>fy;
	for (int i=1;i<=t;i++){
		cin>>x>>y;
		mp[x][y]=1;
	}
	vis[sx][sy]=1;
	dsf(sx,sy);
	cout<<ans;
}
 
