#include <iostream>
using namespace std;

int main(){
	int n,a[200005],m[200005],s[200005],Max=-2e9;
	cin>>n;
	for (int i=1;i<=n;i++)	cin>>a[i];
	for (int i=1;i<=n;i++){
		s[i]=s[i-1]+a[i];
		m[i]=min(m[i-1],s[i]);
	}
	for (int r=1;r<=n;r++)	Max=max(Max,s[r]-m[r]);
	cout<<Max;
} 
