#include <iostream>
using namespace std;

int a[1005],n;

void maopao(){
	//ð������:
	for (int i=n-1;i>=1;i--){
		for (int j=1;j<=i;j++){
			if (a[j]>a[j+1])	swap(a[j],a[j+1]);
		}
	}
	//ʱ�临�Ӷ�	O(n^2)
	//�ȶ� 
}

void xuanze(){
	//ѡ������ 
	for (int i=1;i<=n-1;i++){
		for (int j=i+1;j<=n;j++){
			if (a[i]>a[j])	swap(a[i],a[j]);
		}
	}
	//ʱ�临�Ӷ�	O(n^2)
	//���ȶ� 
} 

void charu(){
	//��������
	for (int i=2;i<=n;i++){
		for (int j=1;j<=i-1;j++){
			if (a[j]>a[i]){
				int t=a[i];
				for (int k=i-1;k>=j;k--)	a[k+1]=a[k];
				a[j]=t;
				break;
			}
		}
	} 
	//ʱ�临�Ӷ�	O(n^2)
	//�ȶ� 
}

int main(){
	cin>>n;
	for (int i=1;i<=n;i++)	cin>>a[i];
	//�����㷨����  
	for (int i=1;i<=n;i++)	cout<<a[i]<<" ";
}

