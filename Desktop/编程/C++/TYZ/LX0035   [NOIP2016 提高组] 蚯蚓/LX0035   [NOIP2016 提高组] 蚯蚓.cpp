#include <iostream>
#include <queue>
#include <bits/stdc++.h>
#define int long long
using namespace std;

int n,m,q,u,v,t,l;
int a[100005];
queue<int> Q,W,M;

signed main(){
	cin>>n>>m>>q>>u>>v>>t;
	long double p=u/(v*1.0);
	for (int i=1;i<=n;i++)	cin>>a[i];
	sort(a+1,a+n+1,greater<int>() );
	for (int i=1;i<=n;i++)	Q.push(a[i]);
	for (int i=1;i<=m;i++){
		int ta=-2e9,tb=-2e9,tc=-2e9;
		if (Q.size()>0)	ta=Q.front();
		if (W.size()>0)	tb=W.front();
		if (M.size()>0)	tc=M.front();
		int f=0;
		if (ta>=tb&&ta>=tc){
			f=ta;
			Q.pop();
		}
		else if (tb>=ta&&tb>=tc){
			f=tb;
			W.pop();
		}
		else {
			f=tc;
			M.pop();
		}
		f+=l;
		int x=f*p;
		int y=f-x;
		l+=q;
		W.push(x-l);M.push(y-l);
		if (i%t==0)	cout<<f<<" ";
	}
	cout<<endl;
	for (int i=1;i<=n+m;i++){
		int ta=-2e9,tb=-2e9,tc=-2e9;
		if (Q.size()>0)	ta=Q.front();
		if (W.size()>0)	tb=W.front();
		if (M.size()>0)	tc=M.front();
		int f=0;
		if (ta>=tb&&ta>=tc){
			f=ta;
			Q.pop();
		}
		else if (tb>=ta&&tb>=tc){
			f=tb;
			W.pop();
		}
		else {
			f=tc;
			M.pop();
		}
		f+=l;
		if (i%t==0)	cout<<f<<" ";
	} 
} 
