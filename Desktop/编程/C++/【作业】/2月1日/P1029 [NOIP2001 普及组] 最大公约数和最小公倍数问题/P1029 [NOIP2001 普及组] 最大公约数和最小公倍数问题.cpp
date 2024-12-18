#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

//Õ·×ªÏà³ý·¨

int main(){
	ll x,y;
	int ans=0;
	cin>>x>>y;
	ll n=x*y;
	for (ll p=1;p*p<=n;p++){
		if (n%p==0){
			ll q=n/p;
			if (__gcd(p,q)==x&&n/__gcd(p,q)==y){
				ans++;
				if (p!=q)	ans++;
			}
		}
	}
	cout<<ans;
}
