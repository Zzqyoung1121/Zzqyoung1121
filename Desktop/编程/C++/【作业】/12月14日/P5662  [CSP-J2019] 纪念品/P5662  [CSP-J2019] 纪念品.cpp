#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int t,n,m;
int a[105][105],ans[10005];

int main(){
	cin>>t>>n>>m;
	for (int i=1;i<=t;i++){
		for (int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	for (int i=1;i<t;i++){
		memset(ans,0,sizeof(ans));
		for (int j=1;j<=n;j++){
			if (a[i+1][j]>a[i][j]){
				for (int k=a[i][j];k<=m;k++){
					ans[k]=max(ans[k],ans[k-a[i][j]]+a[i+1][j]-a[i][j]);
				}
			}
		}
		m+=ans[m];
	}
	cout<<m;
}
