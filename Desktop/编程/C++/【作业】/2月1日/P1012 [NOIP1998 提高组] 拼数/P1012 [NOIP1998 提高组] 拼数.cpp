#include <iostream>
# include <algorithm> 
using namespace std;

bool cmp(string x,string y){
	return x+y>y+x;
}

int main(){
	string a[25];
	int n;
	cin>>n;
	for (int i=1;i<=n;i++)	cin>>a[i];
	sort(a+1,a+n+1,cmp);
	for (int i=1;i<=n;i++)	cout<<a[i];
}
