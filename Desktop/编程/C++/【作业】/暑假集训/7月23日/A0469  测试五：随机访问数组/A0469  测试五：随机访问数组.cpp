#include <iostream>
using namespace std;

long long n,m,a[1000005],b,ans;

int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
	cin>>n>>m;
	for (int i=1;i<=n;i++)	cin>>a[i];
	for (int i=1;i<=m;i++){
		cin>>b;
		long long f=a[b];
		cout<<f<<'\n';
		ans+=f;
	} 
	cout<<ans;
}
