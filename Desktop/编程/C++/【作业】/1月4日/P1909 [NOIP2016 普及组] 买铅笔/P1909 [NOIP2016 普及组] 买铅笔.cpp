# include <iostream>
using namespace std;

int main(){
	int a,b,b1,b2,c,c1,c2,d,d1,d2,t;
	cin>>a;
	cin>>b>>b1;
	cin>>c>>c1;
	cin>>d>>d1;
	if (a%b==0){
		b2=a/b*b1;
	} 
	else{
		b2=(a/b+1)*b1;
	}
	
	if (a%c==0){
		c2=a/c*c1;
	} 
	else{
		c2=(a/c+1)*c1;
	}
	
	if (a%b==0){
		d2=a/d*d1;
	} 
	else{
		d2=(a/d+1)*d1;
	}
	if (b2>c2){
		t=b2;
		b2=c2;
		c2=t;
	}
	if (b2>d2){
		t=b2;
		b2=d2;
		d2=t;
	}
	if (c2>d2){
		t=c2;
		c2=d2;
		d2=t;
	}
	cout<<b2;
} 
