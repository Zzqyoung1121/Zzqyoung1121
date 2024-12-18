#include <iostream>
#include <bits/stdc++.h>
#define int long long
using namespace std;

int n,p,Max=-9e18;
int a[1000005],s[1000005],f[1000005],m[1000005],dp[1000005];

signed main(){
	cin>>n>>p;
	for (int i=1;i<=n;i++)	cin>>a[i];
	for (int i=1;i<=n;i++){
		if (i==1)	s[i]=a[i];
		else	s[i]=max(s[i-1]+a[i],a[i]);
	}
	for (int i=1;i<=n;i++){
		if (i==1)	f[i]=a[i];
		else	f[i]=max(f[i-1],s[i]); 
	}
	for (int i=1;i<=n;i++){
		if (i==1){
			dp[i]=f[i];
			m[i]=dp[i]+f[i]; 
		}
		else {
			dp[i]=m[i-1];
			m[i]=max(m[i-1],dp[i]+f[i]);
		}
		Max=max(Max,dp[i]);
	}
	if (Max<0)	cout<<'-';
	Max=abs(Max)%p; 
	cout<<Max;
}

