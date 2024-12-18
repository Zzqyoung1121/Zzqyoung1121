#include <iostream>
using namespace std;
//函数格式参考主函数

/*
数据类型(void无返回值类型) 函数名(参数列表){
	
	
	return 数据(返回的和数据类型匹配);//函数结束 
}*/ 

double f(double x,double y){
	double ans;
	if (x>y)	ans=x;
	else	ans=y;
	return ans;
}


int main(int argc,char** argv){//主函数 一个程序只有一个主函数 
	double x,y,z;
	cin>>x>>y>>z;
	cout<<f(f(x,y),z)
	return 0;
}
