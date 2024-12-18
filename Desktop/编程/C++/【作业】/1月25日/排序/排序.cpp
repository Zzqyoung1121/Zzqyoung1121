#include <bits/stdc++.h>
using namespace std;

int n,a[1000005];
int main(){
	//冒泡 -- 时间复杂度(n^2) (n<=10000)
	freopen("冒泡.txt","r",stdin);
	cin>>n;
	for (int i=1;i<=n;i++)	cin>>a[i];
	for (int i=1;i<=n-1;i++){
		for (int j=1;j<=n-1;j++){
			if (a[j]>a[j+1]){
				swap(a[j],a[j+1]);
			}
		} 
	}
	for (int i=1;i<=n;i++)	cout<<a[i]<<" ";
	
	/* 
	//选择 -- 时间复杂度(n^2) (n<=10000)
	freopen("选择.txt","r",stdin);	
	cin>>n;
	for (int i=1;i<=n;i++)	cin>>a[i];
	for (int i=1;i<=n-1;i++){
		for (int j=i+1;j<=n;j++){
			if (a[i]<a[j]){
				swap(a[i],a[j]);
			}
		} 
	}
	for (int i=1;i<=n;i++)	cout<<a[i]<<" ";
	
	
	//插入 -- 时间复杂度(n^2) (n<=10000)
	freopen("插入.txt","r",stdin);
	cin>>n;
	for (int i=1;i<=n;i++)	cin>>a[i];
	for (int i=2;i<=n;i++){
		for (int j=i;j>1;j--){
			if (a[j]<a[j-1]){
				swap(a[j],a[j-1]);
			}
		} 
	}
	for (int i=1;i<=n;i++)	cout<<a[i]<<" ";
	
	//计数 -- 数字范围小，数字量大 
	//计数 -- 时间复杂度(范围+n) 
	int t[101]; //n的范围为100以内自然数 
	freopen("计数.txt","w",stdin);
	cin>>n;
	for (int i=1;i<=n;i++)	cin>>a[i];t[a[i]++];
	
	for (int i=1;i<=n;i++){
		for (int j=1;j<=t[i];j++){
			cout<<i<<" ";
		}
	}
	
	//sort排序函数 -- 时间复杂度(n*log2n)
	
	/*x^a=p 	    a个x相乘为(p)
	  sqrt[a][p]=x a个(x)相乘为p
	  logxp=a		(a)个x相乘为p*/ 
	  
	//#include <algorithm> 算法库头文件
	//sort(数组名+排序范围首元素地址，数组名+排序范围尾元素地址+1) 
	/*cin>>n;
	for (int i=1;i<=n;i++)	cin>>a[i];
	
	sort(a+1,a+n+1); //从小到大 
	sort(a+1,a+n+1,greater<int>()) //从大到小 
	
	for (int i=1;i<=n;i++)	cout<<a[i]<<" ";*/
}
