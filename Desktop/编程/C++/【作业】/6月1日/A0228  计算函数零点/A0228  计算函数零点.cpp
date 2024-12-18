#include <iostream>
#include <bits/stdc++.h>
using namespace std;

double f(double x){
	return 114*x*x*x-514*x*x+1919*x-810;
}

int main(){
	double l=0,r=1,mid=0;
	while (r-l>=0.00000001){
		mid=(l+r)/2;
		if (f(l)*f(mid)<0){
			r=mid;
		}
		else {
			l=mid;
		}
	}
	cout<<fixed<<setprecision(6)<<mid;
}
