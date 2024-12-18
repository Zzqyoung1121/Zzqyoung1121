#include <bits/stdc++.h>
#include <set>
using namespace std;

set<int> s;

int main(){
	int n;
	cin>>n;
	for (int i=1;i<=n;i++){
		int a;
		cin>>a;
		s.insert(a); 
	}
	cout<<s.size()<<endl; 
	for(auto i=s.begin();i!=s.end();i++){
		cout<<*i<<" ";
	}
}
