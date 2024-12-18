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

string Plu_s(string a,string b){
	int x[3000]={0};
	int y[3000]={0};
	int z[3000]={0};
	int lena=a.size(),lenb=b.size();
	for(int i=lena-1,j=0;i>=0;i--,j++){
		x[j]=a[i]-'0';
	}
	for(int i=lenb-1,j=0;i>=0;i--,j++){
		y[j]=b[i]-'0';
	}
	int t=0;
	int len=max(lena,lenb);
	for(int i=0;i<=len;i++){
		z[i]=x[i]+y[i]+t;
		if(z[i]>=10){
			z[i]-=10;
			t=1;
		}else{
			t=0;
		}
	}
	string c="";
	int k;
	for(int i=len;i>=0;i--){
		if(z[i]!=0){
			k=i;
			break;
		}
	}
	for(int i=k;i>=0;i--)c+=(z[i]+'0');
	return c;
}

int main(){
	long long n;
	string s="0";
	cin>>n;
	for (int i=1;i<=n;i++){
		string t="1",ti="0";
		for (int j=1;j<=i;j++){
			for (int k=1;k<=j;k++){
				ti=Plu_s(ti,t);
			}
		}
		s=Plu_s(s,ti);
	}
	cout<<s;
}
