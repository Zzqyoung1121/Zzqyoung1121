#include <iostream>
#include <vector>
using namespace std;

int n;
char t,l,r,root;
string ans;
vector<char> G[35];

void dfs(char rt){
	if (rt=='*')	return ;
	ans+=rt;
	dfs(G[rt-'a'][0]);
	dfs(G[rt-'a'][1]);
}

int main(){
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>t>>l>>r;
		if (i==1)	root=t;
		G[(t-'a')].push_back(l);
		G[(t-'a')].push_back(r);
	}
	dfs(root);
	cout<<ans;
}
