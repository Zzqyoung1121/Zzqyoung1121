#include <iostream>
using namespace std;

int n,a[105]; 

int main(){
	cin>>n;
	for (int i=1;i<=n;i++)	cin>>a[i];
	
	//增 在第p个位置插入e
	int p,e;
	cin>>p>>e;
	for (int i=n;i>=p;i--)	a[i+1]=a[i];
	a[p]=e;
	n++;
//	for (int i=1;i<=n;i++)	cout<<a[i]<<" "; 
//	cout<<endl;
	
	//删 删除第p个位置的元素
	cin>>p;
	for (int i=p+1;i<=n;i++)	a[i-1]=a[i];
	n--;
//	for (int i=1;i<=n;i++)	cout<<a[i]<<" "; 

} 
