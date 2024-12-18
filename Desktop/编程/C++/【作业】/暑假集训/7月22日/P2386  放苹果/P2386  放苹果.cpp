#include <iostream>
using namespace std;

int t,n,m,ans;

void dfs(int cnt,int t,int sum){
	if (cnt==n+1){
		if (sum==0)	ans++;
		return ;
	}
	for (int i=t;i<=sum;i++){
		dfs(cnt+1,i,sum-i);
	}
}

int main(){
	cin>>t;
	for (int i=1;i<=t;i++){
		ans=0;
		cin>>m>>n;
		dfs(1,0,m);
		cout<<ans<<endl;
	}
} 
