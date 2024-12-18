#include <iostream> 
using namespace std;
 
int main(){
	int n,s=1;
	cin>>n;
	for (int i=1;i<=n;i++){
		s*=i;
	}
	cout<<s;
} 
