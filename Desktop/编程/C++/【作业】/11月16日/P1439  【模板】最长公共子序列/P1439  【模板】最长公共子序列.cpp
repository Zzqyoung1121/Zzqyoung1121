#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct ST{
	int num,id;
}a[100005];

int n;
int dp[100005],m,b[100005];

bool cmp(ST x,ST y){
	return x.num<y.num;
}

int main(){
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>a[i].num;
		a[i].id=i;
	}
	sort(a+1,a+n+1,cmp);
	for (int i=1;i<=n;i++)	cin>>b[i];
	for (int i=1;i<=n;i++){
		if (i==1||dp[m]<a[b[i]].id)	dp[++m]=a[b[i]].id;
		else {
			int l=1,r=m,ans;
			while (l<=r){
				int mid=(l+r)/2;
				if (dp[mid]>=a[b[i]].id){
					ans=mid;
					r=mid-1;
				}
				else {
					l=mid+1; 
				}
			}
			dp[ans]=a[b[i]].id;
		}
	}
	cout<<m;
}
