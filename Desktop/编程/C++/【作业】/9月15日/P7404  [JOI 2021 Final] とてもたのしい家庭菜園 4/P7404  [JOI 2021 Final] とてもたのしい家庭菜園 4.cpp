#include <iostream>
#define int long long
using namespace std;

int n,a[200005],d[200005],f[200005],g[200005],ans;

signed main(){
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>a[i];
		d[i]=a[i]-a[i-1];
	}
	for (int i=2;i<=n;i++){
		f[i]=f[i-1];
		if (d[i]<=0){
			f[i]+=(1-d[i]);
		}
	}
	for (int i=n;i>=2;i--){
		g[i-1]=g[i];
		if (d[i]>=0){
			g[i-1]+=(1+d[i]);
		}
	}
	ans=f[n];
	for (int i=1;i<=n;i++)	ans=min(ans,max(f[i],g[i]));
	cout<<ans;
}
