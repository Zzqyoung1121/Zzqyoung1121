#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,a=1,b=2,c=3;
	cin>>n;
	int s=n;
	if (n==1){
		cout<<a*2;
	}else if(n==2){
		cout<<b*2;
	}else if(n==3){
		cout<<c*2;
	}else{
		for (int i=4;i<n;i++){
			s+=a;
			a=b;
			b=c;
			c=s;
		}
		cout<<s*2;
	}
}
