#include <bits/stdc++.h>
using namespace std;


int main(){
	int n,x;
	cin>>n>>x;
	long long a[100005]={0};
	for (int i=1;i<=n;i++){
		cin>>a[i];
	}
	long long ans=0;
	for (int i=1;i<n;i++){
		if (a[i]+a[i+1]>x){
			ans+=(a[i]+a[i+1]-x);
			if (a[i+1]<(a[i]+a[i+1]-x)){
				a[i+1]=0;
			}
			else {
				a[i+1]-=(a[i]+a[i+1]-x);
			}
		}
	}
	cout<<ans;
}
