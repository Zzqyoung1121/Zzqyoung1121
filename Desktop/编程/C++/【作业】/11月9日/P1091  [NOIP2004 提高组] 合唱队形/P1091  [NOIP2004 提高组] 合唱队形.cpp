#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n;
int t[105];
int dp[105],m;
int Max,cnt;

int main(){
	cin>>n;
	for (int i=1;i<=n;i++)	cin>>t[i];
	for (int i=1;i<=n;i++){
		cnt=0;
		for (int j=1;j<=i;j++){
			if (j==1||t[j]>dp[m]){
				m++;
				dp[m]=t[j];
			}
			else {
				int l=1,r=m,ans;
				while (l<=r){
					int mid=(l+r)/2;
					if (t[j]<=dp[mid]){
						ans=mid;
						r=mid-1;
					}
					else {
						l=mid+1;
					}
				}
				dp[ans]=t[j];
			}
		}
		cnt+=m;
		memset(dp,0,sizeof(dp));m=0;
		for (int j=i;j<=n;j++){
			if (j==i||t[j]<dp[m]){
				m++;
				dp[m]=t[j];
			}
			else {
				int l=1,r=m,ans;
				while (l<=r){
					int mid=(l+r)/2;
					if (t[j]>=dp[mid]){
						ans=mid;
						r=mid-1;
					}
					else {
						l=mid+1;
					}
				}
				dp[ans]=t[j];
			}
		}
		cnt+=m;
		memset(dp,0,sizeof(dp));m=0;
		Max=max(cnt-1,Max);
//		cout<<cnt<<" "<<i<<endl;
	}
	cout<<n-Max;
}
