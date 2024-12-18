#include <iostream>
using namespace std;

int x[1005],y[1005],z[1005];
string a,b;

string Plu_s(string a,string b){
	int lena=a.size();
	int lenb=b.size();
	for (int i=0;i<=lena-1;i++)	x[lena-i-1]=(a[i]-'0');
	for (int i=0;i<=lenb-1;i++)	y[lenb-i-1]=(b[i]-'0');
	int len=max(lena,lenb);
	for (int i=0;i<=len-1;i++){
		z[i]+=(x[i]+y[i]);
		if (z[i]>=10){
			z[i]-=10;
			z[i+1]++;
		}
	} 
	string s="";
	if (z[len]!=0)	len++;
	for (int i=len-1;i>=0;i--)	s+=(z[i]+'0');
	return s;
}

int main(){
	cin>>a>>b;
	string ans=Plu_s(a,b);
	cout<<ans;
}
