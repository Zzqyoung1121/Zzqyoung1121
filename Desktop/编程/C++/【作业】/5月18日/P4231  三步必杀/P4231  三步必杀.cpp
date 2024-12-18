#include <iostream>
using namespace std;

long long c[10000005];

int main(){
	int n,m;
	cin>>n>>m;
	for (int i=1;i<=m;i++){
		long long l,r,s,e;
		cin>>l>>r>>s>>e;
		long long d=(e-s)/(r-l);
		c[l]+=s;
		c[l+1]+=d-s;
		c[r+1]+=-e-d;
		c[r+2]+=e;
	}
	for (int i=1;i<=n;i++){
		c[i]+=c[i-1];
	}
	for (int i=1;i<=n;i++){
		c[i]+=c[i-1];
	}
	long long ans=c[1],Max=c[1];
	for (int i=2;i<=n;i++){
		ans^=c[i];
		Max=max(Max,c[i]);
	}
	cout<<ans<<" "<<Max;
}
