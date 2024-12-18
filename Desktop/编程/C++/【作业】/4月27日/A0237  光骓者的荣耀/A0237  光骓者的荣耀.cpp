#include <iostream>
using namespace std;

long long a[1000005],s[1000005];

int main(){
	int n,k;
	cin>>n>>k;
	for (int i=1;i<=n-1;i++)	cin>>a[i];
	for (int i=1;i<=n-1;i++)	s[i]=s[i-1]+a[i];
//	for (int i=1;i<=n-1;i++)	cout<<s[i]<<" ";
	long long Max=0;
	for (int l=1;l+k<=n;l++){
//		cout<<Max<<" "<<s[l+k-1]-s[l-1]<<endl;
		Max=max(s[l+k-1]-s[l-1],Max);
	}
	cout<<s[n-1]-Max; 
}
