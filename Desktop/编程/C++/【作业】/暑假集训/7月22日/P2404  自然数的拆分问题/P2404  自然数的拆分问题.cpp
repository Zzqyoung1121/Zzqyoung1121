#include <iostream>
using namespace std;

int n,p[10];

void dfs(int step,int sum,int now){
	if (sum==n){
		cout<<p[1];
		for (int i=2;i<step;i++)	cout<<'+'<<p[i];
		cout<<endl;
		return ;
	}
	for (int i=now;i<n;i++){
		if (sum+i<=n){
			p[step]=i;
			dfs(step+1,sum+i,i);
		}
	}
} 


int main(){
	cin>>n;
	dfs(1,0,1);
}
