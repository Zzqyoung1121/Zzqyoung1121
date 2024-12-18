#include <iostream>
using namespace std;

long long n,x,a[100005];
long long ans;

int main(){
	cin>>n>>x;
	for (int i=1;i<=n;i++)	cin>>a[i];
	for (int i=1;i<=n-1;i++){
		if (a[i]+a[i+1]>x){
			ans+=a[i]+a[i+1]-x;
			a[i+1]-=(a[i]+a[i+1]-x);
			if (a[i+1]<0)	a[i+1]=0;	
		}
	}
	cout<<ans;
}
