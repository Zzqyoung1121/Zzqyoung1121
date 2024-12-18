#include <iostream>
#include <bits/stdc++.h>
#define int long long
using namespace std;

int n,ans;
int a[10];
int cnt[20][20][20][20][20];

signed main(){
	freopen("lock.in","r",stdin);
	freopen("lock.out","w",stdout);
	cin>>n;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=5;j++)	cin>>a[j];
		for (int j=1;j<=9;j++){
			for (int k=1;k<=5;k++){
				a[k]=(a[k]+j)%10;
				cnt[a[1]][a[2]][a[3]][a[4]][a[5]]++;
				a[k]=(a[k]+(10-j))%10;
			}
		}
		for (int j=1;j<=9;j++){
			for (int k=1;k<=4;k++){
				a[k]=(a[k]+j)%10;
				a[k+1]=(a[k+1]+j)%10;
				cnt[a[1]][a[2]][a[3]][a[4]][a[5]]++;
				a[k]=(a[k]+10-j)%10;
				a[k+1]=(a[k+1]+(10-j))%10;
			}
		}
	}
	for (int a=0;a<=9;a++){
		for (int b=0;b<=9;b++){
			for (int c=0;c<=9;c++){
				for (int d=0;d<=9;d++){
					for (int e=0;e<=9;e++){
						if (cnt[a][b][c][d][e]==n)	ans++;
					}
				}
			}
		}
	}
	cout<<ans;
}
