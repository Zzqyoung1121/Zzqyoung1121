#include <iostream>
using namespace std;

bool check(int k){
	for(int i=2;i<=k-1;i++){
		if(k%i==0)	return false;
	}
	return true;
}

void f(int k){
	for(int i=2;i<=k;i+=1){
		int j=k-i;
		if(check(i)&&check(j)){
			cout<<k<<"="<<i<<"+"<<j<<endl;
			return;
		}
	}
}

int main(){
	int n;
	cin>>n;
	for(int i=4;i<=n;i+=2)	f(i);
}
