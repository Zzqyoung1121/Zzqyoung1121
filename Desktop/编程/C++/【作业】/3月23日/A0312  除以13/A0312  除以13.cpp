#include <iostream>
using namespace std;

void Div_s(string a,long long b){
	int lena=a.size();
	int x[3000]={0},z[3000]={0};
	for(int i=lena-1;i>=0;i--)	x[i]=a[i]-'0';
	long long t=0;
	for(int i=0;i<lena;i++){
		t=t*10+x[i];
		z[i]=t/b;
		t=t%b;
	} 
	string c="";
	int flag=0;
	for(int i=0;i<lena;i++){
		if(z[i]!=0) flag=1;
		if(flag==1)	c+=z[i]+'0';
	}
	cout<<c<<endl<<t;
}

int main(){
	string n;
	cin>>n;
	Div_s(n,13);
}
