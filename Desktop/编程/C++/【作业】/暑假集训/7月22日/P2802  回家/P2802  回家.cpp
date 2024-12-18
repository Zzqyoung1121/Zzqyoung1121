#include <iostream>
using namespace std;

int n,m,Min=2e9;
int mp[20][20];
int vis[20][20];
int book[20][20][10]; 
int fx,fy;
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};

void dfs(int x,int y,int hp,int len){
	//处理当前点 
	if (book[x][y][hp]!=0&&book[x][y][hp]<len)	return ;
	else	book[x][y][hp]=len;
	if (mp[x][y]==3){
		Min=min(Min,len);
		return ;
	}
	if (mp[x][y]==4)	hp=6;
	for (int i=0;i<=3;i++){
		int tx=x+dx[i],ty=y+dy[i];
		if (hp>1){
			if (tx>=1&&tx<=n&&ty>=1&&ty<=m){
				if (mp[tx][ty]!=0&&vis[tx][ty]<2){
					vis[tx][ty]++;
					dfs(tx,ty,hp-1,len+1);
					vis[tx][ty]--;
				}
			}
		}
	}
}

int main(){
	cin>>n>>m;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			cin>>mp[i][j];
			if (mp[i][j]==2){
				fx=i;fy=j;
			}
		}
	}
	vis[fx][fy]=1;
	dfs(fx,fy,6,0);
	if (Min==2e9)	cout<<-1;
	else	cout<<Min;
}
