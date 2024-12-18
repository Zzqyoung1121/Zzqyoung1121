#include <bits/stdc++.h>
#include <set>
using namespace std;

set<int>s;//从小到大的数组 //每种只出现一次 
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
	//标准写法	set<int>::iterator i;//迭代器
	
	//auto 根据变量赋值的类型自动调整（声明一定要赋值） 
	//s.begin()	开始位置 
	//s.end()	结束位置
	for (auto i=s.begin();i!=s.end();i++){
		cout<<*i<<" ";
	}
	
	set<int>::iterator pt=s.find(3);//3的位置
	//迭代器可以 ++、--;
	pt++; 
	cout<<*pt;
//	s.erase(3);//删除 
//	s.clear();//清空 
	auto lt=s.lower_bound(3);//第一个>=3的位置 
	auto rt=s.upper_bound(3);//第一个>3的值 
	//s.size;
	//s.empty;
}
