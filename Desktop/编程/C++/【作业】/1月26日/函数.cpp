#include <iostream>
using namespace std;
//������ʽ�ο�������

/*
��������(void�޷���ֵ����) ������(�����б�){
	
	
	return ����(���صĺ���������ƥ��);//�������� 
}*/ 

double f(double x,double y){
	double ans;
	if (x>y)	ans=x;
	else	ans=y;
	return ans;
}


int main(int argc,char** argv){//������ һ������ֻ��һ�������� 
	double x,y,z;
	cin>>x>>y>>z;
	cout<<f(f(x,y),z)
	return 0;
}
