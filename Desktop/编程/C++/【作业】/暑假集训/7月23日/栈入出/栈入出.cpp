#include <iostream>
using namespace std;

int a[1005],topp; 

//入栈
void push(){
	cin>>a[++topp];
}

//出栈
void pop(){
	a[topp--]=0;
}

//访问栈顶元素
void top(){
	cout<<a[topp]<<" ";
} 

//求栈中元素个数
int size(){
	return topp;
}

//判断栈空 
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
