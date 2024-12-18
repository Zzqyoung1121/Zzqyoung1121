#include <iostream>
using namespace std;

int n,m;
int a,b;
long long ans;

int main(){
	cin>>n>>m;
	for (int i=1;i<=n;i++){
		cin>>a>>b;
		if (a*b<=m)	ans+=a*b;
		else{
			cout<<i;
			return 0;
		}
	}
	cout<<ans;
}
