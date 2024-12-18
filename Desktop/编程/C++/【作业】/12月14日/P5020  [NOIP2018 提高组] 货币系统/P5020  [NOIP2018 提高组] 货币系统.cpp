#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int T,n,a[105],dp[25005];

int main(){
	cin>>T;
	while (T--){
		memset(a,0,sizeof(a));
		memset(dp,0,sizeof(dp));
		cin>>n;
		for (int i=1;i<=n;i++)	cin>>a[i];
		sort(a+1,a+n+1);
		int m=0;
		for (int i=1;i<=n;i++){
			for (int j=a[i];j<=a[n];j++){
				if (j==a[i]){
					if (a[i]!=dp[j])	m++;
				}
				dp[j]=max(dp[j],a[i]+dp[j-a[i]]);
			}
		}
		cout<<m<<endl;
	}
}
