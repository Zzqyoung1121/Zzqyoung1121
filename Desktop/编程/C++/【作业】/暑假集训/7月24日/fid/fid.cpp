#include <iostream>
using namespace std;

long long n,a,b;

int main(){
//	freopen("fib.in","r",stdin);
//	freopen("fid.out","w",stdout);
	cin>>a>>b>>n;
	if (n%3==1)	cout<<a;
	else if (n%3==2)	cout<<b;
	else	cout<<(a^b);
}
