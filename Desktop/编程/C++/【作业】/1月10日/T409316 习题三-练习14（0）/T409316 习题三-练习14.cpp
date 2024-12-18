#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,s,a,b=0;
	cin>>n;
	while(n!=0){
		a=n%10;
		if(a!=0){
			s=a+s*10;
			n/=10;
		}
		else{
			n/=10;
		}
	}
	while(s!=0){
		b=s%10+b*10;
		s/=10;
	}
	cout<<b;
}
