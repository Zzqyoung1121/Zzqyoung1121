#include <iostream>
using namespace std;

int a[1005];
int f=1,b,n;

//��� 
void push(int e){
	a[++b]=e;
}

//���� 
void pop(){
	for (int i=f+1;i<=b;i++)	a[i-1]=a[i];
	b--;
}

//���ʶ�ͷԪ��
int front(){
	return a[f];
} 

//�ж϶����Ƿ�Ϊ�� 
bool empty(){
	if (f>b)	return 1;
	else	return 0;
} 

//����Ԫ�ظ��� 
int size(){
	return b;
}

int main(){
	cin>>n;
	for (int i=1;i<=n;i++){
		int e;
		cin>>e;
		push(e);
	}
	
	if (!empty()){
		cout<<"������в�Ϊ��"<<" ";
		cout<<size();
	} 
	cout<<endl;
	
	for (int i=1;i<=n;i++){
		cout<<front()<<" ";
		pop();
	}
}
