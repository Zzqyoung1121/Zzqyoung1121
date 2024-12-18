#include <iostream>
using namespace std;

string a,b;
int dp[2005][2005];

int main(){
	cin>>a>>b;
	int x=a.size(),y=b.size();
	for (int i=0;i<=x;i++){
		for (int j=0;j<=y;j++){
			if (i==0)	dp[i][j]=j;
			else if (j==0)	dp[i][j]=i;
			else if (a[i-1]==b[j-1])	dp[i][j]=dp[i-1][j-1];
			else	dp[i][j]=min(dp[i][j-1],min(dp[i-1][j],dp[i-1][j-1]))+1;
		}
	}
	cout<<dp[x][y];
} 
