#include <iostream>
using namespace std;

int n,m,a[105][105];
int b[105][105],sum,ans=2e9;

int check(int r,int c){
	int cnt=0;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			b[i][j]=a[i][j];
		}
	}
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			if (b[i][j]<0)	return 2e9;
			if (b[i][j]==0)	continue;
			if (i+r-1>n||j+c-1>m)	return 2e9;
			cnt+=b[i][j];
			int t=b[i][j];
			for (int x=i;x<=i+r-1;x++){
				for (int y=j;y<=j+c-1;y++){
					b[x][y]-=t;
				}
			}
		}
	}
	return cnt;
}

int main(){
	cin>>n>>m;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			cin>>a[i][j];
			sum+=a[i][j];
		}
	}
	for (int r=1;r<=n;r++){
		for (int c=1;c<=n;c++){
			if (sum%(r*c)==0){
				ans=min(ans,check(r,c));
//				cout<<r<<" "<<c<<" "<<check(r,c)<<endl;
			}
		}
	}
	cout<<ans;
}
