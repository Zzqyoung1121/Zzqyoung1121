#include <iostream>
using namespace std;

int mp[15][15],vis[15][15];
int fx,fy,nx,ny,ans;
int dx[4]={-1,0,1,0};
int dy[4]={0,-1,0,1};

void dfs(int x,int y,int sx,int sy,int id,int len){
//	cout<<x<<" "<<y<<" "<<sx<<" "<<sy<<" "<<id<<" "<<len<<endl;
	int ex=sx,ey=sy,tid=id;
	if (x==sx&&y==sy){
		ans=len;
		return ;
	}
	int stx=sx+dx[id],sty=sy+dy[id];
	if (stx>=1&&stx<=10&&sty>=1&&sty<=10&&mp[stx][sty]==1){
		ex=stx;ey=sty;
	}
	else	tid=(id+1)%4;
	for (int i=0;i<=3;i++){
		int tx=x+dx[i],ty=y+dy[i];
		if (tx>=1&&tx<=10&&ty>=1&&ty<=10){
			if (vis[tx][ty]==0&&mp[tx][ty]!=2){
				vis[tx][ty]=1;
				dfs(tx,ty,ex,ey,tid,len+1);
				vis[tx][ty]=0;
			}
		}
	} 
}

int main(){
	for (int i=1;i<=10;i++){
		for (int j=1;j<=10;j++){
			char c;
			cin>>c;
			if (c=='.')	mp[i][j]=1;
			if (c=='*')	mp[i][j]=2;
			if (c=='C'){
				nx=i;ny=j;
				mp[i][j]=3;
			}
			if (c=='F'){
				fx=i;fy=j;
				mp[i][j]=4;
			}
		}
	}
	vis[fx][fy]=1;
	dfs(fx,fy,nx,ny,0,0);
	if (ans==0)	cout<<0;
	else	cout<<ans;
}
