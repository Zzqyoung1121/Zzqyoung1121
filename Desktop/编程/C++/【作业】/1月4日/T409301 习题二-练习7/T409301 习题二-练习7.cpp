# include <iostream>
using namespace std;

int main(){
	int a,b,c,d,e,f=0;
	cin>>a>>b>>c>>d>>e;
	if (a>60){
		cout<<"1 ";
		f++;
	}
	else {
		cout<<"0 ";
	}
	if (b>60){
		cout<<"1 ";
		f++;
	}
	else {
		cout<<"0 ";
	}
	if (c>60){
		cout<<"1 ";
		f++;
	}
	else {
		cout<<"0 ";
	}
	if (d>60){
		cout<<"1 ";
		f++;
	}
	else {
		cout<<"0 ";
	}
	if (e>60){
		cout<<1<<endl;
		f++;
	}
	else {
		cout<<0<<endl;
	}
	if (f==5){
		cout<<1;
	}
	else {
		cout<<0;
	}
}
