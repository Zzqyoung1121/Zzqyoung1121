#include <iostream>
using namespace std;
//高精度的加  减  乘  第一步逆置转整 
string Min_s(string a,string b){
	string c="";
	int lena=a.size(),lenb=b.size();
	if(lena<lenb) {string t=a;a=b;b=t;c+="-";swap(lena,lenb);}
	else if(lena==lenb){
		if(a<b)	{string t=a;a=b;b=t;c+="-";}
		else if(a==b){
			return "0";
		}
	}
	
	int x[3000]={0},y[3000]={0},z[3000]={0};
	for(int i=lena-1,j=0;i>=0;i--,j++)	x[j]=a[i]-'0';
	for(int i=lenb-1,j=0;i>=0;i--,j++)	y[j]=b[i]-'0';
	
	int len=max(lena,lenb),t=0;
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
	for(int i=len;i>=0;i--){
		if(z[i]!=0) flag=1;
		if(flag==1) c+=(z[i]+'0');
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
	string c="";
	int flag=0;
	for(int i=0;i<lena;i++){
		if(z[i]!=0) flag=1;//从高往低遇到第一个不为0的数字
		if(flag==1)	c+=z[i]+'0';
	}
	return c;
}

int main(){
	
	
}
