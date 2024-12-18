#include <bits/stdc++.h>
using namespace std;

int main(){
	int a[100005],t[601],n,w;
	cin>>n>>w;
	for (int i=1;i<=n;i++){
		int k=max(1,i*w/100);
		cin>>a[i];
		t[a[i]]++;
		int cnt=0,ans=0;
		for (int j=600;j>=0;j--){
			cnt+=t[j];
			if (cnt>=k){
				ans=j;
				break;
			}
		}
		cout<<ans<<" ";
	} 
}
