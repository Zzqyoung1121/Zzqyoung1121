#include <iostream>
#include <vector>
#include <queue>
#include <bits/stdc++.h>
using namespace std;

struct ST{
	int v;
	int a;
};

struct QT{
	int v;
	int ti;
};

int n,m,k;

vector<ST> G[10005];
queue<QT> Q;

int main(){
	cin>>n>>m>>k;
	for (int i=1;i<=m;i++){
		int u,v,a;
		cin>>u>>v>>a;
		G[u].push_back({v,a});
	}
	/*
	//ÌØÊâÐÔÖÊA => a[i]=0
	Q.push({1,0});
	while (Q.size()>0){
		QT t=Q.front();Q.pop();
		if (t.v==n&&t.ti%k==0){
			cout<<t.ti;
			break; 
		}
		for (int i=0;i<G[t.v].size();i++){
			Q.push({G[t.v][i].v,t.ti+1}); 
		}
	}
	*/
}

