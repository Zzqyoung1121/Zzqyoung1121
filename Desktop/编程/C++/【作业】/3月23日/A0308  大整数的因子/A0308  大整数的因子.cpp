#include <iostream>
using namespace std;

int f=1;
string Div_s(string a,long long b){
	int lena=a.size();
	int x[3000]={0},z[3000]={0};
	for(int i=lena-1;i>=0;i--)	x[i]=a[i]-'0';
	long long t=0;
	for(int i=0;i<lena;i++){
		t=t*10+x[i];
		z[i]=t/b;
		t=t%b;
	} 
	if (t!=0){
		return "0";
	}
	else {
		string c="";
		int flag=0;
		for(int i=0;i<lena;i++){
			if(z[i]!=0) flag=1;
			if(flag==1)	c+=z[i]+'0';
		}
		return c;
	}
}

int main(){
	string n;
	cin>>n;
	for (long long i=2;i<=9;i++){
		string s=Div_s(n,i);
		if (s!="0"){
			cout<<i<<" ";
			f=0;
		}
	}
	if (f)	cout<<"none";
}
