#include <iostream>
using namespace std;

int a[1005];
int f=1,b,n;

//入队 
void push(int e){
	a[++b]=e;
}

//出队 
void pop(){
	for (int i=f+1;i<=b;i++)	a[i-1]=a[i];
	b--;
}

//访问队头元素
int front(){
	return a[f];
} 

//判断队列是否为空 
bool empty(){
	if (f>b)	return 1;
	else	return 0;
} 

//队列元素个数 
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
		cout<<"如果队列不为空"<<" ";
		cout<<size();
	} 
	cout<<endl;
	
	for (int i=1;i<=n;i++){
		cout<<front()<<" ";
		pop();
	}
}
