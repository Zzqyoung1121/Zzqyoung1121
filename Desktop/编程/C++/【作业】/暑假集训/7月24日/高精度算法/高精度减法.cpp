#include <iostream>
using namespace std;

int x[1005],y[1005],z[1005];
string a,b;

bool cmp(string a,string b){
	return a.size()>b.size() || (a.size()==b.size() && a>=b);
} 

string Min_s(string a,string b){
	int lena=a.size();
	int lenb=b.size();
	for (int i=0;i<=lena-1;i++)	x[lena-i-1]=(a[i]-'0');
	for (int i=0;i<=lenb-1;i++)	y[lenb-i-1]=(b[i]-'0');
	int len=max(lena,lenb);
	for (int i=0;i<=len-1;i++){
		z[i]+=(x[i]-y[i]);
		if (z[i]<0){
			z[i]+=10;
			z[i+1]--;
		}
	}
	bool flag=0; 
	bool f_flag=0;
	string s="";
	for (int i=len-1;i>=0;i--){
		if (z[i]!=0 && flag==0)	flag=1;
		if (flag==1){
			s+=(z[i]+'0');
			f_flag=1;
		}
	}
	if (!f_flag)	s="0";
	return s;
}

int main(){
	cin>>a>>b;
	if (!cmp(a,b)){
		swap(a,b);
		cout<<'-';
	}
	string ans=Min_s(a,b);
	cout<<ans;
}
