#include <iostream>
using namespace std;
int main(){
	int a;
	cin>>a;
	if(a%7==0||a%10==7||a/10==7){
		cout<<"yes";
	}
	else{
		cout<<"no";
	}
}
