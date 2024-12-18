#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

int main(){
	int n,k;
	long long a[500005],ans=0;
	cin>>n>>k;
	for (int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	for (int i=1;i<=n;i++){
		int m=lower_bound(a+1,a+n+1,k+a[i])-a;
		ans+=n-m+1;
	}
	cout<<ans;
}
