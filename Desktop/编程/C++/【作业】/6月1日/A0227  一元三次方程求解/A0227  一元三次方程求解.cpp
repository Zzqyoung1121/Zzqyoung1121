#include <iostream>
#include <bits/stdc++.h>
using namespace std;

double a,b,c,d;

double f(double x){
	return a*x*x*x+b*x*x+c*x+d;
}

int main(){
	cin>>a>>b>>c>>d;
	for (double i=-100;i<=100;i++){
		if (f(i)==0)	cout<<fixed<<setprecision(2)<<i<<" ";
		else if (f(i)*f(i+1)<0){
			double l=i,r=i+1,mid=0;
			while (r-l>=0.0001){
				mid=(l+r)/2;
				if (f(l)*f(mid)<0){
					r=mid;
				}
				else {
					l=mid;
				}
			}
			cout<<fixed<<setprecision(2)<<mid<<" ";
		}
	}
}
