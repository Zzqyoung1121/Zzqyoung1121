#include <iostream>
using namespace std;

int n,k,cnt;

void dfs(int num,int sum,int las){
	if (num==k){
		if (sum==n)	cnt++;
		return ;
	}
	for (int i=las;i*(k-num)<=n-sum;i++){
		dfs(num+1,sum+i,i);
	}
}

int main(){
	cin>>n>>k;
	dfs(0,0,1);
	cout<<cnt;
}
