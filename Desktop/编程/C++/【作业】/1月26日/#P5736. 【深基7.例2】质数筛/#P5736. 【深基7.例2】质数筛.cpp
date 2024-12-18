#include <iostream>
using namespace std;

int main(){
	int n,a,f=0;
	cin>>n;
	for (int i=1;i<=n;i++){
		f=0;
		cin>>a;
		for (int j=2;j<a;j++){
			if (a%j==0){
				f=1;
			} 
		}
		if (f==0&&a!=1||a==2)	cout<<a<<" "; 
	}
}
