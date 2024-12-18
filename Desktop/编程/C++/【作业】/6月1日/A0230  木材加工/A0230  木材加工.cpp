#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n,k,a[100005];

long long f(int l){
	long long sum=0;
	for (int i=1;i<=n;i++)	sum+=a[i]/l;
	return sum;
}

int main(){
	cin>>n>>k;
	for (int i=1;i<=n;i++)	cin>>a[i];
	int l=1,r=1e8,ans;
	while (l<=r){
		int mid=(l+r)/2;
		if (f(mid)>=k){
			ans=mid;
			l=mid+1;
		}
		else {
			r=mid-1;
		}
	}
	cout<<ans;
}
