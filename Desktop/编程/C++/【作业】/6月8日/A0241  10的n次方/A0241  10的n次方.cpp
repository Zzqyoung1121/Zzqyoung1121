#include <bits/stdc++.h>
using namespace std;

long long a=10,n,p=998244353;

long long f(int m){
	if(m==0) return 1;
	if(m==1) return a%p;
	long long tmp=f(m/2);
	if(m%2==0){
		return tmp*tmp%p;
	}
	else{
		return ((tmp*tmp)%p)*a%p;
	}
}

int main(){
	cin>>n;
	cout<<f(n);
}

