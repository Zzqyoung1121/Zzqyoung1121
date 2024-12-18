#include <iostream>
using namespace std;

int n,a[1005];
int dp[1005],m;

int main(){
	cin>>n;
	for (int i=1;i<=n;i++)	cin>>a[i];
	for (int i=1;i<=n;i++){
		if (i==1||a[i]>dp[m])	dp[++m]=a[i];
		else {
			int l=1,r=m,ans;
			while (l<=r){
				int mid=(l+r)/2;
				if (a[i]<=dp[mid]){
					ans=mid;
					r=mid-1;
				}
				else {
					l=mid+1;
				}
			}
			dp[ans]=a[i];
		}
	}
	cout<<m;
} 
