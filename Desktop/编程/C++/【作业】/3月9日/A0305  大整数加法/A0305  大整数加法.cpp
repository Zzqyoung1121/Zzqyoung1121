#include <iostream>
using namespace std;

string plus_s(string a,string b){
	int x[200]={0};
	int y[200]={0};
	int z[200]={0};
	int lena=a.size(),lenb=b.size();
	
	for(int i=lena-1,j=0;i>=0;i--,j++)	x[j]=a[i]-'0';
	for(int i=lenb-1,j=0;i>=0;i--,j++)	y[j]=b[i]-'0';
	
	int t=0;//��ǰ��λ��
	int len=max(lena,lenb);
	for(int i=0;i<=len;i++){
		z[i]=x[i]+y[i]+t;
		if(z[i]>=10){
		z[i]-=10;
		t=1;
		}
		else	t=0;
	}
	
	string c="";
	int k;
	for(int i=len;i>=0;i--){
		if(z[i]!=0){
			k=i;
			break;
		}
	}
	for(int i=k;i>=0;i--)	c+=(z[i]+'0');
	return c;
}

int main(){
	string a,b,c;
	cin>>a>>b;
	c=plus_s(a,b);
	cout<<c;
}
