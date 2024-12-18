#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n,p;
int a[5000005];
int c[5000005];
int s[5000005];

int main(){
	cin>>n>>p;
	
	for (int i=1;i<=n;i++){
		cin>>a[i];
		c[i]=a[i]-a[i-1];
	}
	
	for (int i=1;i<=p;i++){
		int x,y,z;
		cin>>x>>y>>z;
		c[x]+=z;
		c[y+1]-=z;
	}
	int Min=2e9;
	for (int i=1;i<=n;i++){
		s[i]=s[i-1]+c[i];
		Min=min(Min,s[i]);
	}
	cout<<Min;
}
