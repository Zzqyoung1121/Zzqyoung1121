#include <iostream>
#define int long long
using namespace std;

int n,m;
int ans,now;
int vis[35][2];
string op[100005];
int t[100005];

signed main(){
//	freopen("P2114_2.in","r",stdin);
	cin>>n>>m;
	for (int i=1;i<=n;i++)	cin>>op[i]>>t[i];
	for (int i=0;i<=29;i++){
		vis[i][0]=0;
		vis[i][1]=1;
	}
	for (int i=n;i>=1;i--){
		for (int j=0;j<=29;j++){
			int dt=((t[i]>>j)&1);
			if (op[i]=="AND"&&dt==0)	vis[j][1]=vis[j][0];
			if (op[i]=="OR"&&dt==1)		vis[j][0]=vis[j][1];
			if (op[i]=="XOR"&&dt==1)	swap(vis[j][0],vis[j][1]); 
		}
	}
	for (int i=29;i>=0;i--){
		if (vis[i][0]==1)	ans+=(1<<i);
		else if (vis[i][1]==1&&now+(1<<i)<=m){
			now+=(1<<i);
			ans+=(1<<i);
		}
	}
	cout<<ans;
}

