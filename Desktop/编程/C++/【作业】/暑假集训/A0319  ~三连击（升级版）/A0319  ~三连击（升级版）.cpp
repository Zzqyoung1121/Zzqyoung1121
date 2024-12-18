#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int a,b,c,flag,m[10]={0,1,2,3,4,5,6,7,8,9};

int main(){
	cin>>a>>b>>c;
	if (a==0||b==0||c==0){
		cout<<"No!!!";
		return 0;
	}
	do {
		int ta=m[1]*100+m[2]*10+m[3];
		int tb=m[4]*100+m[5]*10+m[6];
		int tc=m[7]*100+m[8]*10+m[9];
		if (ta%a==0&&ta/a*b==tb&&ta/a*c==tc&&tb/b*c==tc){
			cout<<ta<<" "<<tb<<" "<<tc<<endl;
			flag=1;
		}
	}while (next_permutation(m+1,m+9+1)); 	 
	if (flag==0)	cout<<"No!!!";
}
