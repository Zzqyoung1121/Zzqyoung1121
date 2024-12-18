#include <bits/stdc++.h>
using namespace std;

long long n,m,L;
long long d[50005];

long long check(long long s){
	long long sum=0,last=0;
	for (int i=1;i<=n;i++){
		if (d[i]-last<s)	sum++;
		else last=d[i];
	}
	if (d[n+1]-last<s)	sum++;
	return sum;
}

int main(){
	cin>>L>>n>>m;
	for (long long i=1;i<=n;i++)	cin>>d[i];
	d[n+1]=L;
	long long l=0,r=L,ans;
	while (l<=r){
		long long mid=(l+r)/2;
		if (check(mid)<=m){
			ans=mid;
			l=mid+1;
		}
		else	r=mid-1;
	}
	cout<<ans;
}
