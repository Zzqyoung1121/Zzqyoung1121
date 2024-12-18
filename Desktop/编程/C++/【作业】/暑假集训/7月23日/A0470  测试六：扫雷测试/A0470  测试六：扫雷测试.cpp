#include <iostream>
using namespace std;

int n,q,x,y;
char a[25][25];

int main(){
	cin>>n;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	cin>>q;
	for (int i=1;i<=q;i++){
		cin>>x>>y;
		if (a[x][y]=='o')	cout<<"boom"<<endl;
		else {
			int cnt=0;
			if (a[x-1][y-1]=='o')	cnt++;
			if (a[x][y-1]=='o')	cnt++;
			if (a[x+1][y-1]=='o')	cnt++;
			if (a[x-1][y]=='o')	cnt++;
			if (a[x+1][y]=='o')	cnt++;
			if (a[x-1][y+1]=='o')	cnt++;
			if (a[x][y+1]=='o')	cnt++;
			if (a[x+1][y+1]=='o')	cnt++;
			cout<<cnt<<endl;
		}
	}
} 
