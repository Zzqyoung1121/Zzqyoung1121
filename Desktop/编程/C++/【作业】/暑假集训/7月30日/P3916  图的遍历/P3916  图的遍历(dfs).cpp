#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int n,m,color,ans;
int vis[100005];
vector<int> G[100005];

void dfs(int k){
	for (int i=0;i<G[k].size();i++){
		if (vis[G[k][i]]==0){
			vis[G[k][i]]=color;
			dfs(G[k][i]);
		}
	}
}

int main(){
	cin>>n>>m;
	for (int i=1;i<=m;i++){
		int u,v;
		cin>>u>>v;
		G[v].push_back(u);
	}
	for (int i=n;i>=1;i--){
		if (vis[i]==0){
			color=i;
			vis[i]=color;
			dfs(i);
		}
	}
	for (int i=1;i<=n;i++)	cout<<vis[i]<<" ";
}
