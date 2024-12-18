#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long long n,c,ans,a[2000005];

int main(){
	cin>>n>>c;
	for (int i=1;i<=n;i++)	cin>>a[i];
	sort(a+1,a+n+1);
	int l=1,r=1;
	for (int i=1;i<=n;i++){
		int k=a[i]+c;
		while (a[l]<k&&l<=n)	l++;
		while (a[r]<=k&&r<=n)	r++;
		ans+=(r-l);
	}
	cout<<ans;
}
