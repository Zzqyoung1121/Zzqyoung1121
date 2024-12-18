#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	for(int i=1;;i++){
		if(n%2==0){
			n/=2;
		}
		else{
			n-=1;
		}
		if(n==1){
			cout<<i;
			break;
		}
	}
}
