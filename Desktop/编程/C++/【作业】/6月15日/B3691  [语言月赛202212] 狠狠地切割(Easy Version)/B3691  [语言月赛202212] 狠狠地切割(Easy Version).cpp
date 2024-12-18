#include <iostream>
using namespace std;

int n,m,a[500005],vis[5000005];

int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>m;
    for (int i=1;i<=n;i++)	cin>>a[i];
    for (int i=1;i<=m;i++){
		int b;
		cin>>b;
		vis[b]=1;
	}

	int l=1,r,cnt=0;
	while (l<=n){
		while (l<=n&&vis[a[l]]!=0)	l++;
		r=l;
		while (r<=n&&vis[a[r]]==0)	r++;
		if (l<r)	cnt++;
		l=r;
	}
	cout<<cnt;
}
