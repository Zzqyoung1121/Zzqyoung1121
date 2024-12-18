#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
	int a[10005]={0};
	int l,m;
	cin>>l>>m;
	int ans=l+1;
	for (int i=1;i<=m;i++){
		int z,y;
		cin>>z>>y;
		for (int j=z;j<=y;j++)	a[j]=1;
	}
	for (int i=0;i<=l;i++){
		if (a[i]==1)	ans--;
	} 
	cout<<ans;
}
