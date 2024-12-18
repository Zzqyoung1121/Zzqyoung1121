#include <iostream>
using namespace std;

long long n,a;
long long ans;

int main(){
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>a;
		for (int j=1;j*j<=a;j++){
			if (a%j==0){
				ans+=2;
				if (a/j==j)	ans--;
			}
		}
	}
	cout<<ans;
}
