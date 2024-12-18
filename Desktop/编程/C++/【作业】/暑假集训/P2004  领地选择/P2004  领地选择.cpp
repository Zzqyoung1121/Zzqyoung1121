#include <iostream>
using namespace std; 

int n,m,c,a[2005][2005],s[2005][2005],tx,ty,Max=-2e9;

int main(){
	cin>>n>>m>>c;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			cin>>a[i][j];
			s[i][j]=s[i-1][j]+s[i][j-1]-s[i-1][j-1]+a[i][j];
		}
	}
	for (int x=1;x+c-1<=n;x++){
		for (int y=1;y+c-1<=m;y++){
			int ts=s[x+c-1][y+c-1]-s[x-1][y+c-1]-s[x+c-1][y-1]+s[x-1][y-1];
			if (ts>Max){
				Max=ts;
				tx=x;ty=y;
			}
		}
	}
	cout<<tx<<" "<<ty;
}
