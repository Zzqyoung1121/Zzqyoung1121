#include <bits/stdc++.h>
#include <queue>
using namespace std;

//内存中的每一个字节都有编号
//通过这个编号去找当前的变量
//这个编号我们称其为地址 

//&：引用（取地址符） 
//计算机会考虑储存一个变量的地址：指针 
//*：指针表示：声明这是指针变量 
//	 使用阶段：解引用 
//所有指针的空间占比为4B
 
int main(){
	int a=3;
	int *pa=&a;
	float b=3.14; 
	float *pb=&b;
	char c='c';
	char *pc=&c;
	double *x,*y;
	cout<<pa<<" "<<*pa<<endl;
	*pa=10;
	cout<<a<<" "<<*pa<<endl; 
	
	int s[1000]={1,2,3};
	cout<<s<<" "<<s[1]<<*(s+2)<<endl;
	//s[i] == *(s+i);
}

//int a,b;
//printf("%d",&a);
//cout<<endl;
//printf("%d",&b); 
