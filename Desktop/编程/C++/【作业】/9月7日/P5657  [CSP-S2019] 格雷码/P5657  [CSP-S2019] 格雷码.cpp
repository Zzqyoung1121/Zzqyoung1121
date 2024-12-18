#include <iostream>
#include <bits/stdc++.h>
#define int unsigned long long
using namespace std;

int n,k,m; 

signed main(){
	cin>>n>>k;
	m=pow(2,n-1);
	m--;
	while (1){
		if (k<=m)	cout<<0;
		else {
			cout<<1;
			k-=m;
			k--;
			k=m-k;
		}
		if (m==0)	break;
		m/=2;
	}
}
