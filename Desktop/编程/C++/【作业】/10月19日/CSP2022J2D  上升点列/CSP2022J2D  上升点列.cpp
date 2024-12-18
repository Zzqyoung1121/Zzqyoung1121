#include <iostream>
#include <bits/stdc++.h>
#define int long long
using namespace std;

struct ST{
	int x,y;
}a[505];

int n,k;

bool cmp(ST x,ST y){
	return x.x<y.x || (x.x==y.x&&x.y<y.y);
}

int main(){
//	freopen("point.in","r",stdin);
//	freopen("point.out","w",stdout);
	cin>>n>>k;
	for (int i=1;i<=n;i++)	cin>>a[i].x>>a[i].y;
	sort(a+1,a+n+1,cmp);
}

