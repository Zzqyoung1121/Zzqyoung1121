#include <bits/stdc++.h>
using namespace std;

int main(){
	int m,n;
	cin>>m>>n;
	for (int i=1;i<=m;i++){
		if (m%i==0){
			if (n%i==0){
				cout<<i<<" ";
			}
		}
	}
}
