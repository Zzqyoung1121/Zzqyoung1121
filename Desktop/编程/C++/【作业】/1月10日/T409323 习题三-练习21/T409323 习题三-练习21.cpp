#include <iostream> 
using namespace std;
 
int main(){
	int n,a=0;
	cin>>n;
	for (int i=1;n!=0;i*=10){
		a=n%2*i+a;
		n/=2;
	} 
	cout<<a;
}
