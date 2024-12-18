#include <iostream>
using namespace std;


int main(){
	int t[30]={0};
	int maxn=0,minn=105,f=1;
	string a;
	cin>>a;
	for (int i=0;i<a.size();i++){
		t[a[i]-'a']++;
	}
	for (int i=0;i<=25;i++){
		if (t[i]>maxn)	maxn=t[i];
		if (t[i]<minn&&t[i]!=0)		minn=t[i];
	}
	int c=maxn-minn;
	if (c==1||c==0)		f=0;
	else{
		for (int i=2;i<=c-1;i++){
			if (c%i==0)	f=0;
		}
	}
	if (f==1){
		cout<<"Lucky Word"<<endl<<c;
	}
	else{
		cout<<"No Answer"<<endl<<0; 
	}
}
