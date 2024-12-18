#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int a[1000005];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,q;
	cin>>n>>q;
	for (int i=1;i<=n;i++)	cin>>a[i];
	sort(a+1,a+n+1);
	
	for (int i=1;i<=q;i++){
		int x;
		cin>>x;
		int m=upper_bound(a+1,a+n+1,x)-a;
		cout<<a[m]<<endl;
	}
}
