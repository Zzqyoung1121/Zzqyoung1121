#include <bits/stdc++.h>
using namespace std;

struct ST{
	int p,a;
}t[5005];

bool cmp(ST x,ST y){
	return x.p<y.p;
}

int main(){
	int n,m;
	cin>>n>>m;
	for (int i=1;i<=m;i++){
		cin>>t[i].p>>t[i].a;
	}
	sort(t+1,t+m+1,cmp);
	int ans=0;
	for (int i=1;i<=m&&n>0;i++){
		if (n>t[i].a){
			ans+=t[i].p*t[i].a;
			n-=t[i].a;
		}
		else {
			ans+=n*t[i].p;
			n=0;
			break;
		}
	}
	cout<<ans;
}
