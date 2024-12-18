#include <iostream>
using namespace std;

int main(){
	int a[10005]={0};
	int n,k=0,i=1;
	cin>>n;
	int m=n;
	while (m>1){
		if (a[i]==0){
			k++;
			if (k!=1){
				a[i]=1;
				m--;
			}
			if (k==3){
				k=0;
			}
		}
		i=i%n+1;
	}
	for (int i=1;i<=n;i++){
		if (a[i]==0){
			cout<<i;
		}
	}
}
