#include <iostream>
using namespace std;

int n;
char a[2048][2048];

void f(int x,int y,int step,char flag){
//	cout<<x<<" "<<y<<" "<<step<<" "<<flag<<endl;
	if (step==0){
		a[x][y]=flag; 
		return ;
	}
	else {
		int p=1;
		for (int i=1;i<=step-1;i++)	p*=2;
		if (flag=='C'){
			f(x,y,step-1,'C');
			f(x,y+p,step-1,'C');
			f(x+p,y,step-1,'P');
			f(x+p,y+p,step-1,'C');
		}
		else {
			f(x,y,step-1,'P');
			f(x,y+p,step-1,'P');
			f(x+p,y,step-1,'C');
			f(x+p,y+p,step-1,'P');
		}
	}
}

int main(){
	cin>>n;
	int p=1;
	for (int i=1;i<=n;i++)	p*=2;
//	cout<<p;
	f(1,1,n,'C');
	for (int i=1;i<=p;i++){
		for (int j=1;j<=p;j++){
			cout<<a[i][j];
		}
		cout<<endl;
	}
}
