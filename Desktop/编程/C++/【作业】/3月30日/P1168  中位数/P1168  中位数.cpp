#include <bits/stdc++.h>
#include <set>
using namespace std;

multiset<int> t; 
int a[100005];
int main(){
	int n;
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>a[i];
	}
	t.insert(a[1]);
	auto it=t.begin();
	cout<<*it<<endl;
	for (int i=2;i+1<=n;i+=2){
		if (a[i]>a[i+1])	swap(a[i],a[i+1]);
		t.insert(a[i]);
		t.insert(a[i+1]);
		if (a[i+1]<=*it){
			it--;
		}
		else if (a[i]>=*it){
			it++;
		}
		cout<<*it<<endl;
	}
}
