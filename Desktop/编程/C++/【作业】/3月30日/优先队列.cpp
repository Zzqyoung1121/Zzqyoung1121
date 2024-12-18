#include <bits/stdc++.h>
#include <queue>
using namespace std;
 
priority_queue<int>q; //打的先出 每一次插入操作 logn 
priority_queue<int,vector<int>,greater<int> > t;

int main(){
	q.push(3);
	q.push(1);
	q.push(5);
	
	while (q.size()>0){
		cout<<q.top()<<endl;
		q.pop();
	}

	t.push(3);
	t.push(1);
	t.push(5);
	
	while (t.size()>0){
		cout<t.top()<<endl;
		t.pop();
	}

	q.push(-3);
	q.push(-1);
	q.push(-5);
	
	while (q.size()>0){
		cout<<-q.top()<<endl;
		q.pop();
	}
}
