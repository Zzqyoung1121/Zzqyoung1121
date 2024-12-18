#include <iostream>
using namespace std;

int main(){
	int a[40][40]={0};
	int n,x=1,y;
	cin>>n;
	
	if (n%2==1)	y=n/2+1;
	else	y=n/2;
	a[x][y]=1;
	
	for (int i=2;i<=n*n;i++){
		if (x==1&&y!=n){
			x=n;y++;
		}
		else if (x!=1&&y==n){
			x--;y=1;
		}
		else if (x==1&&y==n){
			x++;
		}
		else if (x!=1&&y!=n){
			if (a[x-1][y+1]==0){
				x--;y++;
			}
			else{
				x++;
			}
		}
		a[x][y]=i;
	}
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n;j++){
			cout<<a[i][j]<<" ";
		} 
		cout<<endl;
	} 
} 
