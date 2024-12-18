#include <iostream>
using namespace std;

int n,h,cnt;

int main(){
	cin>>n;
	cin>>h;
	int cnt=h,last=h;
	for (int i=2;i<=n;i++){
		int d;
		cin>>d;
		if (d>last)	cnt+=(d-last);
		last=d;
	}
	cout<<cnt;
}
