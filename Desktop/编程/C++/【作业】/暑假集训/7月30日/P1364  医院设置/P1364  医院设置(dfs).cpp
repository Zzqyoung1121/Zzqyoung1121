#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int n;
int ans=2e9,sum;
int a[105];
bool vis[105];
vector<int> G[105];

void dfs(int k,int len){
	sum+=a[k]*len;
	for (int i=0;i<G[k].size();i++){
		if (vis[G[k][i]]==0){
			vis[G[k][i]]=1;
			dfs(G[k][i],len+1);
			vis[G[k][i]]=0;
		}
	}
}

int main(){
	cin>>n;
	for (int i=1;i<=n;i++){
		int u,v,w;
		cin>>w>>u>>v;
		a[i]=w;
		if (u!=0){
			G[i].push_back(u);
			G[u].push_back(i);
		}
		if (v!=0){
			G[i].push_back(v);
			G[v].push_back(i);
		}
	}
	
	for (int i=1;i<=n;i++){
		sum=0;
		memset(vis,0,sizeof(vis));
		vis[i]=1;
		dfs(i,0);
		ans=min(sum,ans);
	}
	cout<<ans;
} 
