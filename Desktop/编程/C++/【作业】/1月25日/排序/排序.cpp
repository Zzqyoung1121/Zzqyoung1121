#include <bits/stdc++.h>
using namespace std;

int n,a[1000005];
int main(){
	//ð�� -- ʱ�临�Ӷ�(n^2) (n<=10000)
	freopen("ð��.txt","r",stdin);
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
	//ѡ�� -- ʱ�临�Ӷ�(n^2) (n<=10000)
	freopen("ѡ��.txt","r",stdin);	
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
	
	
	//���� -- ʱ�临�Ӷ�(n^2) (n<=10000)
	freopen("����.txt","r",stdin);
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
	
	//���� -- ���ַ�ΧС���������� 
	//���� -- ʱ�临�Ӷ�(��Χ+n) 
	int t[101]; //n�ķ�ΧΪ100������Ȼ�� 
	freopen("����.txt","w",stdin);
	cin>>n;
	for (int i=1;i<=n;i++)	cin>>a[i];t[a[i]++];
	
	for (int i=1;i<=n;i++){
		for (int j=1;j<=t[i];j++){
			cout<<i<<" ";
		}
	}
	
	//sort������ -- ʱ�临�Ӷ�(n*log2n)
	
	/*x^a=p 	    a��x���Ϊ(p)
	  sqrt[a][p]=x a��(x)���Ϊp
	  logxp=a		(a)��x���Ϊp*/ 
	  
	//#include <algorithm> �㷨��ͷ�ļ�
	//sort(������+����Χ��Ԫ�ص�ַ��������+����ΧβԪ�ص�ַ+1) 
	/*cin>>n;
	for (int i=1;i<=n;i++)	cin>>a[i];
	
	sort(a+1,a+n+1); //��С���� 
	sort(a+1,a+n+1,greater<int>()) //�Ӵ�С 
	
	for (int i=1;i<=n;i++)	cout<<a[i]<<" ";*/
}
