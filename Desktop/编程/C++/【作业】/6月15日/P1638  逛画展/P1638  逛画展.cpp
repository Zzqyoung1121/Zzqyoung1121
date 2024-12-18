#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n,m,a[1000005],t[2005];

int main(){
	cin>>n>>m;
	for (int i=1;i<=n;i++)	cin>>a[i];
	int l=1,r=0,cnt=0,ans_a=0,ans_b=2e9;
	while (l<=n){
		while (r<n&&cnt!=m){
			r++;
			t[a[r]]++;
			if (t[a[r]]==1){
				cnt++;
			}
		}
		
//		if (cnt==m)	cout<<l<<" "<<r<<endl;
		if (cnt==m && r-l<ans_b-ans_a){
			ans_a=l;
			ans_b=r;
		}
		
		t[a[l]]--;
		if (t[a[l]]==0)		cnt--;
		l++;
	}
	
	cout<<ans_a<<" "<<ans_b;
	
	/*
	int l=1,r=1,ans_a=0,ans_b=2e9;
	while (l<=n){
		int t[2005]={0},cnt=0;
		while (r<=n && cnt<m){
			t[a[r]]++;
			if (t[a[r]]==1)	cnt++;	
			r++;
		}
		r--;
		if (cnt==m && r-l<ans_b-ans_a){
			ans_a=l;
			ans_b=r;
		}
		l++;r=l;
	} 
	*/

}
