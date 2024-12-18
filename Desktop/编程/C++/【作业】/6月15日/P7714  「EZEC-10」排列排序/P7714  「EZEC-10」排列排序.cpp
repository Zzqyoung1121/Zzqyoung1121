#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int t;
int a[1000005],n;

int main(){
	cin>>t;
	while (t--){
		cin>>n;
		for (int j=1;j<=n;j++)	cin>>a[j];
		
		int l=1,r=1,k,ans=0;
		while (l<=n){
			while (l==a[l])	l++;
			r=l;
			k=a[l];
			
			while (r!=k&&r<=n){
				r++;
				if (a[r]>k)	k=a[r];
			}
			if (l<=n && r<=n)	ans+=(r-l+1);
			l=r+1;
		}
		cout<<ans<<endl;
	}
}
