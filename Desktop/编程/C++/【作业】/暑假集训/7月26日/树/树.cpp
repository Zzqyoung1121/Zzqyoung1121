#include <iostream>
using namespace std;

struct tree{
	int key;
	int ls;
	int rs;
}a[1005];

//���� 
int create(int p){
	for (int i=1;i<=p;i++){
		cin>>a[i].key;
		if (2*i<=p) 	a[i].ls=2*i;
		if (2*i+1<=p)	a[i].rs=2*i+1;
	}
	return 1;
}

//�������
void bianli1(int p){
	if (p==0)	return ;
	else {
		cout<<a[p].key<<" ";
		bianli1(a[p].ls);
		bianli1(a[p].rs);
	}
} 

//�������
void bianli2(int p){
	if (p==0)	return ;
	else {
		bianli2(a[p].ls);
		cout<<a[p].key<<" ";
		bianli2(a[p].rs);
	}
} 

//�������
void bianli3(int p){
	if (p==0)	return ;
	else {
		bianli3(a[p].ls);
		bianli3(a[p].rs);
		cout<<a[p].key<<" ";
	}
} 

int main(){
	int n;
	cin>>n;
	int root=create(n); 
	cout<<"�������:";
	bianli1(root); 
	cout<<endl;
	cout<<"�������:";
	bianli2(root); 
	cout<<endl;
	cout<<"�������:";
	bianli3(root); 
	cout<<endl;
}
