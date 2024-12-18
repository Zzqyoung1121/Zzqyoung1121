#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool cmp(int x,int y){
	return x>y;
}

int main(){
	int w,n,a[30005];
	int cnt=0;
	cin>>w>>n;
	for (int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1,cmp);
	for (int i=1,j=n;i<=j;){
		if (i==j){
			cnt++;
			break;
		}
		else {
			if (a[i]+a[j]<=w){
				cnt++;
				i++;
				j--;
			}
			else {
				cnt++;
				i++;
			}
		}
	}
	cout<<cnt;
}
