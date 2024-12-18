#include <bits/stdc++.h>
#define int long long
using namespace std;

int n,m,a[100005];

bool check(int l){
	int cnt=1,k=1;
	for (int i=2;i<=n;i++){
		if (a[i]-a[k]>=l){
			cnt++;
			k=i;
		}
	}
	return cnt>=m;
}

signed main(){
	cin>>n>>m;
	for (int i=1;i<=n;i++)	cin>>a[i];
	sort(a+1,a+n+1);
	int l=1,r=1e9,ans;
	while(l<=r){
		int mid=(l+r)/2;
		if (check(mid)){
			ans=mid;
			l=mid+1;
		}
		else {
			r=mid-1;
		}
	}
	cout<<ans;
}
