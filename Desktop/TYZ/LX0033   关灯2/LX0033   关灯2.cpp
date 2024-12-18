#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n,k,ans;
int a[1005][1005];
int b[1005][1005];

int main(){
	cin>>n>>k;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	for (int i=1;i<=n;i++){
		memset(b,0,sizeof(b));
		int t[1005]={0},cnt=n,m=k;
		for (int j=1;j<=n;j++){
			if (a[i][j]==0){
				t[j]=1;
				m--;
			}
		}
		for (int y=1;y<=n;y++){
			for (int x=1;x<=n;x++){
				b[x][y]=a[x][y]^t[y];
			}
		}
		for (int y=1;y<=n;y++){
			int flag=0;
			for (int x=1;x<=n;x++){
				if (b[x][y]!=b[x][1]){
					flag=1;
					cnt--;
				}
				if (flag==0&&x==n&&b[x][1]==0)	m--;
			}
		}
		if (m%2==1&&cnt==n)	cnt--;	
		ans=max(ans,cnt);
	}
	cout<<ans;
} 
