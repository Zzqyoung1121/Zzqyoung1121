#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n,a[5005],b[5005],k=1,m=5000;

int main(){
	cin>>n;
	for (int i=1;i<=n;i++){
		char c;
		cin>>c;
		if (c=='F')	a[i]=0;
		else 	a[i]=1;
	}
	for (int i=1;i<=n;i++){
		memset(b,0,sizeof(b));
		int cnt=0,now=0,flag=1;
		for (int j=1;j<=n;j++){
			now^=b[j];
			if (now^a[j]==1){
				if (j+i-1<=n){
					now^=1;
					b[j]^=1;
					b[j+i]^=1;
					cnt++;
				}
				else {
					flag=0;
					break;
				}
			}
		}
		if (flag==1){
			if (cnt<m){
				m=cnt;
				k=i;
			}
		}
	}
	cout<<k<<" "<<m;
} 
