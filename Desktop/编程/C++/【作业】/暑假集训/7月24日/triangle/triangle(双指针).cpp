#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//Ë«Ö¸Õë-----100%-----2n^2 
int n1,n2,n3;
long long ans;
int a[10005],b[10005],c[10005];

int main(){
	cin>>n1>>n2>>n3;
	for (int i=1;i<=n1;i++)	cin>>a[i];
	for (int i=1;i<=n2;i++)	cin>>b[i];
	for (int i=1;i<=n3;i++)	cin>>c[i];
	//3nlogn
	sort(a+1,a+n1+1);
	sort(b+1,b+n2+1);
	sort(c+1,c+n3+1);
	//2n^2
	for (int i=1;i<=n1;i++){
		int r=1;
		for (int j=1;j<=n2;j++){
			//a[i]+b[j]
			while (r<=n3&&c[r]<a[i]+b[j])	r++;
			ans+=(r-1);
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
