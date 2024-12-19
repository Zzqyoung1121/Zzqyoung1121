#include <iostream>
#include <bits/stdc++.h>
#include <map>
#define int long long
using namespace std;

int n;
int a[200005],b[200005],ans,sum;
map<pair<int,int>,int> M;

signed main(){
	cin>>n;
	for (int i=1;i<=n;i++)	cin>>a[i];
	for (int i=1;i<=n;i++){
		cin>>b[i];
		sum+=b[i];
	}
	for (int i=1;i<=n;i++){
		for (int j=0;j<=1000000/i;j++){
			int x=a[i]-(i-1)*j;
			if (x>=0){
				pair<int,int> p(x,j);
				M[p]+=b[i];
				ans=max(ans,M[p]);
			}
		}
	}
	cout<<sum-ans;
} 
