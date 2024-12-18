#include <iostream>
#include <queue>
#include <bits/stdc++.h>
#define int long long
using namespace std;

int n,ans;
int a[305][305];
int vis[305][305];
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};
priority_queue<pair<int,pair<int,int>>> Q;

signed main(){
	cin>>n;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n;j++){
			cin>>a[i][j];
			if (i==1||j==1||i==n||j==n){
				vis[i][j]=1;
				Q.push({-a[i][j],{i,j}});
			}
		}
	}
	while (Q.size()>0){
		pair<int,pair<int,int>> t=Q.top();Q.pop();
		int h=(-t.first);
		int x=t.second.first;
		int y=t.second.second;
		for (int i=0;i<=3;i++){
			int tx=x+dx[i];
			int ty=y+dy[i];
			if (tx>=1&&tx<=n&&ty>=1&&ty<=n){
				if (vis[tx][ty]==0){
					if (h>a[tx][ty]){
						ans+=h-a[tx][ty];
						a[tx][ty]=h;
					}
					vis[tx][ty]=1;
					Q.push({-a[tx][ty],{tx,ty}});
				}
			}
		}
	}
	cout<<ans;
}
