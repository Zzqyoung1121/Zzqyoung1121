#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct ST{
	int x,y;
}t[5005];

bool cmp(ST p,ST q){
	return p.y<q.y;
}

int main(){
	int n,s,a,b,cnt=0;
	cin>>n>>s;
	cin>>a>>b;
	for (int i=1;i<=n;i++){
		cin>>t[i].x>>t[i].y;
	}
	sort(t+1,t+n+1,cmp);
	for (int i=1;i<=n&&s>=t[i].y;i++){
		if (t[i].x<=a+b){
			cnt++;
			s-=t[i].y;
		}
	}
	cout<<cnt;
}
