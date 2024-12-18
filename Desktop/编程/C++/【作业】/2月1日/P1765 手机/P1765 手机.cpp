#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int a[26]={1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4};
int main(){
	string s;
	int x=0;
	getline(cin,s);
	for (int i=0;i<s.size();i++){
		if (s[i]>='a'&&s[i]<='z')	x+=a[s[i]-97];
		if(s[i]==' ')	x++; 
	}	
	cout<<x;
}
