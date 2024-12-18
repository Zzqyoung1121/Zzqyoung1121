#include <iostream>
using namespace std;

const int N=105;
int n,c,v[N],w[N],m[N],dp[40005];

int main(){
	cin>>n>>c;
	for (int i=1;i<=n;i++)	cin>>w[i]>>v[i]>>m[i];
	for (int i=1;i<=n;i++){
		for (int k=1;m[i]>0;k*=2){
			if (m[i]<k)	k=m[i];
			m[i]-=k;
			for (int j=c;j>=v[i]*k;j--)	dp[j]=max(dp[j],dp[j-k*v[i]]+k*w[i]);	
		}
	}
	cout<<dp[c];
} 
