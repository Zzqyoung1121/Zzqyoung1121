#include <bits/stdc++.h>
#include <queue>
using namespace std;

priority_queue<int,vector<int>,greater<int> > Q;

int main(){
	int n;
	cin>>n;
	long long ans=0;
	for (int i=1;i<=n;i++){
		int a;
		cin>>a;
		Q.push(a);
	}
	while(Q.size()>1){
		long long t=0;
		t+=Q.top();
		Q.pop();
		t+=Q.top();
		Q.pop();
		Q.push(t);
		ans+=t;
	} 
	cout<<ans;
}
