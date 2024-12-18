#include <bits/stdc++.h>
using namespace std;

int n,m,c;//长宽 边长
int a[1005][1005];
int s[1005][1005];

int main(){
	cin>>n>>m>>c;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			cin>>a[i][j];
			s[i][j]=s[i-1][j]+s[i][j-1]-s[i-1][j-1]+a[i][j];
		}
	}
	
	int Max=-2e9,tx=0,ty=0;
	//枚举所有的边长为c的正方形
	for (int i=1;i+c-1<=n;i++){
		for (int j=1;j+c-1<=m;j++){
			//左上角 i,j 边长 c
			int sum=s[i+c-1][j+c-1]-s[i-1][j+c-1]-s[i+c-1][j-1]+s[i-1][j-1];
			if (Max<sum){
				Max=sum;
				tx=i;ty=j;
			}
		}
	}
	cout<<tx<<" "<<ty;
}
