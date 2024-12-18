#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,a[100005],w;
	cin>>n>>w;
	for (int i=1;i<=n;i++)	cin>>a[i];
	for (int p=1;p<=n;p++){
		int k=max(1,p*w/100);
		sort(a+1,a+p+1,greater<int>());
		cout<<a[k]<<" ";
	}
	return 0;
}
