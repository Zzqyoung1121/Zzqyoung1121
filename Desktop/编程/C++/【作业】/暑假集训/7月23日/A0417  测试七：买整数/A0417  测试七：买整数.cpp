#include <iostream>
using namespace std;

long long a,b,c;

int main(){
	cin>>a>>b>>c;
	long long l=0,r=1000000000,ans;
	while (l<=r){
		long long mid=(l+r)/2;
		long long j=mid,cnt=0;
		while (j>0){
			j/=10;
			cnt++;
		}
		if ((mid*a+cnt*b)<=c){
			ans=mid;
			l=mid+1;
		}
		else {
			r=mid-1;
		}
	}
	cout<<ans; 
}
