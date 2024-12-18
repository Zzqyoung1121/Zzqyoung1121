#include <iostream>
using namespace std; 

int n;
char a[1000][1000];

void f(int step,int x,int y){
	if (step==1){
		a[x][y]='*';
		return ;
	}
	else {
		int p=1;
		for (int i=1;i<=step-2;i++){
			p*=3;
		}
		f(step-1,x,y);
		f(step-1,x-p,y-p);
		f(step-1,x-p,y+p);
		f(step-1,x+p,y-p);
		f(step-1,x+p,y+p);
	}
}

int main(){
	cin>>n;
	for (int i=1;i<=800;i++){
		for (int j=1;j<=800;j++){
			a[i][j]=' ';
		}
	}
	int p=1;
	for (int i=1;i<=n-1;i++){
		p*=3;
	}
	f(n,p/2+1,p/2+1);
	for (int i=1;i<=p;i++){
		for (int j=1;j<=p;j++){
			cout<<a[i][j];
		}
		cout<<endl;
	}
}
