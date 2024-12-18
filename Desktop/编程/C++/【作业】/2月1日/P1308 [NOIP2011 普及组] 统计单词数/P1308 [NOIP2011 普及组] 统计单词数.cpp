#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string k,a[1000005],b;
int ans=0,l;

string check(string s){
	for (int i=0;s[i]!='\0';i++){
		if (s[i]>='A'&&s[i]<='Z'){
			s[i]+=32;
		}
	}
	return s;
}

int n=0,f=0;
int main(){
	cin>>k;
	k=check(k);
	while(cin>>a[n]){
		a[n]=check(a[n]);
		n++;
	}
	int d=0;
	for (int i=0;i<=n;i++){
		if (a[i]==k){
			ans++;
			if (f==0){
				l=d;
			}
			f=1;
		}
		d+=a[i].size();
	}
	if (f==0)	cout<<-1;
	else	cout<<ans<<" "<<l;
}
