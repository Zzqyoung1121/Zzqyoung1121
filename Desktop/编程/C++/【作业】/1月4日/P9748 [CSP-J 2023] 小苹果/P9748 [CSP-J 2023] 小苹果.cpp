# include <iostream>
using namespace std;
int main(){
	int n,a=0,b,c=0,d=0,e;
	cin>>n;
	while (n!=0){
		e=n;
		b=(n-1)/3+1;
		n=n-b;
		c++;
		if ((e-1)%3==0&&a!=1){
			d++;
			a=1;
		}
		if ((e-1)%3==1&&a!=1){
			d++;
		}
		if ((e-1)%3==2&&a!=1){
			d++;
		}
	}
	cout<<c<<" "<<d;
}

