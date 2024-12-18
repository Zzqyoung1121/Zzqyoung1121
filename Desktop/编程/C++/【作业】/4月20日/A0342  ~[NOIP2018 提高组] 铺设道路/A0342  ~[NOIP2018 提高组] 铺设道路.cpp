#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a;
    cin>>a;
    int cnt=a,last=a;
    for (int i=2;i<=n;i++){
    	int d;
    	cin>>d;
    	if (d>last)	cnt+=(d-last);
    	last=d;
	}
	cout<<cnt; 
}
