#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int a[10]={0,0,2,3,4,6,7,8,9,10};

int main(){
	string s;
	cin>>s;
	int x=0;
	for (int i=1;i<=9;i++)		x+=(s[a[i]]-'0')*i;
	int ans=x%11;
	if (s[12]!='X'&&(s[12]-'0')==ans)	cout<<"Right";
	else if (s[12]=='X'&&ans==10)	cout<<"Right";
	else{
		for (int i=0;i<=11;i++)	cout<<s[i];
		if (ans!=10)	cout<<ans;
		else	cout<<'X';
	}
}

