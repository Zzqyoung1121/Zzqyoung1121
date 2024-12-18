#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
	string a="K";
	string b;
	int n,f=0,ans=0;
	cin>>n;
	cin>>b;
	a+=b;
	b+="V";
	for (int i=1;i<=n-1;i++){
		if (a[i]=='V'&&a[i+1]=='K'){
			ans++;
		}
		if (f==0){
			if (a[i]=='V'&&a[i+1]=='V'&&a[i+2]!='K'){
				f=1;
			} 
			if (a[i]=='K'&&a[i+1]=='K'&&a[i-1]!='V'){
				f=1;
			}
		}
		if (f==1){
			f=2;
			ans++;
		}
	}
	cout<<ans;
}
