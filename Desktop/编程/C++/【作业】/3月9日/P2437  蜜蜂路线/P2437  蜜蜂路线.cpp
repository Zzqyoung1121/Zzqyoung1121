#include <iostream>
using namespace std;

string plus_s(string a,string b){
	int x[500]={0};
	int y[500]={0};
	int z[500]={0};
	int lena=a.size(),lenb=b.size();
	
	for(int i=lena-1,j=0;i>=0;i--,j++)	x[j]=a[i]-'0';
	for(int i=lenb-1,j=0;i>=0;i--,j++)	y[j]=b[i]-'0';
	
	int t=0;
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
	string x="1",y="1",z;
	int n,m;
	cin>>m>>n;
	if (n==1)	cout<<x;
	else if (n==2)	cout<<y;
	else{
		for (int i=m+2;i<=n;i++){
			z=plus_s(x,y);
			x=y;
			y=z;
		}
		cout<<z;
	}
} 
