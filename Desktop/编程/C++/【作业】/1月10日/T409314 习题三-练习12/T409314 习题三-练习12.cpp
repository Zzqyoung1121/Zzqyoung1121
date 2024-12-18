#include <bits/stdc++.h>
using namespace std;

int main(){
	int m,n,s,a;
	cin>>m>>n;
	int i=m;
	while(i<=n){
		int x=i,s=0;
		while(x!=0){
			a=x%10;
			s+=a*a*a;
			x/=10;
		}
		if (s==i){
			cout<<i<<" ";
		}
		i++;
	}
}
