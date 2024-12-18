# include <bits/stdc++.h>
using namespace std;
int main(){
	double n;
	cin>>n;
	if (n<=2000){
		cout<<fixed<<setprecision(2)<<n; 
	}
	else if (n<=5000){
		cout<<fixed<<setprecision(2)<<n-(n-2000)*0.03;
	}
	else if (n<=10000){
		cout<<fixed<<setprecision(2)<<n-(5000-2000)*0.03-(n-5000)*0.05;
	}
	else if (n<=15000){
		cout<<fixed<<setprecision(2)<<n-(5000-2000)*0.03-(10000-5000)*0.05-(n-10000)*0.10;
	}
	else{
		cout<<fixed<<setprecision(2)<<n-(5000-2000)*0.03-(10000-5000)*0.05-(15000-10000)*0.10-(n-15000)*0.15; 
	}
}
