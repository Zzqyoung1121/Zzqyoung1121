#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,s;
	cin>>n;
	int a=n;
	while(a!=0){
		s=a%10+s*10;
		a/=10;
	}
	if (n==s){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
}
