#include <bits/stdc++.h> 
using namespace std;

int main(){
	double A,B,L,i=0;
	cin>>A>>B>>L;
	double Min=200,ta,tb;
	for (double a=1;a<=L;a++){
		for (double b=1;b<=L;b++){
			if (a/b>=A/B){
				if (a/b-A/B<Min){
					Min=a/b-A/B;
					ta=a;
					tb=b;
				}
			}
		}
	}
	cout<<ta<<" "<<tb; 
}
