#include <iostream>
using namespace std;

string Mul_s(string a,string b){ 
	string c="";
	int lena=a.size(),lenb=b.size();
	int x[30000]={0},y[30000]={0},z[30000]={0};
	for(int i=lena-1,j=0;i>=0;i--,j++)	x[j]=a[i]-'0';
	for(int i=lenb-1,j=0;i>=0;i--,j++)	y[j]=b[i]-'0';
	for(int i=0;i<lena;i++){
		for(int j=0;j<lenb;j++){
			z[i+j]+=x[i]*y[j];
			if(z[i+j]>=10){
				z[i+j+1]+=z[i+j]/10;
				z[i+j]%=10;
			}
		} 
	}
	int flag=0;
	for(int i=lena+lenb;i>=0;i--){
		if(z[i]!=0) flag=1;
		if(flag==1)	c+=z[i]+'0';	
	}
	return c; 
}

int main(){
	string n,m;
	cin>>n>>m;
	cout<<Mul_s(n,m);
}
