#include <iostream>
#define int long long
using namespace std;

int n,ans;
int a[100005],t[100005];

signed main(){
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>a[i];
		t[a[i]]++;
	} 
	for (int i=1;i<=5000;i++){
		for (int j=1;j<=i/2;j++){
			if (j*2==i){
				ans=ans%(1000000000+7)+((t[j]*(t[j]-1)/2)*(t[i]*(t[i]-1)/2))%(1000000000+7);
			}
			else {
				ans=ans%(1000000000+7)+(t[j]*t[i-j]*(t[i]*(t[i]-1)/2))%(1000000000+7);
			}
		}
	}
	cout<<ans;
}
