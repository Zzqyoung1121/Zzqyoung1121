#include <bits/stdc++.h>
using namespace std;

long long n;
long long ans;
long long a[1005][1005];
long long book[1005][1005];

void dfs(int x,int y,long long s){
	if (s<=book[x][y]) return;
	else book[x][y]=s;
	if (x==n){
		ans=max(s,ans);
		return;
	}
	dfs(x+1,y,s+a[x+1][y]);
	dfs(x+1,y+1,s+a[x+1][y+1]);
}

int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cin>>a[i][j];
			book[i][j]=-1;
		}
	}
	dfs(1,1,a[1][1]);
	cout<<ans;
}

