#include <bits/stdc++.h>
using namespace std;

int n,p,a[1000005],l,r;
int m[20][1000005];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	cin>>n>>p;
	for (int i=1;i<=n;i++) cin>>a[i];
	
	for (int k=0;(1<<k)<=n;k++){
		for (int i=1;i+(1<<k)-1<=n;i++){
			if(k==0) m[k][i]=a[i];
			else m[k][i]=min(m[k-1][i],m[k-1][i+(1<<(k-1))]);
		} 
	}
	
	for (int l=1;(l+p-1)<=n;l++){
		int r=l+p-1;
		int k=log2(p);
		cout<<min(m[k][l],m[k][r-(1<<k)+1])<<endl;
	}
}


