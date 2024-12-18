#include <iostream>
#include <vector>
using namespace std;

int n,l,r,ans=0;
bool vis[1000005];
vector<int> G[1000005];

void dfs(int x,int len){
	if (vis[x]==1){
		ans=max(ans,len);
		return ;
	}
	for (int i=0;i<G[x].size();i++){
		dfs(G[x][i],len+1);
	}
}

int main(){
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>l>>r;
		G[i].push_back(l);
		G[i].push_back(r);
		if (l==0)	vis[l]=1;
		if (r==0)	vis[r]=1;
	}
	dfs(1,0);
	cout<<ans;
}
