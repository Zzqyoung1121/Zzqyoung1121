#include <bits/stdc++.h>
using namespace std;

struct ST{
	int num;
	int id;
}a[100005];

bool cmp(ST x,ST y){
	return x.num<y.num;
}

int main(){
	int n,q;
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>a[i].num;
		a[i].id=i;
	}
	cin>>q;
	
	sort(a+1,a+n+1,cmp);
	
//	for (int i=1;i<=n;i++)	cout<<a[i].num<<" ";
//	cout<<endl;
//	for (int i=1;i<=n;i++)	cout<<a[i].id<<" ";
//	cout<<endl;
	
	for (int i=1;i<=q;i++){
		int m;
		cin>>m;
		int l=1,r=n,ans=0;
		while (l<=r){
			int mid=(l+r)/2;
//			cout<<l<<" "<<r<<" "<<mid<<endl;
			if (a[mid].num>m){
				r=mid-1;
			}
			else if (a[mid].num==m){
				ans=mid;
				break;
			}
			else {
				l=mid+1;
			}
		}
		cout<<a[ans].id<<endl;
	}
}


