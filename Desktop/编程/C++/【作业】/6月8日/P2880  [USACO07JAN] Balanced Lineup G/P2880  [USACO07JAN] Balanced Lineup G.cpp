#include <bits/stdc++.h>
using namespace std;

int n,p,a[100005],l,r;
int Max[30][100005],Min[30][100005];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	cin>>n>>p;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int k=0;(1<<k)<=n;k++){
		for(int i=1;i+(1<<k)-1<=n;i++){
			if(k==0){
				Max[k][i]=a[i];
				Min[k][i]=a[i];
			}
			else{
				Max[k][i]=max(Max[k-1][i],Max[k-1][i+(1<<(k-1))]);
				Min[k][i]=min(Min[k-1][i],Min[k-1][i+(1<<(k-1))]);
			}
		} 
	}
	for(int i=1;i<=p;i++){
		cin>>l>>r;
		int len=r-l+1;
		int k=log2(len);
		int Maxn=max(Max[k][l],Max[k][r-(1<<k)+1]),Minn=min(Min[k][l],Min[k][r-(1<<k)+1]);
		cout<<(Maxn-Minn)<<"\n";
	}
}


