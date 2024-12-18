#include <iostream>
using namespace std;

long long a,b,c;

int main(){
	cin>>a>>b>>c;
	int t=(b+a-1)/a;
	if (t<=c)	cout<<"yes";
	else	cout<<"no";
}
