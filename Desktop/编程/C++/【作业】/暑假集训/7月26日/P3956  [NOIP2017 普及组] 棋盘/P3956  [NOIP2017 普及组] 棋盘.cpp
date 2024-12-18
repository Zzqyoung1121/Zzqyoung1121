#include <iostream>
using namespace std; 

int n,m,x,y,c,Min=2e9;
int mp[105][105],vis[105][105],book[105][105];
int dx[4]={-1,1,0,0},dy[4]={0,0,-1,1};

void dfs(int x,int y,int s,int f){
//	cout<<x<<" "<<y<<" "<<s<<" "<<f<<endl;
	if (book[x][y]!=0&&s>=book[x][y])	return ;
	else	book[x][y]=s;
	if (x==m&&y==m){
		Min=min(Min,s);
		return ;
	}
	for (int i=0;i<=3;i++){
		int tx=dx[i]+x,ty=dy[i]+y;
		if (tx>=1&&tx<=m&&ty>=1&&ty<=m){
			if (vis[tx][ty]==0){
				if (f==0&&mp[tx][ty]==0)	continue;
				if (mp[tx][ty]==0){
					vis[tx][ty]=1;
					mp[tx][ty]=mp[x][y];
					dfs(tx,ty,s+2,0);
					vis[tx][ty]=0;
					mp[tx][ty]=0;
				}
				else if (mp[tx][ty]!=mp[x][y]){
					vis[tx][ty]=1;
					dfs(tx,ty,s+1,1);
					vis[tx][ty]=0;
				}
				else {
					vis[tx][ty]=1;
					dfs(tx,ty,s,1);
					vis[tx][ty]=0;
				}
			}
		}
	}
}

int main(){
	cin>>m>>n;
	for (int i=1;i<=n;i++){
		cin>>x>>y>>c;
		mp[x][y]=c+1;
	}
	vis[1][1]=1;
	dfs(1,1,0,1);
	if (Min==2e9)	cout<<-1;
	else	cout<<Min;
}
