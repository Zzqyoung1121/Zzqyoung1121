#include <bits/stdc++.h>
#include <queue>
using namespace std;

//�ڴ��е�ÿһ���ֽڶ��б��
//ͨ��������ȥ�ҵ�ǰ�ı���
//���������ǳ���Ϊ��ַ 

//&�����ã�ȡ��ַ���� 
//������ῼ�Ǵ���һ�������ĵ�ַ��ָ�� 
//*��ָ���ʾ����������ָ����� 
//	 ʹ�ý׶Σ������� 
//����ָ��Ŀռ�ռ��Ϊ4B
 
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
