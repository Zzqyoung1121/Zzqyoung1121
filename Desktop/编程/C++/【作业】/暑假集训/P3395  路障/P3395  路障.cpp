#include <iostream>
#include <queue>
#include <bits/stdc++.h>
using namespace std;

struct ST{
	int mx,my;
};

queue<ST> Q;
int t,n,x[5005],y[5005],mp[5005][5005],vis[5005][5005];
int dx[2]={1,0},dy[2]={0,1},flag;

int main(){
	cin>>t;
	while (t--){
		cin>>n;
		flag=0;
		while (Q.size()>0)	Q.pop();
		memset(x,0,sizeof(x));
		memset(y,0,sizeof(y));
		memset(mp,0,sizeof(mp));
		memset(vis,0,sizeof(vis));
		vis[1][1]=1;
		Q.push({1,1});
		for (int i=1;i<=2*n-2;i++)	cin>>x[i]>>y[i];
		int m=0;
		while (Q.size()>0){
			ST t=Q.front();Q.pop();
			if (t.mx==n&&t.my==n){
				flag=1;
				cout<<"Yes"<<endl;
				break;
			}
			for (int i=0;i<=1;i++){
				int tx=t.mx+dx[i],ty=t.my+dy[i];
				if (tx>=1&&tx<=n&&ty>=1&&ty<=n){
					if (mp[tx][ty]==0&&vis[tx][ty]==0){
						vis[tx][ty]=1;
						Q.push({tx,ty});
					}
				}
			}
			m++;
			mp[x[m]][y[m]]=1;
		}
		if (flag==0) cout<<"No";
	}
}
