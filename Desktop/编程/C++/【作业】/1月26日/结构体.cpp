#include <iostream>
#include <>
using namespace std;

//�ṹ�� - �û��Լ��������������

//��������:
//int(-2e9<->2e9),long long,double,float,char,bool,string,unsigned int(�޷�������)(0<->4e9)

/*
�ṹ�� 
struct ������{
	Ԫ��1;
	Ԫ��2;
	...... 
};
*/

struct Student{
	char name[30];
	int id;
	int age;
	int score;
};//������������Student 

int main(){
	int n;
	Student a[100];//100��Student���͵ı���
	cin>>n;
	for (int i=1;i<=n;i++)	cin>>a[i].name>>a[i].id>>a[i].age>>a[i].score;
	
	//sort����������������
	sort(a+1,a+n+1,mingzi);	// ��������� 
	
	for (int i=1;i<=n;i++)	cout<<a[i].name<<" "<<a[i].score<<endl;
	
	return 0;
} 
