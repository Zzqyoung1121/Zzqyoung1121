#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct ST{
	double t;
	int id;
}a[1005]; 

bool cmp(ST p,ST q){
	return p.t<q.t;
}

int main(){
	int n;
	cin>>n;
	double s[1005],sum=0;
	for (int i=1;i<=n;i++){
		cin>>a[i].t;
		a[i].id=i;
	} 
	sort(a+1,a+n+1,cmp);
	for (int i=1;i<=n;i++){
		s[i]=s[i-1]+a[i].t;
	}
	for (int i=1;i<=n;i++){
		cout<<a[i].id<<" ";
	}
	cout<<endl;
	for (int i=1;i<=n;i++){
		sum+=s[i-1];
	}
	printf("%.2lf",sum/n);
}
