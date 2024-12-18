#include <iostream>
using namespace std;

int n,m,cnt,ans=2e9;
int a[1005][15],vis[1005][15];

int check(int x,int y){
	return (vis[x-1][y]+vis[x-1][y-1]+vis[x-1][y+1]+vis[x-2][y]+a[x-1][y])%2;
}

int tcheck(int x,int y){
	return (vis[x][y]+vis[x][y-1]+vis[x][y+1]+vis[x-1][y]+a[x][y])%2;
}

void solve(){
	for (int i=2;i<=n;i++){
		for (int j=1;j<=m;j++){
			if (check(i,j)){
				cnt++;
				vis[i][j]=1;
			}
			else {
				vis[i][j]=0;
			}	 
		}
	}
	for (int i=1;i<=m;i++){
		if (tcheck(n,i))	return ;
	}
	ans=min(ans,cnt);
}

int main(){
	cin>>n>>m;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	} 
	for (int i=0;i<(1<<m);i++){
		cnt=0;
		for (int j=1;j<=m;j++){
			vis[1][j]=(i>>(j-1)&1);
			if (vis[1][j])	cnt++; 
		}
		solve();
	}
	if (ans==2e9)	ans=-1;
	cout<<ans;
}
