#include <bits/stdc++.h> 
using namespace std;

int a[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
int main(){
	int n,m,cnt=0;
	cin>>n>>m;
	for (int u=1;u<=12;u++){
		for (int d=1;d<=a[u];d++){
			int y=d%10*1000+d/10*100+u%10*10+u/10;
			int x=y*10000+u*100+d;
			if (x<=m&&x>=n){
				cnt++;
			}
		}
	}
	cout<<cnt;
}
