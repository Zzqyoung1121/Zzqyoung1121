#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n,a[10005];
int f=0,ans=0;

int main(){
	int f=0;
	cin>>n;
	for (int i=1;i<=n-1;i++)	cin>>a[i];
	for (int i=1;i<=n-1;i++){
		if (a[i]>a[i+1]){
			f=1;
		}
		if (a[i]<a[i+1]){
			if (f==1){
				ans++;
			}
			f=0;
		}
	}
	cout<<ans;
}
