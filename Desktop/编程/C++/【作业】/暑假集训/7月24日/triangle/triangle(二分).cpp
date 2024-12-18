#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//¶þ·Ö-----80% 
int n1,n2,n3;
long long ans;
int a[100005],b[100005],c[100005];

int main(){
	cin>>n1>>n2>>n3;
	for (int i=1;i<=n1;i++)	cin>>a[i];
	for (int i=1;i<=n2;i++)	cin>>b[i];
	for (int i=1;i<=n3;i++)	cin>>c[i];
	sort(c+1,c+n3+1);
	for (int i=1;i<=n1;i++){
		for (int j=1;j<=n2;j++){
			//a[i]+b[j]
			ans+=(lower_bound(c+1,c+n3+1,a[i]+b[j])-c)-1;
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
