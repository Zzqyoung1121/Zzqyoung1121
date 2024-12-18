#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int m;

int main(){
	cin>>m;
	for (int l=1;l<=m;l++){
		for (int r=l;r<=m;r++){
			int len=(r-l+1);
			int ans=(l+r)*len/2;
			if (len>1&&ans==m)	cout<<l<<" "<<r<<endl;
		}
	}
} 
