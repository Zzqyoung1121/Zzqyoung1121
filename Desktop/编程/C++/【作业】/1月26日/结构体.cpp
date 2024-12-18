#include <iostream>
#include <>
using namespace std;

//结构体 - 用户自己构造的数据类型

//数据类型:
//int(-2e9<->2e9),long long,double,float,char,bool,string,unsigned int(无符号整形)(0<->4e9)

/*
结构体 
struct 类型名{
	元素1;
	元素2;
	...... 
};
*/

struct Student{
	char name[30];
	int id;
	int age;
	int score;
};//创建数据类型Student 

int main(){
	int n;
	Student a[100];//100个Student类型的变量
	cin>>n;
	for (int i=1;i<=n;i++)	cin>>a[i].name>>a[i].id>>a[i].age>>a[i].score;
	
	//sort可以用于所有数组
	sort(a+1,a+n+1,mingzi);	// 排序规则名 
	
	for (int i=1;i<=n;i++)	cout<<a[i].name<<" "<<a[i].score<<endl;
	
	return 0;
} 
