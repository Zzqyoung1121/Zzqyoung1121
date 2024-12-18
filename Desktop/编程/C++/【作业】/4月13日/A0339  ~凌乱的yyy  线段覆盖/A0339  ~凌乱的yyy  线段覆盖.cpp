#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct ST{
	int a,b;
}t[1000005];

bool cmp(ST p,ST q){
	return p.b<q.b;
}

int main(){
	int n,cnt=1;
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>t[i].a>>t[i].b;
	}
	sort(t+1,t+n+1,cmp);
	for (int i=1;i<=n;i++){
		for (int j=i+1;j<=n;j++){
			if (t[j].a>=t[i].b){
//				cout<<t[j].a<<" "<<t[i].b<<endl;
				cnt++;
				i=j;i--;
				break;
			}
		}
	}
	cout<<cnt;
} 
