#include <iostream>
using namespace std;

struct ST{
	long long c,y;
}t[10005];

int main(){
	int n,s;
	cin>>n>>s;
	for (int i=1;i<=n;i++){
		cin>>t[i].c>>t[i].y;
	}
	long long Min=t[1].c;
	long long ans=0;
	for (int i=1;i<=n;i++){
		ans+=Min*t[i].y;
		if (Min+s>t[i+1].c)	Min=t[i+1].c;
		else	Min+=s;
//		cout<<Min<<" ";
	}
	cout<<ans;
}


