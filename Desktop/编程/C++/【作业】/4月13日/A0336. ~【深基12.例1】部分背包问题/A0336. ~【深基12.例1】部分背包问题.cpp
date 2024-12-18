#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct ST{
	double m,v,s;
}a[105];

bool cmp(ST p,ST q){
	return p.s>q.s;
}

int main(){
	int n;
	double t,ans=0;
	cin>>n>>t;
	for (int i=1;i<=n;i++){
		cin>>a[i].m>>a[i].v;
		a[i].s=a[i].v/a[i].m;
	}
	sort(a+1,a+n+1,cmp);
	for (int i=1;i<=n&&t>0;i++){
		if (t>=a[i].m){
			ans+=a[i].v;
			t-=a[i].m;
		}
		else {
			ans+=t*a[i].s;
			t=0;
			break;
		}
//		cout<<ans<<" "<<t<<endl;
	}
	cout<<fixed<<setprecision(2)<<ans;
} 
