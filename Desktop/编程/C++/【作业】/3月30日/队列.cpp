#include <bits/stdc++.h>
#include <queue>//����ͷ�ļ�
using namespace std;

//������<����>	����;
//��������һ��
 
queue<int> Q;

int main(){
	Q.push(1);//����1 
	Q.push(5);//����5 
	Q.push(4);//����4 
	
//	Q.size();  �Ƿ�Ϊ��  ���� �ǿռ� 
//	Q.empty(); Ԫ�ظ��� 
	while (!Q.empty()){//������Ԫ�� 
	//Q.size()>0
		int t=Q.front();//����ȡ�� 
		cout<<t<<endl;
		Q.pop();//ɾ�� 
	}
} 

//int a[10000];
//int l=0,r=0;
//cin>>a[r];r++;
//cout<<a[l];l++;

 
