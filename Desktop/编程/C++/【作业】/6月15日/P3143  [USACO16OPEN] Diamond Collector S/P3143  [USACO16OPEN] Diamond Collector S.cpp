#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n,k;
int a[50005];
int f[50005];
int m[50005];

int main(){
	cin>>n>>k;
	for (int i=1;i<=n;i++)	cin>>a[i];
	sort(a+1,a+n+1);
	int l=1,r=1;
	while (l<=n){
		while (a[r]-a[l]<=k&&r<=n)	r++;
		f[l]=r-l;
		l++; 
	}
	for (int i=n;i>=1;i--){
		m[i]=max(m[i+1],f[i]);
	}
	int ans=0;
	for (int i=1;i<=n;i++){
		ans=max(ans,f[i]+m[f[i]+i]);
	}
	cout<<ans;
}
