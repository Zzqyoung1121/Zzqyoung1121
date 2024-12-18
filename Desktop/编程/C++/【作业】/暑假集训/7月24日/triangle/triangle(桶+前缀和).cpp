#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//Í°+Ç°×ººÍ-----100% 
int n1,n2,n3,c;
long long ans;
int a[10005],b[10005];
int T[3000005];

int main(){
	cin>>n1>>n2>>n3;
	for (int i=1;i<=n1;i++)	cin>>a[i];
	for (int i=1;i<=n2;i++)	cin>>b[i];
	for (int i=1;i<=n3;i++){
		cin>>c;
		T[c]++;
	}
	for (int i=1;i<=3000000;i++)	T[i]+=T[i-1];
	for (int i=1;i<=n1;i++){
		for (int j=1;j<=n2;j++){
			ans+=T[a[i]+b[j]-1];
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
