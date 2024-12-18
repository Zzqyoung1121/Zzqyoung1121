#include <iostream>
using namespace std;

long long n,k,book[100005];

long long dfs(int n){
//	cout<<n<<" ";
	if (n==0){
		return 1;
	}
	if (book[n]!=0){
		return book[n]%100003;
	}
	else {
		for (int i=1;i<=k;i++){
			if (n-i>=0){
				book[n]+=dfs(n-i); 
			}
		}
		return book[n]%100003;
	}
}

int main(){
	cin>>n>>k;
	cout<<dfs(n)%100003;
} 
