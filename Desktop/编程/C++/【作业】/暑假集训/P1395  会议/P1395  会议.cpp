#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <queue>
using namespace std;

struct ST{
	int id,len,cnt;
};

int n,vis[50005],x=2e9,y=2e9;
vector<int> G[50005];
queue<ST> Q;

int main(){
	cin>>n;
	for (int i=1;i<=n-1;i++){
		int a,b;
		cin>>a>>b;
		G[a].push_back(b);
		G[b].push_back(a);
	}
//	for (int i=1;i<=n;i++){
//		for (int j=0;j<G[i].size();j++)	cout<<G[i][j]<<" ";
//		cout<<endl;
//	}
	for (int i=1;i<=n;i++){
		int tlen=0;
		memset(vis,0,sizeof(vis));
		vis[i]=1;
		Q.push({i,0,1});
		while (Q.size()>0){
			ST t=Q.front();Q.pop();
			cout<<t.id<<" "<<t.len<<" "<<t.cnt<<" "<<tlen<<endl;
			if (t.cnt==n){
				cout<<x<<" "<<y<<endl;
				if (tlen<y){
					x=i;
					y=tlen;
				}
				break;
			}
			for (int j=0;j<G[t.id].size();j++){
				if (vis[G[t.id][j]]==0){
					vis[G[t.id][j]]=1;
					tlen+=(t.len+1);
					Q.push({G[t.id][j],t.len+1,t.cnt+1});
				}
			}
		}
	}
	cout<<x<<" "<<y;
}
