#include <bits/stdc++.h>
#include <set>
using namespace std;

set<int>s;//��С��������� //ÿ��ֻ����һ�� 
multiset<int>m;

int main(){
	s.insert(5);
	s.insert(3);
	auto it=s.find(3);
	it++;
	cout<<*it<<" "; 
	s.insert(1);
	s.insert(4);
	it--;
	cout<<*it<<endl;
	//��׼д��	set<int>::iterator i;//������
	
	//auto ���ݱ�����ֵ�������Զ�����������һ��Ҫ��ֵ�� 
	//s.begin()	��ʼλ�� 
	//s.end()	����λ��
	for (auto i=s.begin();i!=s.end();i++){
		cout<<*i<<" ";
	}
	
	set<int>::iterator pt=s.find(3);//3��λ��
	//���������� ++��--;
	pt++; 
	cout<<*pt;
//	s.erase(3);//ɾ�� 
//	s.clear();//��� 
	auto lt=s.lower_bound(3);//��һ��>=3��λ�� 
	auto rt=s.upper_bound(3);//��һ��>3��ֵ 
	//s.size;
	//s.empty;
}
