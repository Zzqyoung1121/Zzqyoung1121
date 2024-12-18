#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	int a[1000005];
	int Max=0;
	for (int i=1;i<=n;i++){
		cin>>a[i];
		Max=max(Max,a[i]);
	}
	int l=1,r=Max,ans=0;
	while (l<=r){
		int mid=(l+r)/2;
		long long cnt=0;
		for (int i=1;i<=n;i++){
			if (a[i]-mid>0)	cnt+=(a[i]-mid);
		}
		if (cnt>=m){
			ans=mid;
			l=mid+1;
		}
		else{
			r=mid-1;
		}
	}
	cout<<ans;
}
