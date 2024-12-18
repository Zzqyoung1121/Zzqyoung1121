#include <iostream>
using namespace std;

int n;
int a[35][35],vis[35][35];
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};

void dfs(int x,int y){
	for (int i=0;i<=3;i++){
		int tx=dx[i]+x,ty=dy[i]+y;
		if (tx>=0&&tx<=n+1&&ty>=0&&ty<=n+1){
			if (vis[tx][ty]==0&&a[tx][ty]==0){
				vis[tx][ty]=1;
				dfs(tx,ty);
			}
		}
	}
}

int main(){
	cin>>n;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	vis[0][0]=1;
	dfs(0,0);
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n;j++){
			if (vis[i][j]==1)	cout<<0<<" ";
			if (a[i][j]==1)	cout<<1<<" ";
			if (vis[i][j]==0&&a[i][j]==0)	cout<<2<<" ";	
		}
		cout<<endl;
	}
} 
