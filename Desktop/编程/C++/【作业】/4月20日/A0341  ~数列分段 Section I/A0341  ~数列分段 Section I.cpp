#include <iostream>
using namespace std;

int main(){
    int n,m;
	cin>>n>>m;
	int a[100005];
	for (int i=1;i<=n;i++)	cin>>a[i];
	int cnt=1,last=0;
	for (int i=1;i<=n;i++){
		if (last==0)	last=a[i];
		else if (last+a[i]<=m)	last+=a[i];
		else{
			last=a[i];
			cnt++;
		}
	} 
	cout<<cnt;
}
