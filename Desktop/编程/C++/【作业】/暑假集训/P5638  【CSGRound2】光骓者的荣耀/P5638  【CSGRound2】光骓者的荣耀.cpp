#include <iostream>
using namespace std;

int n,k;
long long a[1000005],s[1000005],Max; 

int main(){
	cin>>n>>k;
	for (int i=1;i<=n-1;i++){
		cin>>a[i];
		s[i]=s[i-1]+a[i];
	}
	for (int l=1;l+k<=n;l++)	Max=max(s[l+k-1]-s[l-1],Max);
	cout<<s[n-1]-Max;
}
