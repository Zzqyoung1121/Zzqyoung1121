#include <bits/stdc++.h>
using namespace std;

int n,m;
long long ans=-9e18;
long long a[1005][1005];
long long book[1005][1005][2];

long long f(int x,int y,int k){
	if (book[x][y][k]!=-9e18){
		return book[x][y][k];
	}
	if (x==1&&y==1){
		return book[x][y][0]=book[x][y][1]=a[x][y];
	}
	if (k==0){
		long long s=-9e18;
		if(x-1>=1)   s=max(s,f(x-1,y,0));
		if(y-1>=1)	 s=max(s,max(f(x,y-1,1),f(x,y-1,0)));
		return book[x][y][k]=s+a[x][y];
	}
	else {
		long long s=-9e18;
		if (x+1<=n)	s=max(s,f(x+1,y,1));
		if (y-1>=1)	s=max(s,max(f(x,y-1,1),f(x,y-1,0)));
		return book[x][y][k]=s+a[x][y];
	}
} 

int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
			book[i][j][0]=book[i][j][1]=-9e18;
		}
	}
	cout<<f(n,m,0);
	return 0;
}
