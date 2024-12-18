#include <iostream>
using namespace std;

int n,m,a[1000005],t[2005],ta=0,tb=2e9;

int main(){
	cin>>n>>m;
	for (int i=1;i<=n;i++)	cin>>a[i];
	int l=1,r=0,cnt=0;
	while (l<=n){
		while (r<n&&cnt!=m){
			r++;
			t[a[r]]++;
			if (t[a[r]]==1)	cnt++;
		}
		if (cnt==m){
			if (tb-ta>r-l){
				ta=l;tb=r;
			}
		}
//		cout<<l<<" "<<r<<" "<<cnt<<endl;
//		for (int i=1;i<=m;i++)	cout<<t[i]<<" ";
//		cout<<endl;
		t[a[l]]--;
		if (t[a[l]]==0)	cnt--;
		l++;
	}
	cout<<ta<<" "<<tb;
}
