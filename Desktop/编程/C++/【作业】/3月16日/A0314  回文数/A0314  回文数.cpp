#include <bits/stdc++.h>
using namespace std;

int n;//n进制
string Plus_f(string a,string b){//高精度加法
	string ans="";
	int lena=a.length(),lenb=b.size(),len=max(lena,lenb);
	int x[10000]={0},y[10000]={0},z[10000]={0};
	
	for(int i=lena-1,j=0;i>=0;i--,j++){
		if(a[i]>='0'&&a[i]<='9')
			x[j]=a[i]-'0';//a-f 手动转化为10-15
		else{//16进制  a-f  10-15
			if(a[i]>='a'&&a[i]<='f') x[j]=a[i]-'a'+10;
			if(a[i]>='A'&&a[i]<='F') x[j]=a[i]-'A'+10;
		}
	}
	for(int i=lenb-1,j=0;i>=0;i--,j++) y[j]=b[i]-'0';//a-f 手动转化为10-15
	for(int i=0;i<=max(lena,lenb);i++){
		z[i]+=x[i]+y[i];
		if(z[i]>=n){
			z[i]-=n;
			z[i+1]+=1;
		}
	}
	int k;
	for(int i=max(lena,lenb);i>=0;i--){
		if(z[i]!=0){
			k=i;break;
		}
	}
	for(int i=k;i>=0;i--){
		ans+=(char)(z[i]+'0');//转回字母的时候对于10-15 需要特殊处理为a-f
	}
	return ans;
}

string strrev_s(string p){//字符串逆置函数
	string q="";
	for(int i=p.size()-1;i>=0;i--){
		q+=p[i];
	}
	return q;
}


int main(){
	string m;
	cin>>n>>m;//是一个n进制的数字
	int cnt=0;
	while(cnt<30){
		string tm=strrev_s(m);//tm是m逆置
		if(m==tm){
			cout<<"STEP="<<cnt;
			return 0;
		}
		m=Plus_f(m,tm);
		cnt++;
	}
	cout<<"Impossible!";
}

