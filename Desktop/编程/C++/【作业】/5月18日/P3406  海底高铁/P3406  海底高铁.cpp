#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n,m;
long long c[100005],ans=0;
int a[100005];

int main(){
	cin>>n>>m;
	for (int i=1;i<=m;i++){
		cin>>a[i];
		if (i>=2){
			int l=min(a[i],a[i-1]);
			int r=max(a[i],a[i-1]);
			c[l]++;c[r]--;
		}
	}
	for (int i=1;i<n;i++){
		c[i]+=c[i-1];
	}
	for (int i=1;i<n;i++){
		long long a,b,k;
		cin>>a>>b>>k;
		ans+=min(a*c[i],k+c[i]*b);
	}
	cout<<ans;
}

