#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//二分+优化-----100% 
int n1,n2,n3;
long long ans;
int a[100005],b[100005],c[100005];

int main(){
	cin>>n1>>n2>>n3;
	for (int i=1;i<=n1;i++)	cin>>a[i];
	for (int i=1;i<=n2;i++)	cin>>b[i];
	for (int i=1;i<=n3;i++)	cin>>c[i];
	sort(a+1,a+n1+1);
	sort(b+1,b+n2+1);
	sort(c+1,c+n3+1);
	for (int i=1;i<=n1;i++){
		int t=1; 
		for (int j=1;j<=n2;j++){
			//a[i]+b[j]
			t=lower_bound(c+t,c+n3+1,a[i]+b[j])-c;
			ans+=t-1;
		}
	}
	cout<<ans;
}

/*
3 3 2
2 4 3
6 7 5
8 9
*/
