#include <bits/stdc++.h> 
using namespace std;

int main(){
	int n,f=1;
	cin>>n;
	int a[105][105];
	for (int i=1;i<=n;i++){
		if (i%2==1){
			for (int j=1;j<=n;j++){
				a[i][j]==f++;
			}
		}
		else{
			for (int j=n;j>=1;j--){
				a[i][j]==f++;
			}
		}
	}
	for (int i=1;i<=f;i++){
		for (int j=1;j<=n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
