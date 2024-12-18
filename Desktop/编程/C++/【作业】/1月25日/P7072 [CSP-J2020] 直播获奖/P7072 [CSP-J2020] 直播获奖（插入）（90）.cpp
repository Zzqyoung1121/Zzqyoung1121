#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,w,a[100005];
	cin>>n>>w;
	for (int i=1;i<=n;i++)	cin>>a[i];
	for (int p=1;p<=n;p++){
		int k=max(1,p*w/100);
		for (int i=p;i>1;i--){
			if (a[i]>a[i-1])	swap(a[i],a[i-1]);
			else	break;
		}
		cout<<a[k]<<" ";
	}
}
