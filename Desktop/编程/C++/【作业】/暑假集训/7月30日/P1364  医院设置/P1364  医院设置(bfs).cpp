#include <iostream>
#include <vector>
#include <queue>
#include <bits/stdc++.h>
using namespace std;

int n;
int ans=2e9,sum;
int a[105];
bool vis[105];

struct ST{
	int k,len;
};

queue<ST> Q;
vector<int> G[105];

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
		while (Q.size()>0)	Q.pop();
		vis[i]=1;
		Q.push({i,0});
		while (Q.size()>0){
			ST t=Q.front();
			Q.pop();
			sum+=a[t.k]*t.len;
			for (int j=0;j<G[t.k].size();j++){
				if (vis[G[t.k][j]]==0){
					vis[G[t.k][j]]=1;
					Q.push({G[t.k][j],t.len+1});
				}
			}
		}
		ans=min(sum,ans);
	}
	cout<<ans;
} 
