#include <iostream> 
using namespace std;
 
int main(){
	int n,m;
	cin>>m>>n;
	for (int i=m;i<=n;i++){
		if (i%3==0&&i%5!=0){
			cout<<i<<" ";
		}
	} 
}
