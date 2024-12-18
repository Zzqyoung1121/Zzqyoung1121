#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int Map[130][130];
long long int b[100000];

int main(){
	int d,n,f=1;
	cin>>d;
	cin>>n;
	for (int i=1;i<=n;i++){
		int x,y,k;
		cin>>x>>y>>k;
		Map[x][y]=k;
	}
	int a=0;
	int Max=0;
	for (int i=0;i<=128;i++){
		for (int j=0;j<=128;j++){
			long long int a=0;
			for (int x=i-d;x<=i+d;x++){
				for (int y=j-d;y<=j+d;y++){
					if (x>=0&&y>=0&&x<=128&&y<=128)	a+=Map[x][y];
				}
			}
			b[f]+=a;
			f++;
			if (a>Max)	Max=a;
		}
	}
	int s=0;
	for (int i=1;i<f;i++){
		if (b[i]==Max)	s++;
	}
	cout<<s<<" "<<Max;
}
