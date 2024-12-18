#include <bits/stdc++.h>
#include <queue>//队列头文件
using namespace std;

//容器名<类型>	名字;
//命名规则一致
 
queue<int> Q;

int main(){
	Q.push(1);//存入1 
	Q.push(5);//存入5 
	Q.push(4);//存入4 
	
//	Q.size();  是否为空  空真 非空假 
//	Q.empty(); 元素个数 
	while (!Q.empty()){//队列有元素 
	//Q.size()>0
		int t=Q.front();//复制取出 
		cout<<t<<endl;
		Q.pop();//删除 
	}
} 

//int a[10000];
//int l=0,r=0;
//cin>>a[r];r++;
//cout<<a[l];l++;

 
