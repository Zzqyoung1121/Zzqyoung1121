#include <iostream>
using namespace std;

int p,q,n,m,ans;
int mp[25][25],vis[25][25];
int dx[2]={1,0},dy[2]={0,1};

void dfs(int x,int y){
	if (x==p&&y==q){
		ans++;
		return ;
	}
	for (int i=0;i<=1;i++){
		int tx=x+dx[i],ty=y+dy[i];
		if (tx>=0&&tx<=p&&ty>=0&&ty<=q){
			if (mp[tx][ty]==0&&mp[tx][ty]==0){
				vis[tx][ty]=1;
				dfs(tx,ty);
				vis[tx][ty]=0;
			}
		}
	}
}

int main(){
	cin>>p>>q>>n>>m;
	mp[n][m]=1;
	mp[n-2][m-1]=1;
	mp[n-1][m-2]=1;
	mp[n+2][m-1]=1;
	mp[n+1][m-2]=1;
	mp[n-2][m+1]=1;
	mp[n-1][m+2]=1;
	mp[n+2][m+1]=1;
	mp[n+1][m+2]=1;
	vis[0][0]=1;
	dfs(0,0);
	cout<<ans;
}
