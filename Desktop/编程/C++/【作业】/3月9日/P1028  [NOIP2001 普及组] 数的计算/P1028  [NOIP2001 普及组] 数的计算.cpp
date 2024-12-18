#include <iostream>
using namespace std;

int main(){
	int n,a[1005]={0,1};
	cin>>n;
	for (int i=2;i<=n;i++){
		if (i%2==1)	a[i]=a[i-1];
		else{
			for (int j=1;j<=i/2;j++){
				a[i]+=a[j];
			}
			a[i]++;
		}
	}
	cout<<a[n];
}
