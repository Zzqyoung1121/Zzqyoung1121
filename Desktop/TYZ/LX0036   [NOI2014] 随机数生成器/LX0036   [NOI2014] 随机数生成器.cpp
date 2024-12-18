#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long long a,b,c,d;
int n,m,q;
int u,v;
int x[25000005];
int p[25000005];
int l[5005],r[5005];
int ans[100005];

int main(){
	cin>>x[0]>>a>>b>>c>>d;
	cin>>n>>m>>q;
	for (int i=1;i<=n*m;i++)	x[i]=(a*x[i-1]*x[i-1]+b*x[i-1]+c)%d;
	for (int i=1;i<=n*m;i++){
		int pos=(x[i]%i)+1;
		x[i]=x[pos];
		x[pos]=i;
	}
	for (int i=1;i<=q;i++){
		cin>>u>>v;
		swap(x[u],x[v]);
	}
	for (int i=1;i<=n;i++){
		l[i]=1;r[i]=m;
		for (int j=1;j<=m;j++)	p[x[(i-1)*m+j]]=i*(m+1)+j;
	}
	int cnt=0;
	for (int i=1;cnt<=n+m-1;i++){
		int tx=p[i]/(m+1),ty=p[i]%(m+1);
		if (ty>=l[tx]&&ty<=r[tx]){
			for (int j=1;j<=tx-1;j++)	r[j]=min(r[j],ty);
			for (int j=tx+1;j<=n;j++)	l[j]=max(l[j],ty);
			ans[++cnt]=i;
		}
	}
	sort(ans+1,ans+n+m);
	for (int i=1;i<=n+m-1;i++)	cout<<ans[i]<<" "; 
}
