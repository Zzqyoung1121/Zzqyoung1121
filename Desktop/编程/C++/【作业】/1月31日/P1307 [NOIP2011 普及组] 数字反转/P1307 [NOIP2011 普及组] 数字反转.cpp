#include <iostream>
using namespace std;

int main(){
	int n,m=0;
	cin>>n;
	while(n!=0){
		m=m*10+n%10;
		n/=10;
	}
	cout<<m;
}
