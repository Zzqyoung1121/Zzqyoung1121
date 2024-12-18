#include <iostream>
using namespace std;

int x[1005],y[1005],z[1005];
string a,b;

string Mul_s(string a,string b){
	if (a=="0" || b=="0")	return "0";
	int lena=a.size();
	int lenb=b.size();
	for (int i=0;i<=lena-1;i++)	x[lena-i-1]=(a[i]-'0');
	for (int i=0;i<=lenb-1;i++)	y[lenb-i-1]=(b[i]-'0');
	int len=lena+lenb;
	for (int i=0;i<=lena-1;i++){
		for (int j=0;j<=lenb-1;j++){
			z[i+j]+=(x[i]*y[j]);
			if (z[i+j]>=10){
				z[i+j+1]+=(z[i]/10);
				z[i+j]%=10;
			}
		}
	}
	string s="";
	int flag=0;
	for(int i=lena+lenb;i>=0;i--){
		if(z[i]!=0) flag=1;
		if(flag==1)	s+=z[i]+'0';	
	}
	return s;
}

int main(){
	cin>>a>>b;
	string ans=Mul_s(a,b);
	cout<<ans;
}
