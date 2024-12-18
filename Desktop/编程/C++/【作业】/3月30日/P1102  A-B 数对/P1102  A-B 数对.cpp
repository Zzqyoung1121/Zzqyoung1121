#include <bits/stdc++.h>
#include <map>
using namespace std;

int n,a[200005],c;
map<int,int> T;
long long ans=0;

int main(){
	cin>>n>>c;
	for (int i=1;i<=n;i++){
		cin>>a[i];
		T[a[i]]++;
	}	
	for (int i=1;i<=n;i++){
		int x=a[i]+c;
		ans+=T[x];
	}
	cout<<ans;
}
