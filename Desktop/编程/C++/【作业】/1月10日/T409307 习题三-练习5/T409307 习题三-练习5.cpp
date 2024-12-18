#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,f=0;
	double s=0;
	cin>>n;
	for (int i=1;i<=n;i+=2){
		if (f==0){
			s+=1.0/i;
			f=1;
		}
		else{
			s-=1.0/i;
			f=0;
		}
	}
	cout<<fixed<<setprecision(3)<<4*s;
}
