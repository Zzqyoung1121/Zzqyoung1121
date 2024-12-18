#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,a[100005];
	float w;
	cin>>n>>w;
	for (int i=1;i<=n;i++)	cin>>a[i];
	for (int p=1;p<=n;p++){
		int d=p*(w/100);
		int b=max(1,d);
		for (int i=1;i<=p-1;i++){
			for (int j=i+1;j<=p;j++){
				if (a[i]<a[j])	swap(a[i],a[j]);
			} 
		}
		cout<<a[b]<<" ";
	}
}
