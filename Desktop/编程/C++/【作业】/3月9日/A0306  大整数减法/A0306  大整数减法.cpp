#include <iostream>
using namespace std;

string minus_s(string a,string b){
	string c="";
	int lena=a.size(),lenb=b.size();
	
	if (lena<lenb)	{string t=a;a=b;b=t;c+="-";swap(lena,lenb);}
	else if (lena==lenb){
		if (a<b)	{string t=a;a=b;b=t;c+="-";}
		else if (a==b){
			return "0";
		}
	}  

	int x[1000]={0},y[1000]={0},z[1000]={0};
	for(int i=lena-1,j=0;i>=0;i--,j++)	x[j]=a[i]-'0';
	for(int i=lenb-1,j=0;i>=0;i--,j++)	y[j]=b[i]-'0';
//	for(int i=0;i<lena;i++)	cout<<x[i];
//	cout<<endl;
//	for(int i=0;i<lenb;i++)	cout<<y[i];
//	cout<<endl;
	
	int t=0,len=max(lena,lenb);
	for(int i=0;i<=len;i++){
		z[i]=x[i]-y[i]-t;
		if(z[i]<0){
			z[i]+=10;
			t=1;
		}else{
			t=0;
		}
	}
	
	int flag=0;
	for (int i=len;i>=0;i--){
		if (z[i]!=0)	flag=1;
		if (flag==1)	c+=(z[i]+'0');
	}
	return c;
}

int main(){
	string a,b;
	cin>>a>>b;
	cout<<minus_s(a,b);
}
