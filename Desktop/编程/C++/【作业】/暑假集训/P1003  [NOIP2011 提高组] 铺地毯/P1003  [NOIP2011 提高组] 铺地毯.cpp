#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m=0,tx,ty;
	int a[10000],b[10000],g[10000],k[10000];
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>a[i]>>b[i]>>g[i]>>k[i];
	}
	cin>>tx>>ty;
	for (int i=1;i<=n;i++){
		if (tx>=a[i]&&tx<=a[i]+g[i]&&ty>=b[i]&&ty<=b[i]+k[i]){
			m=i;
		}
	}
	if (m==0)  cout<<-1;
	else cout<<m;
}
