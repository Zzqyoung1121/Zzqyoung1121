#include <iostream>
using namespace std;

int n,m,a[100005];

int f(int l){
	int s=0,cnt=0;
	for (int i=1;i<=n;i++){
		if (a[i]>l)	return 1e9;
		s+=a[i];
		if (s>l){
			cnt++;
			s=a[i];
		}
	}
	return cnt+1;
}

int main(){
	cin>>n>>m;
	for (int i=1;i<=n;i++)	cin>>a[i];
	int l=1,r=1e9,ans;
	while (l<=r){
		int mid=(l+r)/2;
		if (f(mid)<=m){
			ans=mid;
			r=mid-1;
		}
		else {
			l=mid+1;
		}
	}
	cout<<ans;
}
