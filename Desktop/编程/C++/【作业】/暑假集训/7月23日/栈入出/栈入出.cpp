#include <iostream>
using namespace std;

int a[1005],topp; 

//��ջ
void push(){
	cin>>a[++topp];
}

//��ջ
void pop(){
	a[topp--]=0;
}

//����ջ��Ԫ��
void top(){
	cout<<a[topp]<<" ";
} 

//��ջ��Ԫ�ظ���
int size(){
	return topp;
}

//�ж�ջ�� 
bool empty(){
	if (topp==0)	return true;
	else	return false;
}

int main(){
	int n;
	cin>>n;
	for (int i=1;i<=n;i++)	push();
	for (int i=1;i<=n;i++){
		top();
		pop();
	}
//	cout<<endl;
//	cout<<size()<<" "<<empty()<<endl;
} 
