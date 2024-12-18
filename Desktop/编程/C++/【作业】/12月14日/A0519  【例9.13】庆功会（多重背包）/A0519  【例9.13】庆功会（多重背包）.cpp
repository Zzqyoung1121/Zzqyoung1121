#include <iostream>
using namespace std;

const int N=505;
int n,c,w[N],v[N],m[N],dp[6005];

int main(){
	cin>>n>>c;
	for (int i=1;i<=n;i++)	cin>>v[i]>>w[i]>>m[i];
	for (int i=1;i<=n;i++){
		for (int k=1;m[i]>0;k*=2){
			if (k>m[i])	k=m[i];
			m[i]-=k;
			for (int j=c;j>=k*v[i];j--)	dp[j]=max(dp[j],dp[j-k*v[i]]+k*w[i]);
		}
	}
	cout<<dp[c];
} 
