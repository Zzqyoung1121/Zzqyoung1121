#include <iostream>
using namespace std;

int r,c,s;
int a[1005][1005],vis[1005][1005],ans[1000005];
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};
int color;
 
void dfs(int x,int y){
//	cout<<x<<" "<<y<<" "<<color<<endl;
	ans[color]++;
	for (int i=0;i<=3;i++){
		int tx=dx[i]+x,ty=dy[i]+y;
		if (tx>=1&&tx<=r&&ty>=1&&ty<=c){
			if (a[tx][ty]!=0&&vis[tx][ty]==0){
				vis[tx][ty]=color;
				dfs(tx,ty);
			}
		}
	}
}

int main(){
	cin>>r>>c;
	for (int i=1;i<=r;i++){
		for (int j=1;j<=c;j++){
			char s;
			cin>>s;
			if (s=='#')	a[i][j]=1;
			else	a[i][j]=0;
		}
	}
	for (int i=1;i<=r-1;i++){
		for (int j=1;j<=c-1;j++){
			int t=a[i][j]+a[i][j+1]+a[i+1][j]+a[i+1][j+1];
			if (t==3){
				cout<<"Bad placement.";
				return 0;
			}
		}
	}
	for (int i=1;i<=r;i++){
		for (int j=1;j<=c;j++){
			if (vis[i][j]==0&&a[i][j]==1){
				color++;
				vis[i][j]=color;
				dfs(i,j);
			}
		}
	}
	cout<<"There are "<<color<<" ships.";
}
