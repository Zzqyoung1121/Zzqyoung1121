#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int a[30];
	for (int i=1;i<=24;i++){
		a[i]=pow(2,i);
	}
	int n;
	cin>>n;
	if (n%2==0){
		for (int i=24;i>=1;i--){
			if (n>=a[i]){
				cout<<a[i]<<" ";
				n-=a[i];
			}
		}
	}
	else{
		cout<<-1; 
	} 
}
