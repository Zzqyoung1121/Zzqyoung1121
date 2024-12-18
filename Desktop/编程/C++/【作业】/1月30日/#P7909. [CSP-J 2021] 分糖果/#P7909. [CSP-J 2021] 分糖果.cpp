#include <iostream>
using namespace std;

int main(){
	int n,l,r;
	cin>>n>>l>>r;
	if (r/n>l/n){
		cout<<n-1;
	}
	else{
		cout<<r%n;
	}
}
